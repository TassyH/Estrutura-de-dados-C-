#include <stdio.h>
#include <string.h>

#define MAX 200
#define TAM 50

struct Pessoa {
	int id;
	char nome[MAX];
	int idade;	
	int situacao;
};
//typedef é um tipo de dado que eu to criando. Igual tem int, string, etc
typedef struct Pessoa TPessoa;
//TPessoa é o nome do meu tipo de dado novo, igual tem o String.

void cadastrar_pessoa(TPessoa vetorPessoas[TAM], int posicao){
	
	printf("Nome: ");
	fgets(vetorPessoas[posicao].nome, MAX-1, stdin);
	printf("Idade: ");
	scanf("%d", &vetorPessoas[posicao].idade);
	getchar();
	
	vetorPessoas[posicao].id = posicao;
	vetorPessoas[posicao].situacao = 1;
	
	printf("Pessoa cadastrada com sucesso \n");
	
}
void remover_pessoa(TPessoa vetorPessoas[TAM], int n){
	// n = numeros de cadastradas
	
	int id;
	printf("entre com o id: \n");
	scanf("%d", &id);
	if(id >= 0 && id <n){
		if(vetorPessoas[id].situacao == 1){
			vetorPessoas[id].situacao = 0;
			printf("pessoa removida com sucesso \n");
		}else{
			printf("pessoa ja desativada \n");
		}
	}else{
		printf("ID invalido \n");

	}
}


void atualizar_pessoa(TPessoa vetorPessoas[TAM], int n){
	int id;
	int opcao;
	printf("entre com o id: \n");
	scanf("%d", &id);
	
	if(id >= 0 && id <n && vetorPessoas[id].situacao == 1){
		printf("deseja editar NOME ou IDADE? 1 pra nome e 2 pra idade");
	    scanf("%d", &opcao);
	    if(opcao == 1){
	    	printf("Nome: \n");
	    	fgets(vetorPessoas[id].nome, MAX-1, stdin);
	    	printf("Seu novo nome: %s", vetorPessoas[id].nome);
		}else if(opcao == 2){
			printf("Idade: \n");
			scanf("d% ", &vetorPessoas[id].idade);
		}
	}
	
	
}



void imprimir_pessoas(TPessoa vetorPessoas[TAM], int n) {
	
	int i;
	
	
	printf("\n*** Pessoas cadastradas ***\n\n");

		
		for (i=0; i<n; i++) {	
		if(vetorPessoas[i].situacao == 1){
		   printf("Id: %d \n", vetorPessoas[i].id);
		   printf("Nome: %s", vetorPessoas[i].nome);
		   printf("Idade: %d\n\n", vetorPessoas[i].idade);
			}
	}
	
	printf("\n");	


}

void pesquisar_pessoa_nome(TPessoa vetorPessoas[TAM], int n) { //int n é o numero de cadastros feitos armazenados na variavela posicao que eu vou passar na main e cadastrar_pessoa
	
	char nome[MAX];
	int i, encontrou;
	
	printf("Entre com o nome: ");
	fgets(nome, MAX-1, stdin); //eh como se fosse o Scanner nextLine para ler a string digitada no teclado
	
	printf("\n");
	
	encontrou = 0;
	
	for (i=0; i<n; i++) {
	    if(vetorPessoas[i].situacao == 1){		
		   if (strcmp(vetorPessoas[i].nome, nome) == 0) {
			   printf("Nome: %s", vetorPessoas[i].nome);
			   printf("Idade: %d\n\n", vetorPessoas[i].idade);
	    	   encontrou = 1;
		   }		
     	}
    }
	
	if (encontrou == 0) {
		printf("Pessoa nao encontrada\n");
	}
	
	printf("\n");
}

void pesquisar_pessoa_id(TPessoa vetorPessoas[TAM], int n) { 
	int i, encontrou;
	int id;
	
	printf("Entre com o id: ");
	scanf("%d", &id); 
	
		
	printf("\n");
	
	encontrou = 0;
	
	for (i=0; i<n; i++) {
	    if(vetorPessoas[i].situacao == 1){		
		   if (vetorPessoas[i].id == id) {
			   printf("Nome: %s", vetorPessoas[i].nome);
			   printf("Idade: %d\n\n", vetorPessoas[i].idade);
	    	   encontrou = 1;
		   }		
     	}
    }
	
	if (encontrou == 0) {
		printf("id_pessoa nao encontrada\n");
	}
	
	printf("\n");
	
}

void imprimir_menu() {
	printf("1 - Cadastrar \n");
	printf("2 - Imprimir todos\n");
	printf("3 - Pesquisar\n");
	printf("4 - Excluir\n");
	printf("5 - Sair\n");
}

int main() {
	
	TPessoa vetorPessoas[TAM];
	int op;
	
	int posicao;
	posicao = 0;
	
	do {
		imprimir_menu();
		printf("Entre com a opcao: ");
		scanf("%d", &op);
		getchar();
		
		switch (op) {
			case 1:
				cadastrar_pessoa(vetorPessoas,posicao);
				posicao++;
				break;
			case 2:
				imprimir_pessoas(vetorPessoas, posicao);
				break;
			case 3:
				pesquisar_pessoa_id(vetorPessoas, posicao);
				break;
			case 4:
				remover_pessoa(vetorPessoas, posicao);
				break;
			case 5:
				break;
			default:
				printf("Opcao invalida\n");
				break;
		}
		
	} while (op != 5);
	
	return 0;	
}

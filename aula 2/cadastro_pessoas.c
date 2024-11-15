#include <stdio.h>
#include <string.h>

#define MAX 200
#define TAM 3

struct Pessoa {
	char nome[MAX];
	int idade;	
};
typedef struct Pessoa TPessoa;

void cadastrar_pessoas(TPessoa pessoas[TAM]) {
	
	int i;
	
	printf("*** Cadastro de Pessoas ***\n");
	
	for (i=0; i<TAM; i++) {	
		printf("Nome: ");
		fgets(pessoas[i].nome, MAX-1, stdin);
		printf("Idade: ");
		scanf("%d", &pessoas[i].idade);
		getchar();
	}
	printf("\n");
}

void imprimir_pessoas(TPessoa pessoas[TAM]) {
	
	int i;
	
	printf("\n*** Pessoas cadastradas ***\n\n");
	
	for (i=0; i<TAM; i++) {	
		printf("Nome: %s", pessoas[i].nome);
		printf("Idade: %d\n\n", pessoas[i].idade);
	}
	
	printf("\n");	
}

void pesquisar_pessoa(TPessoa pessoas[TAM]) {
	
	char nome[MAX];
	int i, encontrou;
	
	printf("Entre com o nome: ");
	fgets(nome, MAX-1, stdin);
	
	printf("\n");
	
	encontrou = 0;
	
	for (i=0; i<TAM; i++) {
			
		if (strcmp(pessoas[i].nome, nome) == 0) {
			printf("Nome: %s", pessoas[i].nome);
			printf("Idade: %d\n\n", pessoas[i].idade);
			encontrou = 1;
		}		
	}
	
	if (encontrou == 0) {
		printf("Pessoa nao encontrada\n");
	}
	
	printf("\n");
}

void imprimir_menu() {
	printf("1 - Imprimir todos\n");
	printf("2 - Pesquisar\n");
	printf("3 - Sair\n");
}

int main() {
	
	TPessoa pessoas[TAM];
	int op;
	
	cadastrar_pessoas(pessoas);
	
	do {
		imprimir_menu();
		printf("Entre com a opcao: ");
		scanf("%d", &op);
		getchar();
		
		switch (op) {
			case 1:
				imprimir_pessoas(pessoas);
				break;
			case 2:
				pesquisar_pessoa(pessoas);
				break;
			case 3:
				break;
			default:
				printf("Opcao invalida\n");
				break;
		}
		
	} while (op != 3);
	
	return 0;	
}

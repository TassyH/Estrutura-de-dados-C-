
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 200

struct Produto {
    char nome[MAX];
    float preco;
    int estoque;
    int situacao; 
    int id;
}; typedef struct Produto TProduto;

void cadastrar(TProduto *produtos, int n){
    
    printf("Digite o nome do produto: ");
    fgets(produtos[n].nome, MAX-1, stdin);
    printf("Digite o preco do produto: ");
    scanf("%f", &produtos[n].preco);
    printf("Digite a qtdd de estoque do produto: ");
    scanf("%d", &produtos[n].estoque);
    getchar();
	
	printf("Produto cadastrado com sucesso\n\n");
}

void listar(TProduto *produtos, int n){
    int i;
	printf("\nprodutos cadastradas\n\n");
	
	for (i=0; i<n; i++) {
		
	  printf("Nome: %s", produtos[i].nome);
	  printf("Estoque: %d\n", produtos[i].estoque);
	  printf("Peco: %f\n", produtos[i].preco);
	}
	
	printf("\n");
}

void atualizar(TProduto *produtos, int n){
    int i, encontrou;
    char nome[MAX];
	
	printf("Entre com o NOME: ");
	fgets(nome, MAX-1, stdin);
	
	encontrou =0;
	for (i = 0; i <n; i++){
		if(strcmp(produtos[i].nome, nome) == 0){
			printf("Entre com a nova quantidade de estoque: ");
			scanf("%d", &produtos[i].estoque);
            getchar();
			encontrou = 1;
			break;
		}
	}

		printf("\n");
}

void imprimir_menu() {
	printf("1 - Cadastrar\n");
	printf("2 - Imprimir todos\n");;
	printf("3 - Atualizar\n");
	printf("4 - Sair\n");
}

void le_opcao(int *op){
   
    do{
    printf("\nEscolha a opcao: \n");
    scanf("%d", op);
    }while(*op <= 0);

     getchar();
}


int main() {
    TProduto *produtos = NULL; 
    int opcao;
	int contador = 0, id;

    do {
       imprimir_menu();
       le_opcao(&opcao);
		
        switch (opcao) {
            case 1:
            contador++;
            if(contador == 1){
                produtos = (TProduto*) malloc (sizeof(TProduto));
            }else{
                produtos = (TProduto*) realloc (produtos, contador*sizeof(TProduto));
            }
                cadastrar(produtos, contador-1);
                break;
            case 2:
                listar(produtos, contador);
                break;
            case 3:
                atualizar(produtos, contador);
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 0);

    free(produtos); 
    return 0;
}

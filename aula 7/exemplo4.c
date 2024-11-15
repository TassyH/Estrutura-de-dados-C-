#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define OP_CADASTRAR 1
#define OP_IMPRIMIR 2
#define OP_SAIR 3

#define MAX 100
struct Pessoa {
	char nome[MAX];
	int idade;
};
typedef struct Pessoa TPessoa;

// Exemplo de aloca��o din�mica de vetor de struct

void cadastra_pessoa(TPessoa vetor[], int pos) {
	
	printf("\nNome: ");
	fgets(vetor[pos].nome, MAX-1, stdin);
	printf("Idade: ");
	scanf("%d", &vetor[pos].idade);
}
void imprime_cadastros(TPessoa vetor[], int n) {
	
	int i;
    printf("\nImprimindo os cadastros:\n");
    for (i=0; i<n; i++) {
        printf("\nNome: %s", vetor[i].nome);
        printf("Idade: %d\n ", vetor[i].idade);
    }
}

void le_opcao(int *op){
    
    do{
    	printf("\nEscolha a opcao: \n");
    	scanf("%d", op);
	}while(*op < 1 || *op > 6);
	

	if(*op >= 1 && *op <= 6){
		printf("opcao valida \n");
	}
		getchar();
}
void imprimir_menu() {
	printf("1 - Cadastrar \n");
	printf("2 - Imprimir todos\n");
	printf("3 - Pesquisar\n");
	printf("4 - Excluir\n");
	printf("5 - Sair\n");
}

int main() {
	TPessoa *vetor;
	int op, n;
	
	n = 0;
    
	do {
		imprimir_menu();
	    le_opcao(&op);
          
	    switch (op) {
	    	case OP_CADASTRAR:
	    		
                n++;
                if (n == 1) {
                	vetor = (TPessoa *) malloc(sizeof(TPessoa));
				}
				else {
					vetor = (TPessoa *) realloc(vetor, n * sizeof(TPessoa));
            	}
            	
				if (vetor == NULL) {
					printf("Erro em alocacao de memoria\n");
	                exit(1);
                }
                
				cadastra_pessoa(vetor, n-1);
                printf("Cadastro realizado\n");
                break;
                    
			case OP_IMPRIMIR:
                imprime_cadastros(vetor, n);
                break;
                
            case OP_SAIR:
                break;
                
            default:
				 printf("opcao invalida"); // agora com a funcao le_opcao ele nunca vai cair no default do switch case
				 break;        
        }
          
    } while (op != OP_SAIR);
     
	free(vetor);
	vetor = NULL;
	
	return 0;
}


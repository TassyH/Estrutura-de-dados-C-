#include <stdio.h>

#define MAX 200

struct Pessoa {
	char nome[MAX];
	int idade;	
};
typedef struct Pessoa TPessoa;

int main() {
	
	TPessoa pessoa1;
	TPessoa pessoa2;
	
	printf("*** Cadastro da pessoa 1 ***\n");
	printf("Nome: ");
	fgets(pessoa1.nome, MAX-1, stdin);
	printf("Idade: ");
	scanf("%d", &pessoa1.idade);
	
	getchar();
	
	printf("*** Cadastro da pessoa 2 ***\n");
	printf("Nome: ");
	fgets(pessoa2.nome, MAX-1, stdin);
	printf("Idade: ");
	scanf("%d", &pessoa2.idade);
	
	
	
	printf("\n*** Pessoas cadastradas ***");
	printf("\nNome: %s", pessoa1.nome);
	printf("Idade: %d\n", pessoa1.idade);
	
	printf("\nNome: %s", pessoa2.nome);
	printf("Idade: %d\n", pessoa2.idade);
	
}

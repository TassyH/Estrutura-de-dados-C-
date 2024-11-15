#include <stdio.h>

#define TAM 3

int main() {
	int i;
	int vetor[TAM] = {1,2,3};
	int *p;
	
	p = vetor;
	
	printf("Variavel vetor: %d\n", vetor);
	printf("Variavel p: %d\n", p);
	
	printf("Endereco da primeira posicao do vetor: %d\n", &vetor[0]);
	printf("Endereco da segunda posicao do vetor: %d\n", &vetor[1]);
	printf("Endereco da terceira posicao do vetor: %d\n\n", &vetor[2]);
	
	for (i=0; i<TAM; i++) {
		printf("%d ", p[i]);
	}
	
}

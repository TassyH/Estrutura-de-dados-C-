#include <stdio.h>
#define TAM 100

// Exemplo de alocação estática de memória (alocação de vetor)

void le_vetor(int vetor[], int n) {
	int i;
	printf("\nEntre com os elementos:\n");
	for (i=0; i<n; i++) {
		scanf("%d", &vetor[i]);
	}
}

void imprime_vetor(int vetor[], int n) {
	int i;
	printf("\nImprimindo o vetor:\n");
	for (i=0; i<n; i++) {
    	printf("%d ", vetor[i]);
    }
}

int main() {
	int vetor[TAM];
	int n;
    
	printf("Entre com o numero de elementos:\n");
	scanf("%d", &n);
	
	// declarar um vetor de tamanho exatamente n?
    
	le_vetor(vetor, n);
    
	imprime_vetor(vetor, n);
    
	return 0;
}


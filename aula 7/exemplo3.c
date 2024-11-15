#include <stdio.h>
#include <stdlib.h>

// Exemplo de alocação dinâmica de vetor

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
	int *vetor;
	int n;
	    
	printf("Entre com o numero de elementos:\n");
	scanf("%d", &n);
	
	vetor = (int *) malloc(n * sizeof(int));
	
	if (vetor == NULL) {
		printf("Erro em alocacao de memoria\n");
		exit(1);
	}
    
	le_vetor(vetor, n);
    
	imprime_vetor(vetor, n);
	
	free(vetor);
	vetor = NULL;
    
	return 0;
}


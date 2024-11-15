#include <stdio.h>
#include <stdlib.h>

// Exemplo de alocação dinâmica de matriz

int **aloca_matriz(int m, int n){	
	// A variável matriz é um ponteiro duplo
	int **matriz;
	int i;
  
  	// Para sua alocação foi utilizada a função malloc() usando cast de ponteiro duplo de inteiro
	matriz = (int **) malloc(m * sizeof(int *));
	if (matriz == NULL) {
		return NULL;
	}	
  	// Assim, a variável matriz aponta para o primeiro ponteiro, do vetor de ponteiros
  
  	
	for (i=0; i<m; i++) {
		// Para alocação de cada um dos ponteiros da sequência, também foi utilizada função malloc()
  		// porém usando cast de ponteiro de inteiro
		matriz[i] = (int *) malloc(n * sizeof(int));
      
	  	if (matriz[i] == NULL) {
			return NULL;
         }
	}
	// Assim, cada ponteiro aponta para um vetor de inteiros com n posições
	
  return matriz;
}

int **libera_matriz(int **matriz, int m, int n) {
	int  i;

	if (matriz == NULL) {
		return NULL;
	}
	
	for (i=0; i<m; i++) {
		free(matriz[i]);
	}
  
  	free(matriz);
  	return NULL;
}

void le_matriz(int **matriz, int m, int n) {
	int i, j;
	
	printf("\nInforme os valores da matriz:\n");
	for (i=0; i<m; i++) {
		for (j=0; j<n; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}
}

void imprime_matriz(int **matriz, int m, int n) {
	int i, j;
	
	printf("\nImprimindo a matriz:\n");
	for (i=0; i<m; i++) {
		for (j=0; j<n; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int m, n;
	int **matriz;
	
	printf("Entre com o numero de linhas e colunas:\n");
	do {
		scanf("%d %d", &m, &n);
	} while (m<1 || n<1);
	
  	
	matriz = aloca_matriz(m, n);
  	
  	if (matriz == NULL) {
  		printf("Erro em alocacao de memoria\n");
  		exit(1);
	}
	
	le_matriz(matriz, m, n);
	
	imprime_matriz(matriz, m, n);
	
	matriz = libera_matriz(matriz, m, n);
	
	return 0;
}


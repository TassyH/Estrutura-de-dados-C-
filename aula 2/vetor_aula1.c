#include <stdio.h> 
#define TAM 5


void preencher_vetor(int v[TAM]){
    int i;
	
	printf("informe os vetores: \n");
	
	for(i = 0; i <TAM; i++){
		scanf("%d", &v[i]);
	}
	
}

void imprime_vetor(int v[TAM]){
	int i;
	printf("vetor com posicoes preenchidas:");
	for(i = 0; i < TAM; i++){
	printf(" %d", v[i]);
	}
	
}

int main(){
	
	int vetor[TAM];
	int i;
	
	preencher_vetor(vetor);
	imprime_vetor(vetor);
	
	
	return 0;
}

#include <stdio.h> 
#define TAM 5 //tamanho do vetor foi definido aqui


void preencher_vetor(int vetor[TAM]){
    int i;
	
	printf("informe os vetores: \n");
	
	for(i = 0; i <TAM; i++){
		scanf("%d", &vetor[i]);
	}
		printf("\n");
}

void soma_vetor(int vetor[TAM]){
	int i, soma;
	soma = 0;
	
	for(i = 0; i <TAM; i++){
		soma = soma + vetor[i];
		
	}
	printf("soma: %d", soma);
	printf("\n");
}


void media_vetor(int vetor[TAM]){
	int i, soma;
	double media;
	soma = 0;
	
	for(i = 0; i <TAM; i++){
		soma = soma + vetor[i];
	}
	media = (double)soma/i;
	printf("media: %lf", media);
}

void multi_vetor(int vetor[TAM]){
    int i, soma;
	double multi;
	multi = 1;
	
	for(i = 0; i <TAM; i++){
		multi = multi * vetor[i];
	}
	printf("multiplicacao: %lf", multi);
		
}

int main (){
	int vetor[TAM];
	preencher_vetor(vetor);
	soma_vetor(vetor);
	media_vetor(vetor);
	multi_vetor(vetor);
	return 0;
}


//1. Faça um programa em C para realizar as seguintes operações sobre um vetor de números inteiros:
//a) Preencher o vetor com valores informados pelo usuário;
//b) Imprimir todos os elementos do vetor;
//c) Imprimir o vetor na ordem inversa.
//Obs.: Cada operação deve ser realizada por uma função.

#include <stdio.h> 
#define TAM 5


void preencher_vetor(int v[TAM]){
    int i;
	
	printf("informe os vetores: \n");
	
	for(i = 0; i <TAM; i++){
		scanf("%d", &v[i]);
	}
		printf("\n");
}

void imprime_invertido(int v[TAM]){
    int i;
	for(i = TAM-1; i >= 0; i--){
		printf("%d", v[i]);
	}
	
	printf("\n");
}


int main(){

	int vetor [TAM];
	
	preencher_vetor(vetor);
	imprime_invertido(vetor);



return 0;

}

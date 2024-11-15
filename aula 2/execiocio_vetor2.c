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


void conta_par_impar(int vetor[TAM]){
	int i,  conta_par,  conta_impar, contador;
	
	conta_par = 0;
	conta_impar = 0;
	
	for(i = 0; i < TAM; i++){
		if(vetor[i]%2==0){
			conta_par ++;
		}
		if(vetor[i]!=0){
			conta_impar++;
		}
	}
	
	printf("pares: %d\n", conta_par);
	printf("impares: %d\n", conta_impar);
}

void maior_menor(int vetor[TAM]){
	
	int maior;
	int menor, i;
	maior = vetor[0];
	
		for(i = 0; i < TAM; i++){
	     	if(vetor[i]>maior){
	     		maior = vetor[i];
			 }
			if(vetor[i] < maior){
				menor = vetor[i];
			}
			 
			 }
	
	
	printf("maior: %d \n", maior);
	printf("menor: %d \n", menor);
	
}




int main(){

	int vetor [TAM];
	preencher_vetor(vetor);
	conta_par_impar(vetor);
	maior_menor(vetor);


return 0;

}

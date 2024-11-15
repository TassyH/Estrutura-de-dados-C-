#include <stdio.h>

void main(){
	
	int numSeq;
	float menor, maior, num;
	
	printf("Entre com a sequencia dos numeros \n");
	scanf("%d", &numSeq);
	
		printf("entre com o numero: \n");
		scanf("%f", &num);
		maior = num;
		menor = num;
		
	  int i;
	  for(i = 0; i < numSeq; i++){
		printf("entre com o numero: \n");
		scanf("%f", &num);
		
		if(num>maior){
			maior = num;
		}
		if(num < menor){
			menor = num;
		}
		
	  }
	
	printf("o maior eh: %f \n", maior);
	printf("o menor eh: %f \n", menor);

	
	
}

#include <stdio.h>

void main(){
	
	int n, numPositivo, numNeg, numZero, numIgualZero;
	float num;
	
	printf("Entre com a sequencia dos numeros");
	scanf("%d", n);
	
	for(int i = 0; i < n; i++){
		print("entre com o numero: /n")
		scanf("%f", &num);
		
		if(num < 0){
			numNeg++;
		}else if (num > 0){
			numPositivo++;
		}else if(num == 0){
			numIgualZero++;
		}else{
			printf("nao sei o que vc quer da vida moço \n");
		}
	}
	
	printf("total de num positivo: \n", numPositivo);
	printf("total de num negativo: \n", numNeg);
	printf("total de num igual a zero: \n", numIgualZero);
	

}

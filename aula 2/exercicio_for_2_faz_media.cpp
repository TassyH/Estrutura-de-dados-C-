// faça Faça um programa que leia N números e imprima a média dos números

#include <stdio.h>
#include <math.h>

int main(){
	
	int n;
	float media, somador, num;
	printf("entre com o numero da sua repetição: \n");
	scanf("%d", &n);
	
	for(int i = 0; i<n;i++){
		printf("entre o numero: \n");
		scanf("%f", &num);
		
		somador = somador+num;
	}
	printf("total somado: %f \n ", somador);
	media = somador/n;
	printf("Media: %f \n ", media);

	return 0;
}

#include <stdio.h>

//Faça uma função chamada calcula_imc() que recebe como parâmetros a altura e o peso de uma
//pessoa e retorna o índice de massa corporal de acordo com a fórmula:


float calcula_imc(float peso, float altura){
	
	float calcImc, calcAlt;
	calcAlt = altura*altura;
	calcImc = peso/calcAlt;
	
	return calcImc;
}


int main(){
	float peso, altura;
	float imc;
	
	printf("Entre com o peso \n");
	scanf("%f", &peso);
	printf("Entre com a altura \n");
	scanf("%f", &altura);
	
	imc = calcula_imc(peso, altura);
	
	printf(" \n %f", imc);
	
	if(imc < 18.5){
		printf("\n Abaixo do peso ideal, bro \n");
	}
	else if(imc < 25){
		printf("Peso ideal \n");
	}
	else if(imc < 30){
		printf("sobrepeso mona \n");
	}
	else{
		printf("obsidade \n");
	}
	
	return 0;
}

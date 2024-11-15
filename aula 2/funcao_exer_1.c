#include <stdio.h>

void exibe_menu_calc(){
	
	float calc;
	printf("Cadastro de estudantes:\n");
	printf("1 - SOMA \n");
	printf("2 - SUBTRACAO \n");
	printf("3 - MULTIPLICACAO \n");
	printf("4 - DIVISAO \n");
	printf("5 - Sair \n");
	
}

float soma(float n1, float n2){
	float soma;
    soma = n1+n2;
	
	return soma;	
}

float subtracao(float n1, float n2){
	float subtracao;
    subtracao = n1-n2;
	
	return subtracao;
}

float multi(float n1, float n2){
	float multi;
    multi = n1*n2;
	
	return multi;
}

float divisao(float n1, float n2){
	float divisao;
    divisao = n1/n2;
	
	
	return divisao;	
}


int main(){
	int opcoes;
	float n1, n2;
	float somaa, sub,mult,div  ;

	do{
		
		exibe_menu_calc();
		scanf("%d", &opcoes);
		printf("Entre com o n1 \n");
		scanf("%f", &n1);	
		printf("Entre com o n2 \n");
		scanf("%f", &n2);
	
		switch(opcoes){
			case 1:
				somaa = soma(n1, n2);
				printf("soma: %f \n", somaa);
	
				break;
			case 2:	
				sub = subtracao(n1, n2);
				printf("subtração: %f \n", sub);
			 	break;
			case 3:	
				mult = multi(n1, n2);
			 	printf("multiplicacaoo: %f \n", mult);
	
			 	break;
			case 4:	
				div = divisao(n1, n2);
				printf("divisao: %f \n", div);
			 	break;
		 	case 5:
		 		
		    default:
	  		 	printf("nhaaa");
	  		 	break;
				
				
		  }
	
        } while (opcoes != 5);
	
	
	
	
	
	return 0;
}



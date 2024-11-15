#include <stdio.h>
#include <math.h>

void main() {

	int x, y;
	

	printf("digite as coordenadas de X: \n");
	scanf("%d", &x);
	printf("digite as coordenadas de Y: \n");
	scanf("%d", &y);
	
	if(x > 0 && x <=90 && y>0 && y <=90){
		printf("quadrante I");
	}else if(x > 0 && x <=90 && y<0){
		printf("quadrante IV");		
	}else if(x < 0 && y>0 && y <=90){
		printf("quadrante II");		
	}else if(x < 0 && y<0){
		printf("quadrante III");		
	}else if(x==0 && y >0){
		printf("sem quadrante: estah no eixo Y");		
	}else if(x>0 && y==0){
		printf("sem quadrante: estah no eixo X");
	}else{
		printf("estah na origem");
	}
	
	
	
	

}

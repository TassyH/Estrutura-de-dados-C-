#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b){
   int aux;
   aux = *a; //bota o * para poder fazer a troca de valores e nao de posição na memoria
   *a = b;
   *b = aux;
	
	
   }   
  


int main(){
	int x, y;
	
	y = 2;
	x = 3;
	
	troca(&x, &y);
	
	printf("x: %d\n", x);
	printf("x: %d\n", y);

	
	return 0;
}

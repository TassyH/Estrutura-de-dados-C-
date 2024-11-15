#include <stdio.h>

int main() {
	
	int x;
	int *px; // * pra declarar uma variavel do tipo ponteiro
	px = &x; //& para retornar o endereço de memoria da variavel
	
	printf("Entre com o valor de x:\n");
	scanf("%d", &x);
	
	printf("Valor de x: %d\n", x);
	
	printf("Endereco de memoria de x: %d\n", &x);
	
	printf("Valor de p: %d\n", px);
	
	return 0;
}

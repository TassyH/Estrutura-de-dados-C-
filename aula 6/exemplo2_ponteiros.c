#include <stdio.h>

int main() {
	
	double x;
	double *px;
	double valor_x;
	px = &x;
	
	printf("Entre com o valor de x:\n");
	scanf("%lf", &x);
	
	printf("Valor de x: %lf\n", x);
	
	printf("Endereco de memoria de x: %d\n", &x);
	printf("Valor de px: %d\n", px);
	
	valor_x = *px;
	printf("Valor da variavel apontada por px: %lf\n", valor_x);
	
	*px = 43.8;
	printf("\nValor de x: %lf\n", x);
	
	return 0;
}

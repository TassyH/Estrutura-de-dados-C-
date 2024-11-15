#include <stdio.h>
#include <math.h>

int main(){
	
	int raio;
	float perimetro, area;
	float pi = 3.14159;
	
#define PI 3.14159

	printf("entre com o valor do raio da circunferencia \n");
	scanf("%d", &raio);
	
	float calcArea;
	
	area = PI * pow(raio,2);
	perimetro = 2 * raio * PI;
	
	printf("\narea da circunferencia: %.2f \n", area);
	printf("\nperimetro da circunferencia: %.2f \n", perimetro);


	
	return 0;
}

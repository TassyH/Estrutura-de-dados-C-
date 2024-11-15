#include <stdio.h>
#include <math.h>

int main() {

	int num, n, i, soma;
	printf("digite o tamanho da sequencia: \n");
	scanf("%d", &n);
	
	soma = 0;
	
	for(i = 1; i <=n; i++){
		printf("digite um numero: \n");
		scanf("%f", &num);
		soma = soma+num;
	}
	printf("Total somado: %d\n", soma);

return soma;
}

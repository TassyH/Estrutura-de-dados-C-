#include <stdio.h>
#include <math.h>

void main() {

	float nota1, nota2;
	float calcPesoAv, calcPesoTrab, calcMedia, somaPesos;

	printf("entre com a nota da avaliacao bimestral: \n");
	scanf("%f", &nota1);
	printf("entre com a nota do trabalho bimestral: \n");
	scanf("%f", &nota2);


	calcPesoAv = nota1 * 7;
	calcPesoTrab = nota2 *3;
	somaPesos = 7 +3;
	calcMedia = (calcPesoAv + calcPesoTrab)/somaPesos;

	printf("\nmedia: %.2f \n", calcMedia);


	if(calcMedia >= 7) {
		printf("Aprovationnn");

	} else if (calcMedia <7 && calcMedia >=4) {
		printf("Recuperationnn");

	} else {
		printf("reprovation baby");

	}



}

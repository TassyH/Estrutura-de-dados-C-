#include <stdio.h>

int main(){
	
	
	int anoAtual, anoNasc, calcIdade;
    
    printf("entre com o ano atual e com o seu ano de descimento: \n");

	scanf("%d %d", &anoAtual, &anoNasc);
	
	calcIdade = anoAtual - anoNasc;
	
	printf("Seu ano atual eh: %d\nSeu ano de nascimento eh: %d\n", anoAtual, anoNasc);

	printf("A sua idade eh %d!", calcIdade);
 
    return calcIdade;
	
}

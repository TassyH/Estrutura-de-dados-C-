#include <stdio.h> 
#define TAM 5 //tamanho do vetor foi definido aqui

/*4. Fa�a um programa em para realizar as seguintes opera��es sobre um vetor de inteiros:
a) Preencher o vetor com valores informados pelo usu�rio;
b) Procurar ou pesquisar por um elemento no vetor;
c) Contar o n�mero de ocorr�ncias de um elemento no vetor (quantas vezes aparece no vetor).
Obs.: O elemento procurado deve ser informado pelo usu�rio. Cada opera��o deve ser realizada por
uma fun��o.*/

void preencher_vetor(int vetor[TAM]){
    int i;
	
	printf("informe os vetores: \n");
	
	for(i = 0; i <TAM; i++){
		scanf("%d", &vetor[i]);
	}
		printf("\n");
}

void pesquisa_vetor(int vetor[TAM]){
	int n, i, encontrou;
	printf("pesquisa o numero: \n");
	scanf("%d", &n);
	for(i = 0; i <TAM; i++){
		if(vetor[i]==n){
		   encontrou = 1;
		   break;
	    }
	}
	
	if(encontrou == 1){
		printf("encontrou");
	}else{
		printf("nao encontrou");
	}
	printf("\n");
}

void conta_ocorrencias(int vetor[TAM]){
    int n, i, conta;
    conta = 0;
	for(i = 0; i <TAM; i++){
		if(vetor[i]==n){
		   conta++;
	    }
	}
	printf("numero de ocorrencias eh: %d", conta);
	
}
int main(){
	
	int vetor[TAM];
	
	preencher_vetor(vetor);
	pesquisa_vetor(vetor);
	conta_ocorrencias(vetor);	
	
	return 0;
}




#include<stdio.h>
#include<stdlib.h>

int main(){
	int i=0,j=0,linha,coluna,mult;
  
 
	printf("Digite a quantidade de linhas:");
	scanf("%d",&i);
  	printf("Digite a quantidade de colunas:");
  	scanf("%d",&j);
  	printf("Digite o multiplo da matriz:");
  	scanf("%d",&mult);	
	int matriz[i][j];
	printf("\nDigite os valores da matriz:\n\n");
	for(linha=0;linha<i;linha++)
		for(coluna=0;coluna<j;coluna++){
			printf("\nMatriz[%d][%d]=",linha,coluna);
			scanf("%d|",&matriz[linha][coluna]);
		}//fim for
	printf("\nMatriz informada:\n\n");
	for(linha=0;linha<i;linha++)
		for(coluna=0;coluna<j;coluna++){
			printf("%d|",matriz[linha][coluna]);
		}//fim for
	printf("\n");
	printf("\nMultiplo: \n");
	for(linha=0;linha<i;linha++){
		for(coluna=0;coluna<j;coluna++){
     		printf("%d ",matriz[linha][coluna]*mult);
		}//fim for
    printf(" \n");
	}

    return 0;
}

/*Uma matriz M pode ser transposta em uma matriz N onde o número de linhas/colunas da primeira passa a
ser o número de colunas/linhas da segunda. Faça um programa que leia uma matriz 4x3, gere sua transposta
e apresente a matriz resultante.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=4,j=3,linha,coluna;
	int matriz[i][j];
	
	printf("\nDigite os valores da matriz:\n\n");
	
	for(linha=0;linha<i;linha++){
		for(coluna=0;coluna<j;coluna++){
			printf("\nmatriz[%d][%d]=",linha,coluna);
			scanf("%d",&matriz[linha][coluna]);
			
		}
	}
	
	printf("\nA matriz digitada foi:\n\n");
	for(linha=0;linha<i;linha++){
		for(coluna=0;coluna<j;coluna++){
			printf("%d  ",matriz[linha][coluna]);
		}
		printf("\n");
	}

  printf("\n\nMatriz transposta:\n\n");
	for(linha=0;linha<j;linha++){
		for(coluna=0;coluna<i;coluna++){
      printf("%d ",matriz[coluna][linha]);
		}
    printf("\n");
	}
  
    return 0;
}

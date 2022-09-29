/*Receba ou gere uma matriz N por M e conte quantos números maiores que X existem na matriz. X deve ser
informado pelo usuário.
*/

#include <stdio.h>
#include "matrixlib.h"

int main(){
	int mat[100][100], linha,colunas,cont,busca,i,j;
	
	printf("Quantidade de linhas e colunas da matriz:");
	scanf("%d%d",&linha, &colunas);
	carregaMatrix(mat,linha,colunas);
	printf("--- Matriz ---\n");
	printMatrix(mat,linha,colunas);
	printf("Valor para verificacao:");
	scanf("%d",&busca);
	for(i=0;i<linha;i++)
		for(j=0;j<colunas;j++)
			if(mat[i][j]>busca)
				cont++;
	printf("%d valores maiores que %d",cont,busca);
	return 0;
	
}

/*Matriz Identidade é uma matriz quadrada (mesmo número de linhas e colunas) onde todos os elementos da
diagonal principal é 1 e os demais elementos da matriz é 0. Gere uma matriz identidade de ordem N e
apresente a mesma na tela, onde N deve ser informado pelo usuário.
*/
#include <stdio.h>
#include "matrixlib.h"

int main(){
	int num, mat[100][100], ordem, i, j;
	printf("Ordem da matriz:");
	scanf("%d",&ordem);
	printf("--- Matriz ---\n");
	printMatrix(mat,ordem,ordem);
	for(i=0;i<ordem;i++){
		for(j=0;j<ordem;j++)
	if(j==i){
		mat[i][j]=1;
	printf("%d |",mat[i][j]);
	}else{
		mat[i][j]=0;
		printf("%d |",mat[i][j]);
	}//fim else
	printf("\n");
	}
	printf("\n");
	return 0;
}

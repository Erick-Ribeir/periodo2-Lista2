/*Receba e apresente uma matriz de N Linhas x M Colunas valores inteiros.
Após isso indique qual é o menor e valor da matriz.
*/

#include <stdio.h>
#include "matrixlib.h"

int main(){
	int num,mat[100][100], linhas,colunas,res,i,j;
	printf("Quantidade de linhas e colunas da matriz:");
	scanf("%d%d",&linhas, &colunas);
	geraMatrix(mat,linhas,colunas);
	printf("--- Matriz ---\n");
	printMatrix(mat,linhas,colunas);
	res = menorMatrix(mat,linhas,colunas);
	printf("Menor valor da Matriz:%d\n",res);
	
	return 0;
}

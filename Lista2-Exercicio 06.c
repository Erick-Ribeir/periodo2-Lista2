/*Escrever um programa C que gere uma matriz de N Linhas x M Colunas e apresente sua diagonal secundária.
*/
#include <stdio.h>
#include "matrixlib.h"

int main(){
	int mat[100][100], ordem, i, j, soma=0,soma1=0;
	printf("Ordem da matriz:");
	scanf("%d",&ordem);
	carregaMatrix(mat,ordem,ordem);
	printf("--- Matriz ---\n");
	printMatrix(mat,ordem,ordem);
	printf("Diagornal Secundaria\n");
	j = ordem-1;
	for(i=0;i<ordem;i++){
		printf("%d |",mat[i][j]);
		soma1+=mat[i][j];
		j--;
	}//fim for
	printf("\nSoma da diagonal secundaria: %d\n",soma1);
	return 0;
}

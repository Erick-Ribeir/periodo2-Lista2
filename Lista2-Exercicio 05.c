/*Escrever um programa C que gere uma matriz de N Linhas x M Colunas e apresente sua diagonal principal.
Dica, limite sua matriz a uma ordem 100.
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
	printf("Diagornal principal\n");
	for(i=0;i<ordem;i++){
		printf("%d |",mat[i][i]);
		soma+=mat[i][i];
	}//fim for
	printf("\nSoma da diagonal principal: %d\n",soma);
	
	return 0;
}

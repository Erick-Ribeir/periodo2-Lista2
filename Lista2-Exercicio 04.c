/*Gere uma matriz de N Linhas x M Colunas. Solicitar um número ao usuário e passe
para uma função que deve verificar quantas vezes este se encontra na matriz.
*/
#include <stdio.h>
#include "matrixlib.h"

int main(){
	int num,mat[100][100], linhas,colunas,cont=0,i,j;
	printf("Quantidade de linhas e colunas da matriz:");
	scanf("%d%d",&linhas, &colunas);
	geraMatrix(mat,linhas,colunas);
	printf("--- Matriz ---\n");
	printMatrix(mat,linhas,colunas);
	printf("Digite o numero para busca: ");
	scanf("%d",&num);
	for(i=0;i<linhas;i++)
		for(j=0;j<colunas;j++)
			if(mat[i][j]==num){
				cont++;
			}	
	printf("Quantidade de vezes encontrado na matriz:%d\n",cont);
	return 0;
}

/*Receba uma matriz como par�metro em uma fun��o e retorne 1 caso ela seja uma matriz de bits
ou 0 caso n�o.
*/

#include <stdio.h>
#include "matrixlib.h"

int main(){
	
	int m[100][100],lin,cols,i,j,cont=0;
	printf("Digite a quantidade de linhas e colunas:");
	scanf("%d%d",&lin,&cols);
	geraMatrix(m,lin,cols);
	printMatrix(m,lin,cols) ;
	for(i=0;i<lin;i++)
		for(j=0;j<cols;j++)
	if(m[i][j]<=9){
		printf("Eh bit!\n");
		cont++;
	}else
	printf("Nao e bit!\n");
	printf("%d",cont);
	return 0;
}

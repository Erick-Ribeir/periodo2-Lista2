/*Calcular a soma de 2 matrizes. *Verifique antes se elas são de mesma ordem.*/

#include <stdio.h>
#include "matrixlib.h"

int main(){
	int m1[50][50],ordem1,ordem2;
	int m2[50][50],i,j;
	int m3[50][50];
	
	printf("Digite a ordem das matrizes 1 e 2:");
	scanf("%d%d",&ordem1,&ordem2);
	geraMatrix(m1,ordem1,ordem1);
	printMatrix(m1,ordem1,ordem1);
	printf("\n--------*****-------*****--------\n");
	geraMatrix(m2,ordem2,ordem2);
	printMatrix(m2,ordem2,ordem2);
	printf("\n--------*****-------*****--------\n");
	if(ordem1 != ordem2){
		printf("Matrizes de ordem diferente!");
	}else{
		m3[50][50]= m1[50][50]+m2[50][50];
		printMatrix(m3,ordem1,ordem2);
	}
	
	return 0;
}

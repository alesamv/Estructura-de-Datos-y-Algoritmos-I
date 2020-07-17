/*Este programa pide al usuario ingresar dos matrices de 3x3, va pidiendo las
posiciones de los números de la primera matriz y después de la segunda, posteriormente, imprime
las matrices como deberían quedar e imprime su producto, en una tercera matriz.*/
#include<stdio.h>
#include <stdlib.h>
int main()
{
	int y,x,z, a[3][3],b[3][3],c[3][3];
	printf("\t\tMultiplicacion de dos Matrices\n");
	for(y=0;y<3;y++)
	{
		for(x=0;x<3;x++)
		{
			printf("Dame el valor de la matriz A, en la posicion [%d][%d]\n", y+1, x+1);
			scanf("%d",&a[y][x]);
		}
	}
	for(y=0;y<3;y++)
	{
		for(x=0;x<3;x++)
		{
			printf("Dame el valor de la matriz B, en la posicion [%d][%d]\n",y+1, x+1);
			scanf("%d",&b[y][x]);
		}
	}
	system("cls");
	printf("\n\t\t\t Matriz A\n");
	for(y=0;y<3;y++)
	{
		 printf("\n\t\t");
		 for(x=0;x<3;x++)
		 {
		 	printf(" %5d ", a[y][x]);
		 }
	}
	
	 printf("\n\t\t\t Matriz B\n");
	 for(y=0;y<3;y++)
	 {
		printf("\n\t\t");
		for(x=0;x<3;x++)
		{
			printf(" %5d ", b[y][x]);
		}
	 }
	 //Multiplicacion de Matrices
	 for(y=0;y<3;y++)
	 {
		for(x=0;x<3;x++)
		{
			c[y][x]=0;
			for(z=0;z<3;z++)
			{
				c[y][x]=(c[y][x]+(a[y][z]*b[z][x]));
			}
		 }
	 }
	printf("\n\t\t\tMatriz C\n");
	for(y=0;y<3;y++)
	{
		printf("\n\t\t");
		for(x=0;x<3;x++)
		{
			printf(" %5d ", c[y][x]);
		}
	}
}


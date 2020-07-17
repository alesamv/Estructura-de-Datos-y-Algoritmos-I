/*Este programa pide al usuario 10 números, y los almacena en un arreglo con ayuda
de un ciclo for, posteriormente realiza la sumatoria de dichos números.*/

#include<stdio.h>
int main()
{
	int x, sum[10], s=0;
	printf("\tSuma de 10 numeros\n");
	for(x=0;x<10;x++)
	{
		printf("Dame un numero:\n");
		scanf("%d",&sum[x]);
		s=s+sum[x];
	}
	printf("La suma es de: %d",s);
	return 0;
}

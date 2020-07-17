#include<stdio.h>
int main()
{
	int iNumero[10][10],i,j;
	printf("\tTabla de multiplicaciones\n");
	for (i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			iNumero[i][j]=(i+1)*(j+1);
			printf("%5d",iNumero[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n\n");
}

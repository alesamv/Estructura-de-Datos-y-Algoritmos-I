#include<stdio.h>
int main()
{
	int iNumero[10][10][10],i,j,k;
	printf("\tTabla de multiplicaciones\n");
	for (i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			{
				for(k=0;k<10;k++)
				{
					iNumero[i][j][k]=(i+1)*(j+1)*(k+1);
					printf("% d",iNumero[i][j][k]);
				}
				printf("\n\n");
			}
			printf("\n\n\n");
		}
		printf("\n\n\n\n");
	}
}

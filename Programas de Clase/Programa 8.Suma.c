#include<stdio.h>
int main()
{
	int x, sum[10], s=0;
	printf("Suma de 10 numeros\n");
	for(x=0;x<10;x++)
	{
		printf("Dame un número:\n");
		scanf("%d",&sum[x]);
		s=s+sum[x];
	}
	
	printf("La suma es de: %d",s);
	return 0;
} 

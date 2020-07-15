#include<stdio.h>

int main()
{
	int x;
	printf("Dame un numero: \n");
	scanf("%d",&x);
	if(x==0)
	{
		printf("El numero es igual a cero");
	}
	else
	{
		if(x<0)
		{
			printf("El numero es menor a cero");
		}
		else
		{
			printf("El numero es mayor a cero");
		}
	}
	return 0;
}

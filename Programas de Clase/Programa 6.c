#include<stdio.h>
int main()
{
	int n;
	printf("Ingrese el numero: \n");
	scanf("%d",&n);
	
	do
	{
		printf("%d",n);
		n=n-1;
	}
	while(n>0);
	return 0;
}

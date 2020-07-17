#include<stdio.h>
int main()
{
	int iLong;
	char cCadena[100];
	printf("Escribe la palabra: \n");
	scanf("%s",cCadena);
	iLong=0;
	while(cCadena[iLong]!='\0')
	{
		iLong++;
	}
	printf("La longitud es: %d\n",iLong);
}

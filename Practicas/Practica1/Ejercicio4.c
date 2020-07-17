/*Este programa pide al usuario una cadena, y usando un ciclo while y un contador
llamado iLong, calcula la longitud de dicha cadena, sin usar strlen*/
#include<stdio.h>
int main()
{
	int iLong=0;
	char cCadena[100];
	printf("Escribe la palabra: \n");
	scanf("%s",&cCadena);
	while(cCadena[iLong]!='\0')
	{
		iLong++;
	}
	printf("La longitud es: %d\n",iLong);
}

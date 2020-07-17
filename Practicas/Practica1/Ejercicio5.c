/* Este programa pide al usuario ingresar una cadena, y sin usar la función strcpy,
copia la cadena a otra cadena.*/
#include<stdio.h>
int main()
{
	int x;
	char cCadena[100], cCopia[100];
	printf("Escribe la palabra: \n");
	scanf("%s",cCadena);
	for(x=0;x<100;x++)
	{
	 	cCopia[x] = cCadena[x];
	}
	cCopia[100] = '\0';
	printf ("El nombre de la cadena es: %s \n" ,cCadena);
	printf ("El nombre de la cadena copiada es: %s \n" ,cCopia);
}

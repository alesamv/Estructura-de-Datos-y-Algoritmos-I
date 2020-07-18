/*En este ejercicio se hace un arreglo de 10 números, y se crea un arreglo de una 
variable tipo apuntador de 10 espacios, en la cual se almacenaran las direcciones 
de memoria de los 10 valores del arreglo iArreglo.*/

#include <stdio.h>
#define p printf
#define s scanf
main ()
{
	int iArreglo[10]={5,7,2,3,8,5,3,9,0,4};
	int pPuntero[10];
	int i;
	for(i=0;i<10;i++)
	{
		pPuntero[i]=&iArreglo[i];
	}
	p("\nElemento\tValor\t Direccion\n");
	for(i=0;i<10;i++)
	{
		p("\n\n %d\t\t %d\t %d",i,*(iArreglo+i), pPuntero[i]);
	}
	p("\n\n");
}


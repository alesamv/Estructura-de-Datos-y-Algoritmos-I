/* En este ejercicio se declara un puntero a un dato simple, mostrando el valor
de la variable, su dirección, el valor al que apunta el puntero y que dirección
almacena. */

#include <stdio.h>
#define p printf
#define s scanf
main ()
{
	int iNumero;
	int *pPuntero;
	iNumero=0;
	pPuntero=&iNumero;
	p("Valor de la variable:%d\n",iNumero);
	p("Direccion de la variable:%d\n",&iNumero);
	p("Valor que almacena el puntero:%d\n",pPuntero);
	p("Valor al que apunta el puntero:%d\n",*pPuntero);
	p("Direccion del puntero:%d",&pPuntero);
	p("\n\n");
}


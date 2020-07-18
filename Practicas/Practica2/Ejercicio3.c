/*Este ejercicio pide determinar lo que imprime el siguiente código el cual ahora 
tiene 3 punteros y los 3 almacenan la misma dirección de iNumero. Imprime 52.*/

#include <stdio.h>
#define s scanf
#define p printf
main ()
{
	int iNum;
	int *pPuntero, *pPuntero2, *pPuntero3;
	iNum=52;
	//Los 3 punteros almacenan la direccion de iNum.
	pPuntero=&iNum;
	pPuntero2=pPuntero;
	pPuntero3=pPuntero2;
	p("\t\t%d",*pPuntero3);
	p("\n\n");
	return 0;
}


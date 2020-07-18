/*Pide al usuario que ingrese 2 números cualquiera y 
se orden de menor a mayor.*/

#include <stdio.h>
#define s scanf
#define p printf
void numero(int *pMayor, int *pMenor);
main ()
{
	int x, y;
	p("Dame un numero: ");
	s("%d",&x);
	p("Dame otro numero: ");
	s("%d",&y);
	numero(&x, &y);
	p("Orden: %d, %d", x,y);
	p("\n\n");
}
void numero(int *pMayor, int *pMenor)
{
	int iAux;
	if(*pMayor>*pMenor)
	{
		iAux=*pMenor;
		*pMenor=*pMayor;
		*pMayor=iAux;
	}
}


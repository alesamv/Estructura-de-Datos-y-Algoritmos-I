/*Dado un n�mero, realizar un incremento de 5 unidades mediante una funci�n que 
utilice paso de par�metros por punteros.*/

#include <stdio.h>
#define s scanf
#define p printf
void incrementa(int *pNumero);
void main(void)
{
	int iNumero;
	p("Dame un numero: ");
	s("%d",&iNumero);
	p("%d+5=",iNumero);
	incrementa(&iNumero);
	p("%d",iNumero);
	p("\n\n");
}
void incrementa(int *pNumero)
{
	*pNumero+=5;
}


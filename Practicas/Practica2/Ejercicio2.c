/*Este programa tiene como finalidad identificar que 
imprime el siguiente código de variables tipo reales, 
el cual imprime 24.6.*/

#include <stdio.h>
#define s scanf
#define p printf
main ()
{
	float fNumero,fRes;
	float *pPuntero;
	pPuntero=&fNumero;
	fNumero=12.3;
	fRes=fNumero+*pPuntero;
	p("\t\t%.2f",fRes);
	p("\n\n");
}



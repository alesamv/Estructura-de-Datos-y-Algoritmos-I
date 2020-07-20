/*Estructuras con punteros*/

# include <stdio.h>

struct EJEMPLO{
	int iEntero;
	int *piEntero;
};

void main (void){
	struct EJEMPLO stPrueba,*pstPrueba;
	int iEntero;
	
	iEntero=9;
	stPrueba.piEntero=&iEntero;
	pstPrueba=&stPrueba;
	
	//Tres formas de acceder a iEntero
	printf("%i,",iEntero);
	printf("%i,",*stPrueba.piEntero);
	printf("%i",*(pstPrueba->piEntero));
	printf("\n\n");

}

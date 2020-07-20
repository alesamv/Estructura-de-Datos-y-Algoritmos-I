/*Estructuras anidadas con punteros*/

# include <stdio.h>

struct PRIMERO{
	int *piEntero;
};

struct SEGUNDO{
	struct PRIMERO stPrimero;
};

struct TERCERO{
	struct SEGUNDO stSegundo;
};

void main (void){
	int iEntero;
	struct TERCERO stPrueba,*pstPrueba;
	
	iEntero=8;
	pstPrueba=&stPrueba;
	stPrueba.stSegundo.stPrimero.piEntero=&iEntero;
	printf("%i",*(pstPrueba->stSegundo.stPrimero.piEntero));
	printf("\n\n");

}

/*Punteros a estructuras*/

# include <stdio.h>

struct EJEMPLO{
	int iCampo1;
	float fCampo2;
};

void main (void){

	//Declaro dos variables tipo EJEMPLO, la segunda de ellas es un puntero
	struct EJEMPLO stMiVar;
	struct EJEMPLO *pstMiVar;
	
	//Declaro que el puntero apunte hacia la variable stMiVar
	pstMiVar=&stMiVar;

	//Inicializo los valores de stMiVar	
	stMiVar.iCampo1=4;
	stMiVar.fCampo2=3.4;
	
	//Accedo por medio del puntero a estructura a los valores de stMiVar
	printf("%i",pstMiVar->iCampo1);
	printf(",%f",pstMiVar->fCampo2);
	
	//Por lo que debe aparecer en pantalla 4,3.400000
	printf("\n\n");

}

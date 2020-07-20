/*Estructuras con punteros*/

# include <stdio.h>

struct COSA{
	int iEntero;
	int *piEntero;
};

void main (void){
	
	//Creo dos variables tipo COSA, la segunda de ellas es un puntero
	struct COSA stMiCosa;
	struct COSA *pstCosa;
	
	//Declaro una variable tipo entero
	int iEntero;
	
	//Hago que pstCosa apunte hacia stMiCosa
	pstCosa=&stMiCosa;
	
	//Hago que stMiCosa.piEntero apunte hacia el entero
	stMiCosa.piEntero=&iEntero;
	
	//Inicializo la variable entera
	iEntero=4;
	
	//Inicializo la estructura stMiCosa
	stMiCosa.iEntero=6;
	
	//Acceso a la direccion de iEntero
	printf("Direccion de iEntero: %i",&iEntero);
	printf("\nDireccion de iEntero: %i",stMiCosa.piEntero);
	
	//Acceso al valor de iEntero
	printf("\n\nValor de iEntero: %i",iEntero);
	printf("\nValor de iEntero: %i",*stMiCosa.piEntero);
	
	//Acceso a la direccion de stMiCosa
	printf("\n\nDireccion de stMiCosa: %i",&stMiCosa);
	printf("\nDireccion de stMiCosa: %i",pstCosa);

	//Acceso a la direccion de stMiCosa.iEntero
	printf("\n\nDireccion de stMiCosa.iEntero: %i",&stMiCosa.iEntero);
	printf("\nDireccion de stMiCosa.piEntero: %i",&stMiCosa.piEntero);
	
	//Acceso al valor de stMiCosa.iEntero
	printf("\n\nValor de stMiCosa.iEntero: %i",stMiCosa.iEntero);
	printf("\nValor de stMiCosa.iEntero: %i",pstCosa->iEntero);
	
	//Acceso al valor de stMiCosa.piEntero
	printf("\n\nValor de stMiCosa.piEntero: %i",stMiCosa.piEntero);
	printf("\nValor de stMiCosa.piEntero: %i",pstCosa->piEntero);
	
	//Acceso a iEntero desde pstCosa
	printf("\n\nValor de iEntero: %i",*(pstCosa->piEntero));
	printf("\n\n");
}

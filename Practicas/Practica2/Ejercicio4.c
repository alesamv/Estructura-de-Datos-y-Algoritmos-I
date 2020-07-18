/*El siguiente ejercicio hace un arreglo de 10 números, y se declaran 2 variables 
tipo apuntador, los apuntadores mostrarán  las direcciones de memoria del primer 
valor del arreglo y de igual manera se muestran las direcciones del sexo y séptimo elemento.*/

#include <stdio.h>
#define p printf
#define s scanf
main ()
{
	int iArreglo[10]={2,3,1,8,9,11,7,12,21,5};
	int pPuntero, pPuntero2;
	int x,y;
	//En esta primera parte del programa se almacena en pPuntero la direccion del primer elemento del arreglo iArreglo.
	pPuntero=iArreglo;
	p("%d",pPuntero);
	p("\n");	
//otra forma de almacenar el primer elemento en  un puntero es de la siguiente forma.
	pPuntero2=&iArreglo[0];
	p("Direccion del primer elemento con el segundo elemento: %d",pPuntero2);
	p("\n");
	//Para acceder a la direccion de otro elemento del arreglo se ace de la siguiente manera.
	p("Direccion del sexto elemento: %d", &iArreglo[5]);
	p("\nDireccion del septimo elemento: %d", &iArreglo[6]);
}


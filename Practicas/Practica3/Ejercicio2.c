// Estructuras con funciones 
/*Este programa solicita al usuario su nombre y su apellido, lo guarda
en una estructura llamada nombre y lo imprime.*/
#include <stdio.h>

struct NOMBRE{
	char nombre[20];
	char apellidoPat[20];
};

void muestra(struct NOMBRE datos){
	printf("Nombre: ");
	printf("%s %s",datos.nombre, datos.apellidoPat);
}

int main(){
	struct NOMBRE miNombre;
	
	printf("Dame tu nombre: ");
	scanf("%s",&miNombre.nombre);
	printf("Dame tu apellido paterno: ");
	scanf("%s",&miNombre.apellidoPat);
	
	muestra(miNombre);
}


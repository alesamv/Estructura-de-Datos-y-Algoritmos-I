// Arreglo de Estructuras
/* Este programa crea la estructura PERSONA, en la que se
almacenarán el nombre y la edad de la persona.*/

#include<stdio.h>
#include<string.h>

struct PERSONA{
	char nombre[20];
	int edad;
};

void muestra(struct PERSONA datos){
	printf("%s %s", datos.nombre, datos.edad);
}

int main(){
	struct PERSONA amigo[10];
	
	strcpy(amigo[1].nombre, "Miguel");
	amigo[1].edad=20;
	strcpy(amigo[2].nombre, "Cristian");
	amigo[1].edad=22;
	muestra(amigo[1]);
	muestra(amigo[2]);
}

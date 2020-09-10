/*El programa pregunta cuantos elementos tiene el conjunto, lo
guarda en una variable entera y posteriormente, utilizando un arreglo y la función
calloc, imprime una “matriz” con dichos elementos, después de ello, imprime la
dirección de memoria de cada uno de ellos.*/

#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int *arreglo, num, cont;
	printf("¿Cuantos elementos tiene el conjunto?\n");
	scanf("%d",&num);
	arreglo = (int *)calloc (num, sizeof(int));
	if (arreglo!=NULL) {
		printf("Vector reservado:\n\t[");
		for (cont=0 ; cont<num ; cont++) {
			printf("\t%d",*(arreglo+cont));
		}
		printf("\t]\n");
		printf("Se libera el espacio reservado.\n");
		free(arreglo);
		for(cont=0; cont<num; cont++) {
			printf("\nLa direccion de memoria del elemento %i es: %p", cont+1, (arreglo+cont));
		}
	}
	return 0;
}

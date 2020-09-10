/* Se modificó el código anterior para que solo se trabajara con un solo
apuntador, usando solo arreglo y eliminando arreglo 2.*/

#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int *arreglo, num, cont;
	printf("¿Cuantos elementos tiene el conjunto?\n");
	scanf("%d",&num);
	arreglo = (int *)malloc (num * sizeof(int));
	if (arreglo!=NULL) {
		for (cont=0 ; cont < num ; cont++) {
			printf("Inserte el elemento %d del conjunto.\n",cont+1);
			scanf("%d",(arreglo+cont)); 
		}
		printf("Vector insertado:\n\t[");
		for (cont=0 ; cont < num ; cont++) {
			printf("\t%d",*(arreglo+cont));
		}
		printf("\t]\n");
		printf("Aumentando el tamanio del conjunto al doble.\n");
		num *= 2;
		arreglo = (int *)realloc (arreglo,num*sizeof(int));
		if (arreglo != NULL) {
			for (; cont < num ; cont++) {
				printf("Inserte el elemento %d del conjunto.\n",cont+1);
				scanf("%d",(arreglo+cont));
			}
			printf("Vector insertado:\n\t[");
			for (cont=0 ; cont < num ; cont++) {
				printf("\t%d",*(arreglo+cont));
			}
				printf("\t]\n");
		}
		free (arreglo);
	}
	return 0;
}


/*El programa solicita al usuario dos enteros y utiliza memoria dinámica para 
reservar un arreglo bidimensional mxn. Inicializa cada elemento en A[i][j]=i*j 
y muestra en pantalla el contenido del arreglo, formando de esta manera una tabla de Pitágoras.*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int n, m, renglon,i,j;
	int **renglonptr;
	printf ("Ingrese el numero de renglones (n):\n");
	scanf ("%d",&n);
	printf ("Ingrese el numero de columnas (m):\n");
	scanf ("%d",&m);
	renglonptr =(int **) malloc (n * sizeof(int*));
	for (i=0; i<n; i++) {
		renglonptr[i] =(int *) malloc (m * sizeof(int));
	}
	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			renglonptr[i][j]=(i+1)*(j+1);
			printf ("\t%d", renglonptr[i][j]); 
		}
	}
}


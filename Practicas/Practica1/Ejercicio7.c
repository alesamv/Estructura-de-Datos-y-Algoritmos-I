/*Este programa simula ser una escítala espartana, en el cual pide cuantos renglones
y columnas quieres que se “enrolle” tu palabra, ingresas la palabra, y la cifra, lo mismo para
descifrar.*/
#include<stdio.h>
#include<stdlib.h>
void crearMensaje();
void descifrarMensaje();
int main()
{
	short opcion=0;
	while (1)
	{
		printf("\n\t*** ESCITALA ESPARTANA ***\n");
		printf("¿Que desea realizar?\n");
		printf("1) Crear mensaje cifrado.\n");
		printf("2) Descifrar mensaje.\n");
		printf("3) Salir.\n");
		scanf("%d", &opcion);
		switch(opcion)
		{
			case 1:
			system("cls");
			crearMensaje();
			system("pause");
			system("cls");
			break;
			case 2:
			system("cls");
			descifrarMensaje();
			system("pause");
			system("cls");
			break;
			case 3:
			return 0;
			default:
			printf("Opcion no valida.\n");
		}
	}
	return 0;
}
void crearMensaje()
{
	int ren, col, i, j, k=0;
	printf("Ingresar el tamanio de la escitala:\n");
	printf("\nRenglones:");
	scanf("%i",&ren);
	printf("\nColumnas:");
	scanf("%i",&col);
	char escitala[ren][col];
	char texto[ren*col];
	printf("\nEscriba el texto a cifrar:\n");
	scanf("%s", texto);
	for (i=0 ; i<ren ; i++)
	{
		for (j=0 ; j<col ; j++)
		escitala[i][j] = texto[k++];
	}
	printf("\nEl texto en la tira queda de la siguiente manera:\n");
	for (i=0 ; i<col ; i++)
	{
		for (j=0 ; j<ren ; j++)
			printf("%c", escitala[j][i]);
	}
	printf("\n");
}
void descifrarMensaje()
{
	int ren, col, i, j, k=0;
	printf("\nIngresar el tamaño de la escitala:\n");
	printf("\nRenglones:");
	scanf("%i",&ren);
	printf("\nColumnas:");
	scanf("%i",&col);
	char escitala[ren][col];
	char texto[ren*col];
	printf("\nEscriba el texto a descifrar:\n");
	scanf("%s", texto);
	for (i=0 ; i<col ; i++)
	{
		for (j=0 ; j<ren ; j++)
			escitala[j][i] = texto[k++];
	}
	printf("\nEl texto descifrado es:\n");
	for (i=0 ; i<ren ; i++)
	{
		for (j=0 ; j<col ; j++)
			printf("%c", escitala[i][j]);
	}
}

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5

struct COLA
{
	char dato[MAX_SIZE];
	int tope;
};

void Inicializa(struct COLA *cola)
{
	cola->tope=-1;
}

void Muestra(struct COLA *cola)
{
	if(cola->tope<0)
	{
		printf("\nCola vacia\n");
	}
	else
	{
		printf("\nCola: ");
		int i;
		for(i=cola->tope;i>=0;i--)
		{
			printf("\n%c",cola->dato[i]);
		}
		printf("\n");
	}
}

//Pone el elemento a en el tope de la cola
//Si tiene éxito regresa uno, si falla regresa 0
int ENCOLAR(struct COLA *cola, char a)
{
	if(cola->tope<(MAX_SIZE-1))
	{
		cola->tope++;
		cola->dato[cola->tope]=a;
		return 1;
	}
	else
	{
		return 0;
	}
}

//Quita el elemento de la cabeza de la cola
//Si tiene éxito devuelve el valor que estaba en la cabeza, de lo contrario regresa nul
char DESENCOLAR(struct COLA *cola)
{
	if(cola->tope<0)
	{
		return '\0';
	}
	else
	{
		char a = cola->dato[0];
		int i;
		for(i=0;i<=cola->tope;i++)
		{
			cola->dato[i]=cola->dato[(i+1)];
		}
		cola->tope--;
		return a;
	}
}

int main ()
{
	struct COLA mi_cola; //Estructura mi cola
	struct COLA *p; //Puntero a mi cola
	
	p=&mi_cola; //El puntero p guarda la direccion de memoria de mi cola

	Inicializa(p);
	
	printf("Estado inicial de la cola: ");
	Muestra(p);
	
	int OpcionMenu;
	
	do
	{
		printf("\nOpciones:\n1 Agregar nuevo elemento\n2 Quitar un elemento\n3 Salir\nDame una opcion: ");
		scanf("%i",&OpcionMenu);
		if(OpcionMenu==1)
		{
			int Exito;
			char Letra;
			printf("Dame una letra: ");
			scanf(" %c",&Letra);
			Exito=ENCOLAR(p,Letra);
			if(Exito==1)
			{
				printf("\nSe puso la letra %c en el tope de la cola",Letra);
			}
			else
			{
				printf("\nNo se agrego la letra %c porque la cola esta llena",Letra);
			}
			Muestra(p);
		}
		
		if(OpcionMenu==2)
		{
			char Letra;
			Letra=DESENCOLAR(p);
			if(Letra!='\0')
			{
				printf("\nSe saco la letra %c de la cabeza de la cola",Letra);
			}
			else
			{
				printf("\nNo se saco ningun elemento de la cola porque esta vacia");
			}
			Muestra(p);
		}
	} while(OpcionMenu==1 || OpcionMenu==2);
	return 0;
}




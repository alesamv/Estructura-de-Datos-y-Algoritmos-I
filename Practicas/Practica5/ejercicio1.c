//Pila estática
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5

struct PILA{
	char dato[MAX_SIZE];
	int tope;
};

void Inicializa(struct PILA *pila)
{
	pila->tope=-1;
}

void Muestra(struct PILA *pila)
{
	if(pila->tope==-1)
	{
		printf("\nPila vacia\n");
	}
	
	else
	{
		printf("\nPila: ");
		int i;
		for(i=pila->tope;i>=0;i--)
		{
			printf("\n%c",pila->dato[i]);
		}
		printf("\n");
	}
}

//Pone el elemento a en el tope de la pila
//Si tiene éxito regresa uno, si falla regresa 0
int Push(struct PILA *pila, char a)
{
	if(pila->tope<(MAX_SIZE-1))
	{
		pila->tope++;
		pila->dato[pila->tope]=a;
		return 1;
	}
	else
	{
		return 0;
	}
}

//Quita el elemento del tope de la pila
//Si tiene éxito devuelve el valor que estaba en el tope, de lo contrario regresa nul
char Pop(struct PILA *pila)
{
	if(pila->tope>=0)
	{
		pila->tope--;
		return pila->dato[pila->tope+1];
	}
	else
	{
		return '\0';
	}
}

int main ()
{
	struct PILA mi_pila; //Estructura mi pila
	struct PILA *p; //Puntero a mi pila
	p=&mi_pila; //El puntero p guarda la direccion de memoria de mi pila
	Inicializa(p);
	printf("Estado inicial de la pila: ");
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
			Exito=Push(p,Letra);
			if(Exito==1)
			{
				printf("\nSe puso la letra %c en el tope de la pila",Letra);
			}
			else
			{
				printf("\nNo se agrego la letra %c porque la pila esta llena", Letra);
			}
			Muestra(p);
		}
		if(OpcionMenu==2)
		{
			char Letra;
			Letra=Pop(p);
			if(Letra!='\0')
			{
				printf("\nSe saco la letra %c del tope de la pila",Letra);
			}
			else
			{
				printf("\nNo se saco ningun elemento de la pila porque esta vacia");
			}
			Muestra(p);
		}
	}
	while(OpcionMenu==1 || OpcionMenu==2);
	return 0;
}










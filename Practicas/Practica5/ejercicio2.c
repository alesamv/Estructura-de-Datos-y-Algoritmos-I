//Pila din�mica
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5

struct NODO
{
	char dato;
	struct NODO *siguiente;
};

struct PILA
{
	struct NODO *tope;
};
	
void Inicializa(struct PILA *pila)
{
	pila->tope=NULL;
}

void Muestra(struct PILA *pila)
{
	if(pila->tope==NULL)
	{
		printf("\nPila vacia\n");
	}
	else
	{
		struct NODO *actual;
		actual = pila->tope;
		printf("\nPila: ");
		do
		{
			printf("\n%c",actual->dato);
			actual=actual->siguiente;
		}
		while(actual!=NULL);
		printf("\n");
	}
}

//Pone el elemento a en el tope de la pila
//Si tiene �xito regresa uno, si falla regresa 0
int Push(struct PILA *pila, char a)
{
	//Crea un nuevo nodo
	struct NODO *nodo;
	nodo = (struct NODO*)malloc(sizeof(nodo));
	
	if(nodo!=NULL)
	{
		//Pone el nuevo nodo en el tope de la pila
		nodo->siguiente=pila->tope;
		pila->tope=nodo;
		//Almacena en el nuevo nodo el valor de a
		nodo->dato=a;
		return 1;
	}
	else
	{
		return 0;
	}
}

//Quita el elemento del tope de la pila
//Si tiene �xito devuelve el valor que estaba en el tope, de lo contrario regresa nul
char Pop(struct PILA *pila)
{
	if(pila->tope!=NULL)
	{
		//Almacena en variables temporales datos de interes
		char ctemporal;
		ctemporal=pila->tope->dato;
		
		struct NODO *stTemporal;
		stTemporal=pila->tope;
		
		//Saca el elemento del tope
		pila->tope = pila->tope->siguiente;
		//Libera el espacio del dato que se sac� de la pila
		free(stTemporal);
		return ctemporal;
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
				printf("\nNo se agrego la letra %c porque la pila esta esta llena", Letra);
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
	} while(OpcionMenu==1 || OpcionMenu==2);
	return 0;
}







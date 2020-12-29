//Lista doblemente ligada
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct LISTA
{
	char dato;
	struct LISTA *sig;
	struct LISTA *ant;
};

struct LISTA* Ingresar(struct LISTA *l,char x)
{
	struct LISTA *nodo;
	if(l==NULL)
	{
		nodo=(struct LISTA*)malloc(sizeof (struct LISTA));
		nodo->dato=x;
		nodo->sig=NULL;
		nodo->ant=NULL;
	}
	else
	{
	nodo=(struct LISTA*)malloc(sizeof(struct LISTA));
	nodo->dato=x;
	nodo->sig=l;
	l->ant=nodo;
	nodo->ant=NULL;
	}
	return nodo;
}

void Muestra(struct LISTA *l)
{
	if(l==NULL)
	{
		printf("La lista esta vacia");
	}
	else
	printf("Estado de la lista:\n");
	while(l!=NULL)
	{
		printf("%c\n",l->dato);
	
		l=l->sig;
	}
}

void Buscar(struct LISTA *l,char x)
{
	int pos=1;
	int a=0;
	if(l==NULL)
	{
		printf("La lista esta vacia");
	}
	else
	{
		while(l!=NULL)
		{
			if(l->dato==x)
			{
				printf("\nLa posicion es: %d\nY el dato es: %c\n",pos, l->dato);
				a++;
			}
		pos++;
		l=l->sig;
		}
		if(a==0)
		{
			printf("\nEl elemento no se encuentra en la lista");
		}
	}
}

void Eliminar(struct LISTA *l,char x)
{
	int cont=1;
	if(l==NULL)
	{
		printf("La lista esta vacia");
	}
	else
	{
		while(l!=NULL)
		{
			if(l->dato==x)
			{
				l->ant->sig=l->sig;
				l->sig->ant=l->ant;
				printf("\nSe elimino el dato %c correctamente\n",l->dato);
				free(l);
				break;
			}
			else
			{
				cont++;
				l=l->sig;
			}
			if(l==NULL)	
			{
				printf("\nNo existe ese elemento\n");
			}
		}
	}
}

int main()
{
	struct LISTA *ld;
	int op;
	char letra;
	ld=NULL;
	while(1)
	{
		printf("1 Ingresar\n2 Buscar\n3 Eliminar\n4 Salir\nIngresa una opcion: \t");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				{
					printf("Ingresa un dato: ");
					cin>>letra;
					ld=Ingresar(ld,letra);
					printf("\n");
					Muestra(ld);
					printf("\n");
					break;
				}
			case 2:
				{
					printf("Ingresa el dato que quieras buscar: \t");
					cin>>letra;
					Buscar(ld,letra);
					printf("\n");
					break;
				}
			case 3:
				{
					printf("\nIngresa el dato que quieras eliminar:\t");
					cin>>letra;
					Eliminar(ld,letra);
					printf("\n");
					Muestra(ld);
					printf("\n");
					break;
				}
			case 4:
				{
					return 0;
					break;
				}
		}
	}
}


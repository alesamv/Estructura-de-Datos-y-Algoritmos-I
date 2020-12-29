//Lista doblemente ligada circular
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct NODO 
{
	char *dato;
 	struct NODO *siguiente;
 	struct NODO *anterior;
};
struct LISTA 
{
	struct NODO *inicio;
	struct NODO *fin;
	int tamano;
 };

void inicializa(struct LISTA *lista)
{
	lista->inicio = NULL;
 	lista->fin = NULL;
 	lista->tamano = 0;
}

int Insertar1(struct LISTA *lista, char *dato)
{
 	struct NODO *nuevo_elemento;
 	if ((nuevo_elemento = (struct NODO*) malloc (sizeof (struct NODO))) == NULL)
 	return -1;
 	if ((nuevo_elemento->dato = (char *) malloc (50 * sizeof (char))) == NULL)
 	return -1;
 	strcpy (nuevo_elemento->dato, dato);
 	nuevo_elemento->siguiente = nuevo_elemento;
 	lista->inicio = nuevo_elemento;
 	lista->fin = nuevo_elemento;
 	lista->tamano++;
 	return 0;
}
int Insertar2(struct LISTA *lista, struct NODO *actual, char *dato)
{
 	struct NODO *nuevo_elemento;
 	if ((nuevo_elemento = (struct NODO*) malloc (sizeof (struct NODO)))== NULL)
 	return -1;
 	if ((nuevo_elemento->dato = (char *) malloc (50 * sizeof (char)))== NULL)
 	return -1;
 	strcpy (nuevo_elemento->dato, dato);
 	if(actual != lista->fin)
 	return -1;
 	nuevo_elemento->siguiente = actual->siguiente;
 	actual->siguiente = nuevo_elemento;
 	lista->fin = nuevo_elemento;
 	lista->tamano++;
 	return 0;
}

void Muestra(struct LISTA *lista)
{ 	
 	if(lista->tamano==0)
	{
 		printf("\nLista sin Datos.\n");
  	}
 	else
 	{
 		struct NODO *actual;
 		int i;
	 	actual = lista->inicio;
 		printf("\nEstado de la lista:\n");
 		for(i=0;i<(lista->tamano);++i)
		{
 			printf ("%s\n", actual->dato);
 			actual = actual->siguiente;
 		}
	}
}

int Busca(struct LISTA *lista,char *pos) 
{   	
	int i,j=0;  
	if(lista->tamano==0)  
	{      
		return 0;  
	} 
	

	else
	{
		struct NODO *actual;
		actual=(lista->inicio);  
		printf("La cancion '%s' esta en la posicion:",pos);
		for(i=0;i<(lista->tamano);i++)  
		{   
			if(strcmp(pos,(actual->dato))== 0)   
			{ 
   				printf("%d\n",j+1);   
			}   
			j++;   
			actual=actual->siguiente;
            			getchar();
		}
		if(strcmp(pos,(actual->dato))!=0)
		{
			printf("Lo sentimos.La cancion no se encuentra\n");
		}
		return 0;
	}
}
int Eliminar(struct LISTA *lista, char *pos)
{
	if(lista->tamano==0)
	{
		return 0;
	}
	else
	{
		struct NODO *actual;
		actual=(lista->inicio);
		while(actual!=NULL)
		{
			if(strcmp(actual->dato,pos)==0)
			{
				actual->anterior->siguiente=actual->siguiente;
				actual->siguiente->anterior=actual->anterior;				
				printf("Se elimino la cancion %s correctamente",actual->dato);
				free (actual);
			}
		}				
	} 
 }

int main()
{ 
	struct LISTA mi_lista;
	struct LISTA *p;
	p=&mi_lista;
	char *nom;
	char Nombre[50];
	int op;
	p = (struct LISTA*) malloc(sizeof (mi_lista));
	if (p == NULL)
 		return -1;

	if ((nom = (char *) malloc (50 * sizeof (char))) == NULL)
 		return -1;
 	
	inicializa(p);
	do
	{
		printf("\nOpciones:\n1 Agregar elemento a la lista\n2 Quitar un elemento de la lista\n3 Buscar un elemento de la lista\n4 Salir \nDame una opcion: ");
		scanf("%d", &op);
 		switch(op)
 		{
 			case 1:
 				printf ("\nIngrese una cancion (Considera que no puedes poner espacios): ");
 				scanf("%s",nom);
	 			if(p->tamano==0)
				{
 					Insertar1(p, nom);
				}
 				else
 				{
 					Insertar2(p,p->fin , nom);
 				}
				Muestra(p);
				printf("\n");
				break;
 			case 2:
 				printf("Ingresa la cancion que quieras eliminar:");
 				scanf("%s",Nombre);
 				Eliminar(p,Nombre);
 				Muestra(p);
				break;
				
case 3:
				printf("Ingresa la cancion que deseas buscar:");
 				scanf("%s",Nombre);
				Busca(p,Nombre);
				Muestra(p);
 				break;
 				
 			case 4:
 				printf("Adios");
				break;
				
			default:
				printf("No valido\n");
				break;
 		}
	}while((op==1||op==2)||op==3);
}


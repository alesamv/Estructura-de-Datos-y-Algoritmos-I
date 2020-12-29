//COLA DOBLE DINAMICA
#include <stdio.h>
#include <stdlib.h>

struct INFO
{
	int num;
};

struct NODO
{
	struct INFO elemento;
	struct NODO *p_anterior;
	struct NODO *p_siguiente;
};

struct BICOLA
{
	int nodos;
	struct NODO *primero;
	struct NODO *ultimo;
};

void inicializarBicola( struct BICOLA **bicola )
{
	struct BICOLA *temp = (struct BICOLA *) malloc(sizeof(struct BICOLA));
	temp->nodos=0;
	temp->primero=NULL;
	temp->ultimo=NULL;
	(*bicola)=temp;

};

void insertIzqBicola( struct BICOLA **bicola, char dato )
{
	struct NODO *temp = (struct NODO *) malloc(sizeof(struct NODO));
	if( (*bicola)->primero == NULL )
	{
		temp->elemento.num= dato;				
		temp->p_anterior= NULL;
		temp->p_siguiente= NULL;
		(*bicola)->primero= temp;	
		(*bicola)->ultimo= temp;
	}	
	else
	{
		temp->elemento.num=dato;					
		temp->p_anterior=NULL;					
		temp->p_siguiente=(*bicola)->primero;
		(*bicola)->primero->p_anterior=temp;		
		(*bicola)->primero=temp;	
	};
	(*bicola)->nodos += 1;
};

void insertDerBicola( struct BICOLA **bicola, char dato )
{
	struct NODO *temp = (struct NODO *) malloc(sizeof(struct NODO));
	if( (*bicola)->primero == NULL )
	{
		temp->elemento.num	= dato;
		temp->p_anterior	= NULL;
		temp->p_siguiente	= NULL;

		(*bicola)->primero	= temp;
		(*bicola)->ultimo	= temp;
	}
	else
	{
		temp->elemento.num	= dato;
		temp->p_anterior	= (*bicola)->ultimo;
		temp->p_siguiente	= NULL;

		(*bicola)->ultimo->p_siguiente	= temp;
		(*bicola)->ultimo				= temp;
	};
	(*bicola)->nodos += 1;
};

void eliminaIzqBicola(struct BICOLA **bicola )
{
	struct NODO *aBorrar;
	if( (*bicola)->primero==NULL)
	{
		printf( "No se puede eliminar porque la cola esta vacia" );
	}
	else if( (*bicola)->nodos==1)
	{
		free(*bicola);
		inicializarBicola(bicola);
	}
	else 
	if( (*bicola)->nodos>1)
	{
		aBorrar=(*bicola)->primero;
		(*bicola)->primero->p_siguiente->p_anterior=NULL;
		(*bicola)->primero=(*bicola)->primero->p_siguiente;
		free(aBorrar);
		(*bicola)->nodos -= 1;
	};
};

void eliminaDerBicola(struct BICOLA **bicola )
{
	struct NODO *aBorrar;
	if( (*bicola)->primero==NULL )
	{
		printf( "No se puede eliminar porque la cola esta vacia" );
	}
	else if((*bicola)->nodos==1)
	{
		free(*bicola);
		inicializarBicola(bicola);
	}
	else if( (*bicola)->nodos > 1 )
	{
		aBorrar = (*bicola)->ultimo;
		(*bicola)->ultimo->p_anterior->p_siguiente=NULL;
		(*bicola)->ultimo=(*bicola)->ultimo->p_anterior;
		free(aBorrar);

		(*bicola)->nodos -= 1;
	};

};

void imprimeBicola( struct BICOLA **bicola )
{
	struct NODO *bic=(*bicola)->primero;
	if(bic==NULL )
		printf( "La cola esta vacia." );
	else
	{

		printf( "Estado de la cola: \n" );

		while(bic!=NULL )
		{
			printf( "%i\t",bic->elemento.num);
			bic = bic->p_siguiente;
		};
		printf( "\n" );
	};

};

int main()
{
	struct BICOLA *bicolaA;
	int opc, opc2;
char nuevoDato;
	inicializarBicola( &bicolaA );
	do
	{
		printf("1)Ingresar\n2)Eliminar\n3)Salir\nIngresa la opcion\t");
		scanf( "%i", &opc );
		switch(opc)
		{
			case 1:
				{
					printf("\n1) Encolar por la izquierda\n2) Encolar por la derecha\nElige una opcion\t");
					scanf("%i",&opc2);
					switch(opc2)
					{
						case 1:
							printf( "Introduce la letra: " );
fflush(stdin);
							scanf( "%i", &nuevoDato );
							insertIzqBicola( &bicolaA, nuevoDato );
							imprimeBicola( &bicolaA );
						break;

						case 2:
							printf( "Introduce la letra: " );
							fflush(stdin);
							scanf( "%i", &nuevoDato );
							insertDerBicola( &bicolaA, nuevoDato);
							imprimeBicola( &bicolaA );
						break;
					}
				}
				break;
			case 2:

			{
				printf("\n1) Desencolar por la izquierda\n2) Desencolar por la derecha\nElige una opcion\t");
				
scanf("%d",&opc2);
				switch(opc2)
				{
					case 1:
						eliminaIzqBicola( &bicolaA );
						imprimeBicola( &bicolaA );
					break;
					
					case 2:
						eliminaDerBicola( &bicolaA );
						imprimeBicola( &bicolaA );
					break;
				}
			}
	
			case 3:
				{
					break;	
				}
				
		};
	} while(opc!=3);
};


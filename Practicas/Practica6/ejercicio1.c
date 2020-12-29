//Cola circular estática

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

struct COLA
{
	char dato[MAX_SIZE];
	int tope;
	int head;
};

void Inicializa(struct COLA *cola)
{
	cola->head=-1;
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
			printf("\t%c\t",cola->dato[i]);
		}
	}
}
int ENCOLAR(struct COLA *cola, char a)
{
     if(cola->tope!=(MAX_SIZE-1))
	 {
	 	if(cola->tope<0)	
		 {
			  cola->head++;
		 }
		 cola->tope++;
	     cola->dato[cola->tope]=a;
	     return 1;
	 }
	 else
	 {
	     return 0;	
	 }
}
char DESENCOLAR(struct COLA *cola)
{
	if(cola->head<0)
	{
		return '\0';	
	}
	else
	{
		if(cola->tope==0)
		{
			cola->head=-1;
			cola->tope=-1;
			return 1;
		}
		else
		{
			char a = cola->dato[0];
			int i;
			for(i=0;i<=cola->tope;i++)
			{
				cola->dato[i]=cola->dato[i+1];
			}
			cola->tope--;
			return a;
		}
	}
}

int main ()
{
	struct COLA mi_cola;	//Estructura mi pila
	struct COLA *p; 	//Puntero a mi pila
	p=&mi_cola;    //El puntero p guarda la direccion de memoria de mi pila
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
			if (Letra==1)
			{
			    printf("\nSe saco la letra %c de la cabeza y tope de la cola", Letra);
			}
			 else
			 {
			      if(Letra!='\0')
			      {
			    	  printf("\nSe saco la letra %c de la cabeza de la cola",Letra);
		           }	
		           else
		           {
				       printf("\nNo se saco ningun elemento de la cola porque esta vacia");
			        }
			 }
		     Muestra(p);
		}

	}
	while(OpcionMenu==1 || OpcionMenu==2); 

	return 0;
}


//COLA DOBLE ESTÁTICA
#include<stdio.h>
#include<stdlib.h>
int Mostrar(int col)
{
	if(col!=0)
		printf("%d ",col);
	else
		printf(" ");	
}

int main()
{
	int cola[5]={0,0,0,0,0},op,op2,dato,i;
	do
	{
	printf("1)Ingresar\n2)Eliminar\n3)Salir\nIngresa la opcion\t");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
		{
		printf("\nDame el numero a ingresar\t");
		scanf("%d",&dato);
			printf("\n1) Ingresar por la izquierda\n2) Ingresar por la derecha\nIngresa una opcion\t");
			scanf("%d",&op2);
			switch(op2)
			{
				case 1:{
					if(cola[0]==0)
					{
					cola[0]=dato;
					}
					else
					if(cola[0]!=0 && cola[4]!=0)
					printf("\nLa cola esta llena\n");
					else
					{
					for(i=5;i>=0;i--)
					{
						if(cola[i]==0)
						{
							cola[i]=cola[i-1];
							cola[i-1]=0;
						}
					}
					cola[0]=dato;
					}
					printf("Estado de la cola:\n");
					for(i=0;i<5;i++)
					Mostrar(cola[i]);
					break;
				}
				case 2:
				{
					if(cola[4]!=0)
					{
						printf("\nLa cola esta llena\n");
						break;
					}
					else
					for(i=0;i<5;i++)
					{
						if(cola[i]==0)
						{
							cola[i]=dato;
							i=5;
						}
						
					}
					printf("Estado de la cola:\n");
					for(i=0;i<5;i++)
					Mostrar(cola[i]);
					break;
				}
			}
			break;
		}
		case 2:
		{
			printf("\n1) Desencolar por la izquierda\n2) Desencolar por la derecha\nElige una opcion\t");
			scanf("%d",&op2);
			switch(op2)
			{
				case 1:
				{
					if(cola[0]==0)
					printf("\nLa cola esta vacia\n");
					else
					for(i=0;i<5;i++)
					{
						cola[i]=cola[i+1];
					}
					cola[4]=0;
					
					printf("Estado de la cola:\n");
					for(i=0;i<5;i++)
					Mostrar(cola[i]);
					break;
				}
				case 2:
				{
					if(cola[0]==0)
					printf("\nLa cola esta vacia\n");
					else
					for(i=0;i<5;i++)
					{
						if(cola[i+1]==0)
						cola[i]=0;
					}
					cola[4]=0;
					
					printf("Estado de la cola:\n");
					for(i=0;i<5;i++)
					Mostrar(cola[i]);
					break;
				}
			}
			break;
		}
		
		case 3:
		{	
			break;
		}
	}
	printf("\n\n");
	}while(op!=3);
}


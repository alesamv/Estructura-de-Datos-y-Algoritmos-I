//Mayor de una lista de numeros

#include<stdio.h>

int main(){
	int lista[50]={0}, i=0, cont=0;
	int mayor = lista[0];
	
	printf("Encontrando el numero mayor de una lista de numeros\n");
	printf("¿Cuantos numeros deseas ingresar?");
	scanf("%d", &cont);
	
	for(i; i<cont; i++){
		printf("\nIngresa el numero: ");
		scanf("%d", &lista[i]);
		if(mayor <= lista[i]){
			mayor = lista[i];
		}
	} 
	printf("El mayor de la lista es: %d", mayor);
}

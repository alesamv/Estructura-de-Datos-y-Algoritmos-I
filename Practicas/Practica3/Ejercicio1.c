/*En este ejercicio se solicitan al usuario sus datos uno a uno utilizando
una estructura y posteriormente se imprime toda su información con una sola
instrucción “printf”.*/
#include <stdio.h>

struct PACIENTE{
	int folio;
	int edad;
	int peso;
	float altura;
};

int main(){
	struct PACIENTE alumnolloron;
	
	printf("Dame el numero de cuenta: ");
	scanf("%d",&alumnolloron.folio);
	printf("Dame la edad: ");
	scanf("%d",&alumnolloron.edad);
	printf("Dame el peso: ");
	scanf("%d",&alumnolloron.peso);
	printf("Dame la altura: ");
	scanf("%f",&alumnolloron.altura);
	
	printf("El alumno con folio %d, de edad %d, con peso %d, y altura %f",alumnolloron.folio,alumnolloron.edad,alumnolloron.peso,alumnolloron.altura);
}

#include<stdio.h>
#include<math.h>
float a,b,c,d,x1,x2;

main()
{ printf("No tiene solucion en los reales\n");
	printf("\t Solucion a una ecuacion de segundo grado: \n");
	printf("Escribe el valor de a: (Recuerda que el valor no puede ser 0)\n");
	scanf("%f",&a);
	printf("Escribe el valor de b: \n");
	scanf("%f",&b);
	printf("Escribe el valor de c: \n");
	scanf("%f",&c);
	
	d=((b*b)-(4.0*a*c));
	
	if(d>0.0)
	{
		x1=((-b+sqrt(d))/(2.0*a));
        x2=((-b-sqrt(d))/(2.0*a));
		printf("La solucion es: x1= %.2f y x2= %.2f",x1,x2);
	}
	else
	{
	 	printf("\nNo tiene solucion en los reales\n");
	}
	return 0;
}

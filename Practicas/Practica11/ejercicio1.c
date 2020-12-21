//Mayor de 3 numeros
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Dame 3 numeros \n");
    printf("Ingresa el primer numero: ");
    scanf("%d", &a);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &b);
    printf("Ingresa el tercer numero: ");
    scanf("%d", &c);

    if(a>b && a>c){
        printf("\nEl numero mayor es: %d", a);
    }
    else{
        if(b>c){
            printf("\nEl numero mayor es: %d", b);
        }
        else
        {
            printf("\nEl numero mayor es %d", c);
        }    
    }
}
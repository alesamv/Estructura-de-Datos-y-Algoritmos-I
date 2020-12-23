# Determinar si un numero es primo

def esPrimo(numero):
    cont = 0
    for i in range(1,numero+1):
        if numero % i == 0:
            cont += 1
    
    if cont != 2:
        print(f"El numero {numero} no es primo")
    else:
        print(f"El numero {numero} es primo")

numero = int(input("Ingresa un numero: "))
esPrimo(numero)
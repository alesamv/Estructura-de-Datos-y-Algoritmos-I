#Serie de Fibonacci Iterativa
"""Programa que calcula la serie de Fibonacci, utilizando una función Iterativa."""

def FibonacciIterativo(numero):
    f1=0
    f2=1
    for i in range(1, numero-1):
        f1,f2=f2,f1+f2
    return f2

print("Ingresa la posicion para obtener el correspondiente numero de la serie:")
numero=int(input())
print(f"{FibonacciIterativo(numero)}")

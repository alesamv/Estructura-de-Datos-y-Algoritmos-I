#Serie de Fibonacci Recursiva
"""Programa que calcula la serie de Fibonacci, utilizando una función recursiva."""

def FibonacciRecursivo(numero):
    if numero == 1:
        return 0
    if numero == 2 or numero == 3:
        return 1
    return FibonacciRecursivo(numero-1) + FibonacciRecursivo(numero-2)

print("Ingresa la posicion para obtener el correspondiente numero de la serie:")
numero=int(input())
print(f"{FibonacciRecursivo(numero)}")

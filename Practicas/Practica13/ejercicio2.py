#Factorial Recursivo
"""Programa que calcula el factorial de un número utilizando una función recursiva."""

def FactorialRecursivo(numero):
    if numero < 2:
        return 1
    return numero * FactorialRecursivo(numero - 1)

print("Ingresa el numero para obtener el factorial:")
numero=int(input())
print(f"{FactorialRecursivo(numero)}")

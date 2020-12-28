#Factorial Iterativo
"""Programa que calcula el factorial de un número, utilizando una función recursiva."""

def FactorialIterativo(numero):
    fact = 1
    for i in range(numero, 1, -1):
        fact = fact*i
    return fact
    
print("Ingresa el numero para obtener el factorial:")
numero=int(input())
print(f"{FactorialIterativo(numero)}")

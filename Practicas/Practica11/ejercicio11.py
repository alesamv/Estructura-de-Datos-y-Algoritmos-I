# “3n+1”
"""Este programa consiste en dar un número entero cualquiera y a partir
de que ese número sea par o impar va realizando ciertas operaciones para al final
devolver uno."""

def problema(n):
    while n != 1:
        print(n)
        if n % 2 == 0:
            n = n // 2
        else:
            n = n * 3 + 1
    print(n)
    
n=int(input("Ingresa un numero: "))
problema(n)

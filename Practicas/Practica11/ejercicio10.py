#Factorial top-down
"""Este programa es similar al anterior en cuestión a su función sin
embargo ahora se utilizó el algoritmo top-down."""

def factorial(n):
    if n<1:
        return 1
    else:
        return factorial(n-1)*n

memoria={0:0, 1:1, 2:2}

def factorial_2(n):
    if n in memoria:
        return memoria[n]
    else:
        f=factorial(n)
        memoria[n]=f
        return memoria[n]

num=(int(input("Ingresa un numero: ")))
print(f"Su factorial es: {factorial(num)}")

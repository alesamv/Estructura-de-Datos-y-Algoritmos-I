#Factorial bottom-up”.
"""El siguiente programa pide al usuario que ingrese un número y este
le va a devolver su factorial pero usando el algoritmo bottom-up."""

def factorial(n):
    if n<1:
        return 1
    else:
        return factorial(n-1)* n
        
num=(int(input("Ingresa un numero: ")))
print(f"Su factorial es: {factorial(num)}")

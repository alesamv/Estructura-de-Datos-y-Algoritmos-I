#¿Cual es el numero menor entre dos numeros?

def numeroMenor(a,b):
    if a > b:
        print(f"El numero {a} es mayor que {b}")
    elif a < b:
        print(f"El numero {b} es mayor que {a}")
    elif a==b:
        print(f"El numero {a} es igual que {b}")
    else:
        print("Error")

print("Ingresa un numero: ")
a = float(input())
print("Ingresa un numero: ")
b = float(input())
numeroMenor(a,b)
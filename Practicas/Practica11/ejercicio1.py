#Mayor de 3 numeros

a = int(input("Ingresa el primer número: "))
b = int(input("Ingresa el segundo número: "))
c = int(input("Ingresa el tercer número: "))

if a>b and a>c:
    print(f"El numero mayor es: {a}")
else:
    if b>c:
        print(f"El numero mayor es: {b}")
    else:
        print(f"El numero mayor es: {c}")
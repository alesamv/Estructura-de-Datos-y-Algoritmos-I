#Mayor de una lista de numeros


print("Encontrando el numero mayor de una lista de numeros\n")

lista =[3,2,8,7,6,3,4,0,1]
mayor = 0
for i in lista:
    if mayor <= i:
        mayor = i
print(f"La lista es: {lista}")
print(f"El numero mayor es: {mayor}")

#Pila dinamica

#mostrar, insertar, sacar, salir

def mostrar(pila):
    print("Pila: ", pila)

def insertar(pila):
    print("Ingresa el dato: ")
    dato = input()
    pila.append(dato)
    print("Pila: ", pila)
def eliminar(pila):
    pila.pop()
    print("Pila: ", pila)

op = 0
pila = []

while op != 4:
    print("\nMenu")
    print("1) Mostrar pila")
    print("2) Insertar dato en pila")
    print("3) Eliminar dato en pila")
    print("4) Salir del programa")
    print("Ingresa la opcion: ")
    op = int(input())
    if op == 1:
        mostrar(pila)
    elif op == 2:
        insertar(pila)
    elif op == 3:
        eliminar(pila)
    elif op == 4:
        print("Saliendo...")
    else:
        print("Opcion no valida")

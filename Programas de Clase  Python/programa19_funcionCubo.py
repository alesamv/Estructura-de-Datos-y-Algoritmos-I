#Volumen de cubo con funcion

def cubo(n):
    volumen = n**3
    return volumen


print("Volumen de un cubo")
print("Ingresa el lado del cubo: ")
lado = float(input())
resultado = cubo(lado)
print(f"El volumen es: {resultado}")

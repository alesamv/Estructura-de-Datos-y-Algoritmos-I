#Se dispone de monedas con denominación de 10, 5 y 1 peso.
#Encontrar la forma de realizar un pago de n pesos con la menos cantidad de
#monedas posible.

def cambio(cantidad, denominaciones):
    resultado = []
    while (cantidad > 0):
        if (cantidad >= denominaciones[0]):
            num = cantidad // denominaciones[0]
            cantidad = cantidad - (num * denominaciones[0])
            resultado.append([denominaciones[0], num])
        denominaciones = denominaciones[1:]
    return resultado

denominaciones=[10, 5, 1]
cantidad=int(input('Introduce el pago: '))
print('Usted tendrá que pagar con:(El primer número indica la denominación, y el segundo la cantidad)')
print(cambio(cantidad, denominaciones))

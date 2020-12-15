#Valor absoluto con funcion

def absoluto(n):
    if n<0:
        n = n*(-1)
    return n

print("Ingresa un numero: ")
num = float(input())
nnum = absoluto(num)
print(f"El valor absoluto del numero {num} es {nnum}")
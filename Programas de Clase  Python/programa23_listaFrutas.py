#Lista de Frutas en Python

frutas = ['naranja', 'manzana', 'banana', 'kiwi', 'manzana', 'banana']

print(frutas.count('manzana'))      #2
print(frutas.count('mandarina'))    #0
print(frutas.index('banana'))       #2
print(frutas.index('banana',4))     #5
frutas.reverse()
print(frutas)
frutas.sort()
print(frutas)
frutas.pop()
print(frutas)
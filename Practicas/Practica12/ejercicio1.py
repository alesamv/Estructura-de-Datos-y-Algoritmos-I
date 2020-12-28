#Merge Sort
"""Programa que ordena una lista de números."""

def merge_sort(lista):
    print("Separando ",lista)
    if len(lista)>1:
        mid = len(lista)//2
        izq = lista[:mid]
        der = lista[mid:]

        merge_sort(izq)
        merge_sort(der)

        i=0
        j=0
        k=0
        while i < len(izq) and j < len(der):
            if izq[i] < der[j]:
                lista[k]=izq[i]
                i=i+1
            else:
                lista[k]=der[j]
                j=j+1
            k=k+1
        while i < len(izq):
            lista[k]=izq[i]
            i=i+1
            k=k+1
        while j < len(der):
            lista[k]=der[j]
            j=j+1
            k=k+1
    print("Acomodando ",lista)

lista = [54,26,93,17,77,31,44,55,20]
merge_sort(lista)
print(lista)


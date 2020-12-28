#Torres de Hanoi
"""Programa que resuelve el problema de “Las Torres de Hanoi”"""

print ("TORRES DE HANOI \n")
def hanoi(N, inc='1', temp='2', fin='3'):
    if N > 0:
        hanoi(N-1, inc, fin, temp)
        print ("se mueve un disco de torre", inc, "a torre", fin)
        hanoi(N-1, temp, inc, fin)
        
discos = int(input("Ingresael numero de discos:"))
hanoi(discos)

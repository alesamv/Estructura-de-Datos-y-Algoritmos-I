#Triangulo de 4*4 al reves

i=0
while i<=4:
    j=1
    while j<=4-i:
        print(" "),
        j+=1
    k=1
    while k<=i:
        print("*"),
        k+=1
    print("\n")
    i+=1
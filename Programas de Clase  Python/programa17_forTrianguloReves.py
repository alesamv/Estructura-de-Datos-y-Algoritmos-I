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

print("Aqui empieza el for")

for i in range(0,5):
    for j in range(1,5-1):
        print(" ")
    for k in range(1,i+1):
        print("*")
    print("\n")
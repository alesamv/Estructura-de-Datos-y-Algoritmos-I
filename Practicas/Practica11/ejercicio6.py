#Problema de las 8 reinas
#Se trata de colocar en un tablero de 8x8, 8 reinas, de tal forma que no se puedan amenazar entre ellas.

def Reinas(sol,m,n):
    if m>=n:
        return False
    exito = False

    while True:
        if (sol[m] < n):
            sol[m] = sol[m] + 1
        if (Comp(sol,m)):
            if m != n-1:
                exito = Reinas(sol, m+1,n)
                if exito==False:
                    sol[m+1] = 0
            else:
                print (sol)
                for x in range(n):
                    for i in range(n):
                        if sol[x] == i+1:
                            print ("R"),
                        else:
                            print ("- "),
                    print ("\n")
                exito = True
            if (sol[m]==n or exito==True):
                break
    return exito

def Comp(sol,m):
    for i in range(m):
        if(sol[i] == sol[m]) or (Vars(sol[i],sol[m])==Vars(i,m)):
            return False
    return True

def Vars(x,y):
    if x>y:
        return x - y
    else:
        return y - x


print("Problema de las 8 reinas")
n = 8
print("Las reinas deben estar ubicadas en la siguiente posicion, una por cada fila")
sol=[]
for i in range(n):
    sol.append(0)
m = 0
print (Reinas(sol,m,n))

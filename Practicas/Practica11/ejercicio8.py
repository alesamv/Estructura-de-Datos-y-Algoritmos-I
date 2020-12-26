#Robot con obstáculos
"""Este programa es similar al anterior con la diferencia de que ahora 
contamos con obstáculos y que el robot debe encontrar el tesoro sin dar tantas vueltas."""

import random
ancho = 7
alto = 7
tablero = [ ["_" for x in range(ancho)] for y in range(alto) ]
      
#_ _ _ _ _ _ _      
#_ _ _ _ T _ _   
#_ _ _ X _ _ _      
#_ R _ X _ _ _    
#_ _ _ X _ _ _      
#_ _ _ X _ _ _

def mostrar_tablero():
    """ Imprime el tablero """
    for renglon in tablero: # recorres filas
        linea = " ".join(renglon) # recorres columnas
        print(linea)
    print("")
    input("Presiona ENTER para continuar...")
tablero[2][3]="X"
tablero[3][3]="X"
tablero[4][3]="X"
tablero[5][3]="X"
tablero[6][3]="X"
#Definiendo tesoro
# "T" símbolo para el tesoro
# Posición del tesoro
# x_t representa la columna donde está el tesoro
# x_y representa la file donde está el tesoro
# Aparecerá en el lado derecho
x_t = random.randrange(ancho//1.5, ancho) 
y_t = random.randrange(alto)
tablero[y_t][x_t] = "T"

# Definiendo robot
# Aparecerá en el lado izquierdo
x_r = random.randrange(ancho//2)
y_r = random.randrange(alto)
tablero[y_r][x_r] = "R"
# Mostrar tablero
mostrar_tablero()

# ejecutar turno
# robot mueve una posición
# verificar si encontró tesoro
# si tesoro encontrado, terminamos
# si no realizar otro turno
# el robot se mueve en este sólo de izq a der

# Desplaza el robot en horizontal de izq a der hasta que esté en la misma
# columna del tesoro
while x_r < x_t:
  if tablero[y_r][x_r+1] == "X":
      tablero[y_r][x_r] = "_"
      y_r-=1 
      tablero[y_r][x_r] = "R"
      mostrar_tablero()
  
  else:  
    tablero[y_r][x_r] = "_"
    x_r+=1 
    tablero[y_r][x_r] = "R"
    mostrar_tablero()

# Desplaza el robot en vertical hacia arriba hasta que esté en
# la misma fila del tesoro
while y_r < y_t:
    tablero[y_r][x_r] = "_"
    y_r+=1 
    tablero[y_r][x_r] = "R"
    mostrar_tablero()


# si llegamos aquí, entonces el robot ya tiene el tesoro y terminamos
print("Tesoro encontrado :)\n")
input("Presiona ENTER para terminar!")



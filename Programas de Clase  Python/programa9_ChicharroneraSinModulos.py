#Chicharronera sin usar math

print("Resolucion a una ecuacion de 2do grado")
a = 1
b = -5
c= 6

d = ((b**2)-(4*a*c))**(1/2)
if d < 0:
    print("El resultado no se encuentra en los reales")
else:
    x1 = ((-b)+d)/(2*a)
    print("x1 = ",x1)
    x2 = ((-b)-d)/(2*a)
    print("x2 = ",x2)
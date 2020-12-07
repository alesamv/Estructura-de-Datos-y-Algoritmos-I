#Horoscopo chino

año = int(input("Introduce el año en que naciste: "))
horoscopo = año%12

if horoscopo == 0:
    print("Mono")
elif horoscopo ==1:
    print("Gallo")
elif horoscopo ==2:
    print("Perro")
elif horoscopo ==3:
    print("Cerdo")
elif horoscopo ==4:
    print("Rata")
elif horoscopo ==5:
    print("Buey")
elif horoscopo ==6:
    print("Tigre")
elif horoscopo ==7:
    print("Conejo")
elif horoscopo ==8:
    print("Dragón")
elif horoscopo ==9:
    print("Serpiente")
elif horoscopo ==10:
    print("Caballo")
elif horoscopo ==11:
    print("Cabra")
else:
    print("Año incorrecto")

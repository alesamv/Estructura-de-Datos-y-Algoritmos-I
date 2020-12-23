#Descifrando una contraseña para un candado con fuerza bruta

def contraseña(passwd):
    a=0
    b=0
    c=0
    d=0

    for a in range(10):
        for b in range(10):
            for c in range(10):
                for d in range(10):
                    prueba= (a*1000)+(b*100)+(c*10)+d
                    if prueba == passwd:
                        return print(f"La contraseña encontrada es: {passwd}")

miContraseña = 1234
contraseña(miContraseña)
def factorial(n:int):
    if n==0:
        return 1
    else:
        return n*factorial(n-1)

def verSecuencia(listaNums:list):
    serie = []
    for i in range(1,len(listaNums)):
        restaSerie = (listaNums[i-1] - listaNums[i])*-1
        serie.append(restaSerie)
    return serie

def contarNumerosPyI(listaNums:list):
    verificaciones = []
    for i in listaNums:
        verificaciones.append(f"{(True if i%2==0 else False)}")
        
    print("impares=False, pares = True \n\r",verificaciones)


#lista de casos 
numeroCombi = []
#hallar casos posibles con formula de combinatoria
for i in range(5,30):
    formulaC = factorial(i)/(factorial(5)*factorial((i-5)))
    numeroCombi.append(int(formulaC))


#numero de combinaciones    
print("Numero de combinaciones \n\r",numeroCombi)
#secuencia
print(verSecuencia(numeroCombi))
#verificacion de secuencia pares e impares
contarNumerosPyI(numeroCombi)
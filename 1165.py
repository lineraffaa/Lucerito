

teste = int(input()) 

for t in range (teste):
    
    numero = int(input())
    cont = 0
    
    for n in range(2,numero):
        if numero%n == 0:
            cont += 1
     
    if cont > 0:
        print("{} nao eh primo".format(numero))
        
    else:
        print("{} eh primo".format(numero)) 

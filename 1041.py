
x = float(input())

y = float(input())

if(x == 0 and y == 0):
    print("origem")

elif(x == 0 and y != 0):
    print("Eixo y")

elif(x != 0 and y == 0):
    print("Eixo y")
            
elif(x > 0 and y > 0):
    print("Q1")
    

elif(x > 0 and y < 0):
    print("Q4")
    
    
elif(x < 0 and y > 0):
    print("Q2") 
    
elif(x < 0 and y < 0):
    print ("Q3")
    
            


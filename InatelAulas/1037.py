x = int(input('Qual o valor? '))
if (x < 50):
    print("Intervalo [0,25]\n") 
elif (x > 25 and x <50):
    print("Intervalo (25, 50]\n")
elif (x > 50 and x <75):
    print(" Intervalo entre (50, 75]\n")
else:
    print("Intervalo entre (75, 100]\n")

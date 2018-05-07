#encoding utf-8
'''
Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer do plano, 
P(x,y)  e Q(x,y), imprima o resultado do cálculo da distância entre eles.
'''

x1, y1 = input("entre com o ponto A separados por virgula.\n").split(",")
x2, y2 = input("entre com o ponto B separados por virgula.\n").split(",")

dA_B = (((int(x2)-int(x1))**2) + ((int(y2)-int(y1))**2)) ** 0.5
print("A distância entre A e B é:", dA_B)
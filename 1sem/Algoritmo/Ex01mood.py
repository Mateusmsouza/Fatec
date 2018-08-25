'''
Construa um algoritmo que calcule a média aritmética entre quatro notas bimestrais quaisquer fornecidas por um aluno (usuário).
'''

n1,n2,n3,n4 = input("Insira 5 notas bimestrais separadas por virugla.\n").split(",")

print("Sua média aritmética:\n", (int(n1)+int(n2)+int(n3)+int(n4))/4)
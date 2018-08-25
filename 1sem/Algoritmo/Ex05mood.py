'''
Construa um algoritmo que leia as variáveis C e N, respectivamente código e número de horas trabalhadas de um operário. E calcule o salário sabendo-se que ele ganha R$ 10,00 por hora. Quando o número de horas exceder a 50 calcule o excesso de pagamento armazenando-o na variável E, caso contrário zerar tal variável. A hora excedente de trabalho vale R$ 20,00. No final do processamento imprimir o salário total e o salário excedente.
'''

C = int(input("Entre com o código.\n"))
N = int(input("Ente com o tanto de horas trabalhadas:\n"))
count = 0
E = 0
salario = 0


if N > 50: 
	N = N - 50
	salario = 10*50
	while count < N:
		E = E + 20
		count = count + 1
else:
	while count < N:
		salario = salario + 10
		count = count + 1 

print("Código:",C,"Salário Total:",(salario+E), "excedente", E)
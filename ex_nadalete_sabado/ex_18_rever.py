numeros = list()
numeros = input("Insira os numeros separados por virgula.\n").split(",")
maior = 0
menor = int(numeros[0])
for i in numeros:
	print(i)
	i = int(i)-1
	if int(numeros[i]) ==  -1:
		break # Arranjar uma maneira de quebrar o loop aqui
	if int(numeros[i]) > maior:
		maior = int(numeros[i])
	if int(numeros[i]) < menor:
		menor = int(numeros[i])
print("Maior:", maior)
print("Menor:", menor)
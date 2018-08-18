base = int(input("Insira a base:\n"))
expoente = int(input('Insira o expoente\n'))
acumula = base
for i in range(1,expoente):
	acumula = acumula * base
print(acumula)
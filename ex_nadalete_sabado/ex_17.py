A = int(input("Insira o primeiro termo\n"))
B = int(input("Insira o segundo termo\n"))
C = 0

for i in range(2,21):
	C = A + B
	A = B
	B = C

print(A)
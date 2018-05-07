'''
Construa um algoritmo para calcular o volume de uma esfera de raio R, em que R é um dado fornecido pelo usuário. Forneça como saída o resultado do cálculo executado.
'''

raio = int(input("Insira o raio do circulo.\n"))

volume = (4*(3.14*(raio * raio * raio)))/3

print("O volume do circulo é:", volume)
# encoding : utf-8
# Tratamento de usuario - DONE
# Uniao - DONE
# Interseccao - DONE
# A - B - DONE
# Conj. Complementar - DONE
# Conj. das partes - DONE
# Revisar o codigo e melhorar a experiencia do usuario - To Do
# Comentar as linhas - To do
# ---------------------------------------------------------------------------------------------
import os, sys  # Importando a lib OS
from contextlib import contextmanager
from itertools import combinations # Importando combinations do itertools
import time # Importando Time

# var_decisao = None # Variavel para o usuario decididr se inclui outra lista ou nao
vetor_de_listas = []  # Variavel veotor que terá todas as litas inclusas
listas_retornar = []
count_list = int(0)


######################Funções dos conjuntos####################################################
def listador():  # Funcao que exibe um lista das listas
    for indice, valor in enumerate(vetor_de_listas):  # itera a lista de listas
        print("Lista Número {}:{}".format(indice, valor))  # imprime lista a lista


def comparador_intersec(value, lista, retorna):  # Função criada para auxiliar a interseccção
    # Esta função compara se o valor passado está em todas as listas, caso esteja, altera a variavel booleana retorna para False
    for i in lista:
        if value in i:
            continue
        else:
            retorna = False
    return retorna


def UNIAO():  # Funcao que une listas
    os.system('clear')  # Limpa console
    listador()  # Lista as listas
    global vetor_de_listas
    global listas_retornar
    indices = str(input("Entre com o número de índice da lista para as listas a serem unidas:\nEx.: 0,1,2:\n"))
    indiceunir = list(indices.split(","))  # Recolhe quais listas serão unidas

    for i in indiceunir:  # iterando a lista de indices
        indice = int(i)  # passando o indice pra int

        listas_retornar = listas_retornar + vetor_de_listas[int(indice)]  # juntando todas as listas
    listas_retornar = list(set(listas_retornar))  # Retirando elementos repetidos * 1 será mantido junto com um '1' *
    print(listas_retornar) # Exbie o resultado final
    time.sleep(5) # Aguarda 5 segundos


# unir = list(set(unir)) # Retira os elementos duplicados

def INTERSECCAO():
    os.system('clear')  # Limpa Console
    listador()
    global vetor_de_listas
    # Declaração de variaveis
    boolean = True
    indices = str(input("Entre com o número de índice da lista para a Intersecção:\nEx.: 0,1,2:\n"))
    indiceunir = list(indices.split(","))  # Recolhe quais listas serão unidas
    listas_selecionadas = []
    lista_resultante = []

    for i in indiceunir:  # Achando as listas que o usuario quer comparar
        indice = int(i)
        listas_selecionadas.append(vetor_de_listas[int(indice)])

    for j in listas_selecionadas[
        0]:  # Pegando a primeira lista e verificando se seus elementos estão no restante das listas
        adiciona = comparador_intersec(j, listas_selecionadas,
                                       True)  # Chamando uma função que compara se um valor está nas listas, passa o valor(j), as listas e True como variavel de verificação
        if adiciona == True:  # Se retornar que ela estava em todas as listas, é adicionada na lista final
            lista_resultante.append(j)
        else:  # Caso não seja, o programa prossegue
            continue
    print(lista_resultante)
    time.sleep(5) # Aguarda 5 segundos

def DIFERENCA():
    global vetor_de_listas
    os.system('clear') # Limpa o console
    listador() # Lista as listas
    indices = str(input("Entre com o número de índice de DUAS listas para a diferença\nUse o formato: 0-1:\n ")) # Pega os indices das listas
    indiceunir = list(indices.split("-")) #  Separa os indices que serão subtraidos
    y = int(indiceunir[0]) # coloca um índice na var y
    x = int(indiceunir[1]) # coloca um índice na var x
    count = 0 # Cria um count

    if len(indiceunir) != 2: DIFERENCA() # Se o usuário inseriu um valor diferente de duas listas, a função é executada novamente
    for valor in vetor_de_listas[int(y)]: # itera e verifica itens comuns em ambas as listas, caso encontre, deleta este item.
        if valor in vetor_de_listas[int(x)]:
            print(vetor_de_listas[int(y)][count])
            del vetor_de_listas[int(y)][count]
        count += 1
    print(vetor_de_listas[int(y)]) # Exibe o resultado
    time.sleep(5) # Aguarda 5 segundos


def COMPLEMENTO():
	os.system('clear') # Limpa console
	listador() # Lista as listas
	global vetor_de_listas
	indice = int(input("Escolha o conjunto que será o conjunto universo\nUse o formato: 0:\n ")) # Pergunta sobre o indice da lista que será universo
	indice_test = str(indice) # variavel usada para validacao
	lista_retorno = list() # lista que será retornada em tela
	if len(indice_test) != 1: COMPLEMENTO() # se o usuario digitou mais de um numero, a função será executada novamente

	conj_universo = vetor_de_listas[int(indice)] # pega o conjunto universo
	lista_complemento = input("Insira a lista complemento\n Use o formato: 0,1,2,3\n") # Pede que o usuário insira um subconjunto do conjunto universo
	lista_complemento = list(lista_complemento.split(","))

	for i in lista_complemento: # Este trecho, verifica que há algum elemento na lista inserida que não se encontra no conjunto universo, o que ocasionaria um problema de logica
		if i in conj_universo:
			continue
		else: 
			print("Há elementos na lista complemento que não estão no conjunto universo!")
			time.sleep(4)
			COMPLEMENTO()
	for a in conj_universo: # Este conjunto compara quais elementos do conjunto universo nao estao no sobconjunto, os que nao estiverem, serao anexados a uma nova lista
		if a in lista_complemento:
			continue
		else:
			lista_retorno.append(a)
			#continue
	print("O conjunto complementar")
	print(lista_retorno) # Exibe o resultado final
	time.sleep(5) # espera 5 seg



def PARTES():
    global vetor_de_listas
    os.system('clear')
    listador()
    indice = str(input("Entre com o número de índice de UMA lista para obter as partes dela\nUse o formato: x:\n "))
    lista_retorno = list()
    b = vetor_de_listas[int(indice)]
    for temp in range(0, len(b) + 1):
        for c in combinations(b, temp):
            lista_retorno.append(c)
    print("Partes da lista:\n")
    print(lista_retorno)


######################TRATRAMENTO DE USUARIO E RECOLHIMENTO DE LISTAS#########################

def lobby_user():  # Funcao que fornece os parametros para as operacoes
    os.system('clear')  # Limpando o consolde
    print("--------------------------------------------------------")
    print("Você cadastrou {} listas!".format(len(vetor_de_listas)))
    print("--------------------------------------------------------")
    print("Qual operação você gostaria de fazer?")
    funcao = input(
        "O que você gostaria de fazer?\nUnião[Digite 1]\nIntersecção[Digite 2]\nDiferença [Digite 3]\nComplemento [Digite 4]\nPartes [Digite 5]\n")  # Instanciando a funcao
    if funcao == '1':
        UNIAO()
    elif funcao == '2':
        INTERSECCAO()
    elif funcao == '3':
        DIFERENCA()
    elif funcao == '4':
        COMPLEMENTO()
    elif funcao == '5':
        PARTES()
    else:
        lobby_user()


def adiciona_nova_lista():  # Funcao que de fato, recolhe os valores digitados em tela e acrescenta no vetor_de_listas
    vetor_de_listas.append(
        input("Entre com sua lista, separando por ponto e virgula:").split(";"))  # adicionando uma nova lista no vetor
    decisao()  # Chamando a funcao que interroga o usuario


def decisao():  # Funcao que interroga o usuario
    global vetor_de_listas  # sincronizando a variavel da funcao e a declarada anteriormente

    var_decisao = str(
        input("Inclui outra lista? (SIM OU NAO) :\n")).lower()  # Pergunta se o usuario quer adicionar outra lista
    if var_decisao == 'sim':  # Verifica a entrada caso SIM
        adiciona_nova_lista()  # Chama a funcao adiciona nova lista
    if var_decisao == 'nao' or var_decisao =='não':
        lobby_user()
    else:
    	print("Nao Entendi!")
    	time.sleep(2)
    	decisao()

###############################################################################################
adiciona_nova_lista()  # Chama a funcao adiciona nova lista pela primeira vez ao rodar o programa

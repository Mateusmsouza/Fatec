# encoding : utf-8
# Tratamento de usuario - DONE
# Uniao - Doing
# Interseccao - To Do
# A - B - To Do
# Conj. Complementar - To Do
# Conj. das partes - To Do
#---------------------------------------------------------------------------------------------
import os # Importando a lib OS


#var_decisao = None # Variavel para o usuario decididr se inclui outra lista ou nao 
vetor_de_listas = [] # Variavel veotor que terá todas as litas inclusas

######################Funções dos conjuntos####################################################
def listador(): # Funcao que exibe um lista das listas
	for indice, valor in enumerate(vetor_de_listas): # itera a lista de listas
		print("Lista Número {}:{}".format(indice, valor)) # imprime lista a lista


def UNIAO(): # Funcao que une listas
	os.system('clear') # Limpa console
	listador() # Lista as listas
	unir = list(int(input("Quais você queru unir? digite os numeros separados por virgula. Ex.: 1,2,3,4:\n").split(','))) # linha com problema.
	unir = list(set(unir)) # Retira os elementos duplicados

def INTERSECCAO():
	print('uniao')
def DIFERENCA():
	print('uniao')
def COMPLEMENTO():
	print('complemento')
def PARTES():
	print('partes')


######################TRATRAMENTO DE USUARIO E RECOLHIMENTO DE LISTAS#########################

def lobby_user(): # Funcao que fornece os parametros para as operacoes
		os.system('clear') # Limpando o consolde
		print("--------------------------------------------------------")
		print("Você cadastrou {} listas!".format(len(vetor_de_listas)))
		print("--------------------------------------------------------")
		print("Qual operação você gostaria de fazer?")
		funcao = input("O que você gostaria de fazer?\nUnião[Digite 1]\nIntersecção[Digite 2]\nDiferença [Digite 3]\nComplemento [Digite 4]\nPartes [Digite 5]\n") # Instanciando a funcao
		if funcao == '1': UNIAO()
		elif funcao == '2': INTERSECCAO()
		elif funcao == '3': DIFERENCA()
		elif funcao == '4': COMPLEMENTO()
		elif funcao == '5': PARTES()
		else: lobby_user()
 
def adiciona_nova_lista(): # Funcao que de fato, recolhe os valores digitados em tela e acrescenta no vetor_de_listas
    vetor_de_listas.append(str(input("Entre com sua lista, separando por ponto e virgula:").split(";"))) # adicionando uma nova lista no vetor
    decisao() # Chamando a funcao que interroga o usuario  
    
def decisao(): # Funcao que interroga o usuario
	global vetor_de_listas # sincronizando a variavel da funcao e a declarada anteriormente

	var_decisao = str(input("Inclui outra lista? (SIM OU NAO) :\n")).lower() # Pergunta se o usuario quer adicionar outra lista
	if var_decisao == 'sim': # Verifica a entrada caso SIM
		adiciona_nova_lista() # Chama a funcao adiciona nova lista
	else:
		lobby_user()


###############################################################################################
adiciona_nova_lista() # Chama a funcao adiciona nova lista pela primeira vez ao rodar o programa




    
    

    

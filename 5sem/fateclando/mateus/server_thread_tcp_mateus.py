#Servidor TCP
import socket
import rsa
from threading import Thread

global public_key
global private_key

def captura_chave_privada():
    arq = open('/home/mateus/projetos/Fatec/5sem/fateclando/mateus/.chavePriMateus.txt','rb')
    ##carrego a chave
    private_key = bytes()
    for linha in arq:
        private_key += linha
    arq.close()
    return private_key

def decifrar_message(msgc):
    private_key = captura_chave_privada()
    return rsa.decrypt(
        msgc,rsa.PrivateKey.load_pkcs1(private_key, format='PEM')
        )

def conexao(con,cli):
    while True:
        msg = con.recv(1024)
        if b'-----BEGIN RSA PUBLIC KEY-----' in msg:
            public_key = msg
        else:
            print(decifrar_message(msg))
        if not msg: 
            break

    print ('Finalizando conexao do cliente', cli)
    con.close() 

# Endereco IP do Servidor
def inicia_server():
    HOST = ''
    PORT = 5004
    
    tcp = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    orig = (HOST, PORT)
    
    captura_chave_privada()
    tcp.bind(orig)
    tcp.listen(1)
    
    while True:
        con, cliente = tcp.accept()
        print ('Concetado por ', cliente)
        t = Thread(target=conexao, args=(con,cliente,))
        t.start()
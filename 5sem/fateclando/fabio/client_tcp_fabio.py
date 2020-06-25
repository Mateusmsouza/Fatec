#Cliente TCP
import socket
import rsa

def cifra_message(text, pub_key):
    return rsa.encrypt(
        text,
        rsa.PublicKey.load_pkcs1(pub_key, format='PEM')
    )

###
def captura_chave_pub():
    arqnomepub='/home/mateus/projetos/Fatec/5sem/fateclando/mateus/.chavePubMateus.txt'
    arq = open(arqnomepub,'r')

    chave_publica = ''
    for linha in arq:
        chave_publica += linha

    arq.close()
    return chave_publica

def inicia_client():
    SERVER = '127.0.0.1'
    PORT = 5004
    chave_publica = captura_chave_pub()
    captura_chave_pub()
    tcp = socket.socket(socket.AF_INET,
    socket.SOCK_STREAM)
    dest = (SERVER, PORT)
    
    tcp.connect(dest)
    tcp.send(chave_publica.encode('ascii'))
    
    print ('Para sair use CTRL+X\n')
    msg = input()
    while msg != '\x18':
        tcp.send(
            cifra_message(msg.encode('ascii'), chave_publica)
            )
        msg = input()

    tcp.close()

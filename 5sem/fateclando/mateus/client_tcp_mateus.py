#Cliente TCP
import socket
import rsa
# Endereco IP do Servidor
SERVER = '127.0.0.1'
# Porta que o Servidor esta escutando
#abro o arquivo com a chave
arqnomepub='/home/mateus/projetos/fateclando/fabio/.chavePubFabio.txt'
arq = open(arqnomepub,'r')
##carrego a chave

#### client
def cifra_message(text, pub_key):
    return rsa.encrypt(
        text,
        rsa.PublicKey.load_pkcs1(pub_key, format='PEM')
    )

###
chave_publica = ''
for linha in arq:
    chave_publica += linha

arq.close()

#---------------------------
PORT = 5004
tcp = socket.socket(socket.AF_INET,
socket.SOCK_STREAM)
dest = (SERVER, PORT)
tcp.connect(dest)
#manda chave pública
tcp.send(chave_publica.encode('ascii'))
print ('Para sair use CTRL+X\n')
msg = input()
while msg != '\x18':
    tcp.send(
        cifra_message(msg.encode('ascii'), chave_publica)
        )
    msg = input()
tcp.close()
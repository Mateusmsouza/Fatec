from fabio.client_tcp_fabio import inicia_client as inicia_fabio
from fabio.server_thread_tcp_fabio import inicia_server as inicia_server_fabio

from mateus.client_tcp_mateus import inicia_client as inicia_mateus
from mateus.server_thread_tcp_mateus import inicia_server as inicia_server_mateus

import threading
from time import sleep

if __name__ == "__main__":
    print("Executar 1 - Mateus ou 2 - Fábio?")
    value = int(input())
    if value == 1:
        threading.Thread(target=inicia_server_fabio).start()
        sleep(5)
        inicia_fabio()
    elif value == 2:
        threading.Thread(target=inicia_server_mateus).start()
        sleep(5)
        inicia_mateus()
    else: 
        print("INPUT INVALIDO VSF")
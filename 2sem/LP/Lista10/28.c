#include <stdio.h>
#include <string.h>

/* Faca um programa que recebe como entrada o nome de um arquivo de entrada e o nome de um arquivo de saıda. Cada linha do arquivo de entrada
possui colunas de tamanho de 30 caracteres. No arquivo de saıda dever´a ser escrito o arquivo de entrada de forma inversa. Veja um exemplo:
Arquivo de entrada:
    Hoje e dia de prova de AP
    A prova esta muito facil
    Vou tirar uma boa nota

Arquivo de saıda:
    aton aob amu rarit uov
    Licaf otium atse avorp
    A PA ed avorp ed aid e ejoH */

char pop(char *pilha, int *topo) { //remove
        pilha[*topo] = '-';
        *topo -= 1;
        return pilha[*topo];
}

void push(char valor, char *pilha, int *topo) { //adiciona
        *topo += 1;
        pilha[*topo] = valor;
}

int main() {

    FILE *entrada = fopen("arquivo.txt", "r");
    FILE *saida = fopen("saida.txt", "w");
    char aux, stringzona[1000];
    int i=0, topo = -1;;

     while((aux = fgetc(entrada)) != EOF ) {
		push(aux, stringzona, &topo);
		i++;
     }

     stringzona[i] = '\0';

     for (int j=0; j<i; j++) {
        fputc(pop(stringzona, &topo), saida);
     }







    return 0;
}

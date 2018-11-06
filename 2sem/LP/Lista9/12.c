#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu naipe e seu valor) ou tipo “super trunfo” (cada carta possui
um conjunto de atributos). Implemente a parte de distribuicao (sorteio) de cartas para 2 jogadores, considerando que cada jogador ira receber 5
cartas. Exiba na tela as cartas que cada um dos jogadores recebeu.  */

typedef struct {
    char carta[7];
    char naipe[8];
} Baralho;

int main() {
    setlocale(LC_ALL, "portuguese");

    Baralho baralho[52], jog1[7], jog2[7];
    int i = 1, l = 1;


    for (int j=0; j<52; j++) {
        itoa(l, baralho[j].carta, 10);

        if (i == 1)
            strcpy(baralho[j].naipe, "Copas");
        else if (i == 2)
            strcpy(baralho[j].naipe, "Ouros");
        else if (i == 3)
            strcpy(baralho[j].naipe, "Espadas");
        else
            strcpy(baralho[j].naipe, "Paus");

        if (l == 1)
            strcpy(baralho[j].carta, "Ás");
        else if (l == 11)
            strcpy(baralho[j].carta, "Dama");
        else if (l == 12)
            strcpy(baralho[j].carta, "Valete");
        else if (l == 13)
            strcpy(baralho[j].carta, "Rei");

        i++;
        l++;

        if (l == 14) l = 1;
        if (i == 5) i = 1;
    }

        srand(time(NULL));
        int aux1, aux2;
        for (int i=0; i<7; i++) {
            aux1 = rand() % 52;
            aux2  = rand() % 52;

            while (strcmp(baralho[aux1].carta, "-") == 0)
                aux1 = rand() % 52;

            while (strcmp(baralho[aux2].carta, "-") == 0)
                aux2  = rand() % 52;

            jog1[i] = baralho[aux1];
            strcpy(baralho[aux1].carta, "-");

            jog2[i] = baralho[aux2];
            strcpy(baralho[aux2].carta, "-");
        }


    printf("Cartas do jogador 1: \n");
    for (int i=0; i<7; i++) {
        printf("%s, %s\n", jog1[i].carta, jog1[i].naipe);
    }
    printf("\nCartas do jogador 2:\n");
        for (int i=0; i<7; i++) {
        printf("%s, %s\n", jog2[i].carta, jog2[i].naipe);
    }
    return 0;
}

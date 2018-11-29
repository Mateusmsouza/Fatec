#include <stdio.h>
#include <string.h>

/* Faca um programa no qual o usuario informa o nome do arquivo e uma palavra, e retorne o numero de vezes que aquela palavra aparece no arquivo. */

int main() {
    char nomeArquivo[50], palavra[50], aux, palavra2[50];
    int cont = 0, i = 0;

    printf("Escolha o nome do arquivo: ");
    scanf("%s", &nomeArquivo);

    printf("Palavra que deseja contar: ");
    scanf("%s", &palavra);

    strncat(nomeArquivo, ".txt", 50);

    FILE *arq = fopen(nomeArquivo, "r");

     while((aux = fgetc(arq)) != EOF ) {
            if (aux != ' ')
                palavra2[i++] = aux;
            else {
                palavra2[i] = '\0';
                i = 0;
                printf("%s\n", palavra2);

                if (strcmpi(palavra2, palavra) == 0)
                    cont ++;
            }
     }

     printf("\n%d", cont);

     fclose(arq);
}


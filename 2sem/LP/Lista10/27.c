#include <stdio.h>

/* Faca um programa que receba do usuario um arquivo texto e mostre na tela quantas linhas esse arquivo possui */

int main() {
    FILE *arq = fopen("arquivo.txt", "r+");
    int cont = 0;
    char aux;

   while((aux = fgetc(arq)) != EOF ) {
		if (aux == '\n')
            cont ++;
     }

     printf("%d linhas", cont);

    return 0;
}

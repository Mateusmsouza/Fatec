#include <stdio.h>

/*  Faca um programa que receba do usuario um arquivo texto. Crie outro arquivo texto contendo o texto do arquivo de entrada, mas com as vogais
substituıdas por ‘*’.  */

int main () {
    FILE *arquivo = fopen("arquivo.txt", "r");
    FILE *saida = fopen("saida.txt", "w");
    char aux;

     while((aux = fgetc(arquivo)) != EOF ) {
		if (aux == 'a' || aux == 'e' || aux == 'i' ||  aux == 'o' ||  aux == 'u' )
            fputc('*', saida);
        else
            fputc(aux, saida);
     }

    fclose(saida);
    fclose(arquivo);

    return 0;
}

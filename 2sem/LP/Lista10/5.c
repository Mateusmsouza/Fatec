#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX 27

/*Faca um programa que receba do usuario um arquivo texto e um caracter. Mostre na tela ´
quantas vezes aquele caractere ocorre dentro do arquivo.*/


int main() {
    setlocale(LC_ALL, "portuguese");

    FILE *p_file;
    char nameFile[255], name_file[255], to_compare, strByStr;
    int cont = 0;

    printf("Comparar com que caracter? ");
    scanf("%c", &to_compare);
    fflush(stdin);
    printf("Entre com o nome do arquivo: ");
    gets(nameFile);

    p_file = fopen(nameFile, "r");
    if (p_file == NULL){
        printf("Arquivo %s não localizado.", nameFile);
        return 0;
    }

    while ((strByStr = fgetc(p_file)) != EOF) { // fgetc vai ler o caracter do arquivo e automaticamente se posicionar no proximo
        if (strByStr == to_compare){
            cont++;
        }
    }
    printf("A string %c aparece %d no arquivo", to_compare, cont);
    return 0;
}

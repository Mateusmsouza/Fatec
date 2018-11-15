/*5. Faca um programa que receba do usuario um arquivo texto e um caracter. Mostre na tela ´
quantas vezes aquele caractere ocorre dentro do arquivo.*/

/* Refatorar se houver tempo: alterar o gets para fgets e resolver o problema do fgets
deixar a string maior, quebrando a abertura do arquivo */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX 27

int main(){
    setlocale(LC_ALL, "portuguese");

    FILE *p_file;
    char nameFile[255];
    char name_file[255];
    char to_compare;
    char strByStr;
    int count = 0;

    printf("Comparar com que caracter?\n");
    scanf("%c", &to_compare);
    fflush(stdin);
    printf("Entre com o nome do arquiv (máximo de 26 caraceteres)");
    gets(nameFile);
    //fgets(name_file, sizeof(name_file), stdin); // Deixa o usuario entrar com o nome do arquivo
    //printf("%s", name_file);
    //fflush(stdin);
    //snprintf(nameFile, sizeof(nameFile), ("%s", name_file)); // realoca na variavel corrigindo o length da string para nao dar erro na leitura

    p_file = fopen(nameFile, "r");
    if (p_file == NULL){
        printf("Arquivo %s não localizado.", nameFile);
        return 0;
    }

    // Compara
    while( (strByStr=fgetc(p_file)) != EOF){ // fgetc vai ler o caracter do arquivo e automaticamente se posicionar no proximo
        if (strByStr == to_compare){
            ++count;
        }
    }
    printf("A string %c aparece %d no arquivo", to_compare, count);
    return 0;
}

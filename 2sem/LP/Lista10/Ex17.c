/*Fac¸a um programa que leia um arquivo que contenha as dimensoes de uma matriz (linha ˜
e coluna), a quantidade de posic¸oes que ser ˜ ao anuladas, e as posic¸ ˜ oes a serem anula- ˜
das (linha e coluna). O programa le esse arquivo e, em seguida, produz um novo arquivo ˆ
com a matriz com as dimensoes dadas no arquivo lido, e todas as posic¸ ˜ oes especifica- ˜
das no arquivo ZERADAS e o restante recebendo o valor 1.
Ex: arquivo “matriz.txt”
3 3 2 /*3 e 3 dimens~oes da matriz e 2 posi¸c~oes que ser~ao anuladas
1 0
1 2 Posi¸c~oes da matriz que ser~ao anuladas.
arquivo “matriz saida.txt”
sa´ıda:
1 1 1
0 1 0
1 1 1
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int numLinhas;
    int numColunas;
    int blankSpaces;
}Matriz;
Matriz matriz;

typedef struct{
    int xLinha;
    int yColuna;
}blankSpaces;

void constructor(int numLinhas, int numColunas, int blankSpaces){
    matriz.numLinhas = numLinhas;
    matriz.numColunas = numColunas;
    matriz.blankSpaces = blankSpaces;
}

void getFirstLine(char *coord, char linhaArquivo[], int valoresConstructor[], int countConstructor){
    coord = strtok(linhaArquivo," "); // separando os valores da primeira linha pelo espaço
    while(coord != NULL){ // iterando o ponteiro até que seja nulo
        // convertendo o string para inteiro
        valoresConstructor[countConstructor] = strtol(coord,NULL,10);
            // Aumentando o valor do contador e trocando de valor do ponteiro.
        countConstructor++;
        coord = strtok(NULL, " ");
    }
    // construindo a matriz
    constructor(valoresConstructor[0],valoresConstructor[1],valoresConstructor[2]);
}

void getOtherLine(char *pointer, char linhaArquivo[], int linha, blankSpaces *ponteiroSpaces ){
    pointer = strtok(linhaArquivo, " ");
    int gamb = 1;
    while (pointer != NULL){
      if (gamb == 1){
        ponteiroSpaces[linha].xLinha = strtol(pointer,NULL,10);
      }else{
        ponteiroSpaces[linha].yColuna = strtol(pointer,NULL,10);
      }
      gamb++;
    }
}



int main(){
    setlocale(LC_ALL, "portuguese");
    // Def
    FILE* input;
    char linhaArquivo[255];
    char c;
    char *coord;
    char *pointer;
    blankSpaces *ponteiroSpaces;
    int valoresConstructor[3];
    int countConstructor = 0;
    int line = 1;




    input = fopen("input.txt","r");
    while (fgets(linhaArquivo, sizeof(linhaArquivo), input) != NULL){

        if (line == 1){ // garantindo que apenas a primeira linha entrará no loop
                getFirstLine(coord, linhaArquivo, valoresConstructor, countConstructor);
        }
        line++;

    }

    // alocando no ponteiro um vetor dinâmico de blankSpaces
    ponteiroSpaces = (blankSpaces *) malloc((line-1) * sizeof(blankSpaces));

    line = 1;
    while (fgets(linhaArquivo, sizeof(linhaArquivo), input) != NULL){
      if (line != 1){
         getOtherLine(pointer, linhaArquivo, line, ponteiroSpaces);
      }
      line++;
    }

    // testando a função de blanks
    printf("Teste de blank\n");
    for(int i=2; i < line; i++){
      printf("Linha da blank %d: %d\n", line, ponteiroSpaces[i].xLinha);
      printf("Coluna da blank %d: %d\n", line, ponteiroSpaces[i].yColuna);
    }
    // Construindo a matriz
    for (int linhas = 1 ; linhas <= matriz.numColunas; linhas++){
        for (int colunas = 0 ; colunas < matriz.numLinhas; colunas++){
            printf("1 ");
        }
        printf("\n");
    }


    return 0;
}

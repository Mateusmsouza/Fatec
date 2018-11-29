#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/*Faca um programa que leia um arquivo que contenha as dimensoes de uma matriz (linha
e coluna), a quantidade de posic¸oes que serao anuladas, e as posicoes a serem anuladas
(linha e coluna). O programa le esse arquivo e, em seguida, produz um novo arquivo com a
matriz com as dimensoes dadas no arquivo lido, e todas as posic¸ ˜ oes especificadas no
arquivo ZERADAS e o restante recebendo o valor 1.
Ex: arquivo “matriz.txt”

3 3 2 /*3 e 3 dimensoes da matriz e 2 posicoes que serao anuladas
1 0
1 2 Posioes da matriz que serao anuladas.
arquivo “matriz saida.txt”
saıda:
1 1 1
0 1 0
1 1 1
*/

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
blankSpaces ponteiroSpaces[255];
int ponteiroBlank=0;
//
void constructor(int numLinhas, int numColunas, int blankSpaces){
    matriz.numLinhas = numLinhas;
    matriz.numColunas = numColunas;
    matriz.blankSpaces = blankSpaces;
}

void primeiraLinha(char *coord, char linhaArquivo[], int valoresConstructor[], int countConstructor){
    coord = strtok(linhaArquivo," ");

    while(coord != NULL){
        valoresConstructor[countConstructor] = strtol(coord,NULL,10);
        countConstructor++;
        coord = strtok(NULL, " ");
    }
    constructor(valoresConstructor[0],valoresConstructor[1],valoresConstructor[2]);
}

void outraLinha(char *pointer, char linhaArquivo[], int linha){
    pointer = strtok(linhaArquivo," ");
    int aux = 1;
    while (pointer != NULL){
        if (aux == 1)
          ponteiroSpaces[ponteiroBlank].xLinha = strtol(pointer,NULL,10);
        else{
          ponteiroSpaces[ponteiroBlank].yColuna = strtol(pointer,NULL,10);
          aux = 1;
          ponteiroBlank++;
        }
        aux++;
        pointer = strtok(NULL, " ");
    }
}

int main(){
    setlocale(LC_ALL, "portuguese");

    FILE* input;
    char linhaArquivo[255], c, *coord, *pointer;
    int valoresConstructor[3], countConstructor = 0, line = 1, isZero = 0;
    FILE *arq;

    input = fopen("input.txt","r");

    while (fgets(linhaArquivo, sizeof(linhaArquivo), input) != NULL) {
        if (line == 1)
                primeiraLinha(coord, linhaArquivo, valoresConstructor, countConstructor);

        if (line != 1 )
                outraLinha(pointer, linhaArquivo, line);

        line++;
    }

    arq = fopen("output.txt","a");

    for (int linhas = 1 ; linhas <= matriz.numColunas; linhas++){
        for (int colunas = 0 ; colunas < matriz.numLinhas; colunas++){
            for(int i=0; i <= ponteiroBlank-1; i++){
              if (linhas-1 == ponteiroSpaces[i].xLinha && ponteiroSpaces[i].yColuna == colunas){
                isZero = 1;

                if (isZero == 1)
                  fwrite("0 ", strlen("0 "),1,arq);
                else
                  fwrite("1 ", strlen("1 "),1,arq);

                isZero = 0;
        }
        fprintf(arq, "\n");
    }

}
    }
    return 0;
}

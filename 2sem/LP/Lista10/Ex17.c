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
#include <string.h>

int main(){
    FILE* input;
    char linhaArquivo[255];
    int useOrNot;

    input = fopen("input.txt","r");
    while (fgets(linhaArquivo, sizeof(linhaArquivo), input) != NULL){
        printf("%s", linhaArquivo);

    }
    return 0;
}

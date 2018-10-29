/*
Escreva um programa que substitui as ocorrencias de um caractere ‘0’ em uma string por ˆ
outro caractere ‘1’.
*/

#include <stdio.h>
#include <string.h>
int main(){
    char string1[255], string2[255];

    printf("type\n");
    scanf("%s", string1);
    int bla = strlen(string1);

    for(int i = 0; i < bla; ++i){
        if (string1[i] == '0'){
            string2[i] = '1';
        }else{
            string2[i] = string1[i];
        }
    }
    printf("%s\n", string2);
    return 0;
}

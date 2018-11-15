/*Fac¸a um programa que permita que o usuario entre com diversos nomes e telefone para ´
cadastro, e crie um arquivo com essas informac¸oes, uma por linha. O usu ˜ ario finaliza a ´
entrada com ‘0’ para o telefone*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *p;
    char nome[255];
    int telefone;


    p = fopen("resultFile.txt","w");
    while (telefone != 0){
        printf("Insira o proximo nome");
        gets(nome);
        printf("Insira agora o telefone");
        scanf("%d", &telefone);
        if (telefone != 0){
            fseek(p,0, SEEK_END);
            fwrite()
        }

    }


    return 0;
}

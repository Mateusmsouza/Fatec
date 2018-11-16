/*Fac¸a um programa que permita que o usuario entre com diversos nomes e telefone para ´
cadastro, e crie um arquivo com essas informac¸oes, uma por linha. O usu ˜ ario finaliza a ´
entrada com ‘0’ para o telefone*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    FILE *p;
    char nome[255], telefoneToString[255];
    long long int telefone=9;


    p = fopen("resultFile.txt","w");
    while (telefone != 0){
        printf("Insira o proximo nome\n");
        gets(nome);
        printf("Insira agora o telefone [Insira 0 para finalizar a gravação]\n");
        scanf("%ld", &telefone);
        fflush(stdin);
        if (telefone != 0){
            fseek(p,0, SEEK_END);
            sprintf(telefoneToString,"%ld",telefone);
            fwrite(&telefoneToString, strlen(telefoneToString),1,p);
            fseek(p,0, SEEK_END);
            fwrite(&nome, strlen(nome),1,p);
        }
    }
    printf("Execução finalizada.");


    return 0;
}

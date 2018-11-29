#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faca um programa que permita que o usuario entre com diversos nomes e telefone para
cadastro, e crie um arquivo com essas informacoes, uma por linha. O usuario finaliza a
entrada com ‘0’ para o telefone
*/

int main(){
    setlocale(LC_ALL, "portuguese");
    FILE *p;
    char nome[255], telefoneS[255];
    int telefone=9;


    p = fopen("resultFile.txt","w");
    while (telefone != 0){
        printf("Insira o proximo nome\n");
        gets(nome);
        printf("Insira agora o telefone [Insira 0 para finalizar a gravação]\n");
        scanf("%ld", &telefone);
        fflush(stdin);
        if (telefone != 0){
            fseek(p,0, SEEK_END);
            sprintf(telefoneS,"%ld",telefone);
            fwrite(&telefoneS, strlen(telefoneS),1,p);
            fseek(p,0, SEEK_END);
            fwrite(&nome, strlen(nome),1,p);
        }
    }
    printf("Execução finalizada.");


    return 0;
}

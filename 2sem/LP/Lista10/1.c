#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Escreva um programa que:
    (a) Crie/abra um arquivo texto de nome “arq.txt”
    (b) Permita que o usu´ario grave diversos caracteres nesse arquivo, ate que o usuario entre com o caractere ‘0’
    (c) Feche o arquivo
*/

int main(){
    FILE *p_file;
    p_file = fopen("arq.txt","a");
    int opc = 9;
    char gravar[255];

    while (opc!=0){

        printf("Insira o que você quer gravar no arquivo");
        scanf("%s", gravar);

        fseek(p_file,0, SEEK_END);
        fwrite(&gravar, strlen(gravar), 1,p_file);

        printf("Deseja continuar? \n[0] Sair \n[outro numero] continuar.");
        scanf("%d", &opc);
    }

    fclose(p_file);
    return 0;
}

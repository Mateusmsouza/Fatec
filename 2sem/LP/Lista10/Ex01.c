/*. Escreva um programa que:
(a) Crie/abra um arquivo texto de nome “arq.txt”
(b) Permita que o usuario grave diversos caracteres nesse arquivo, at ´ e que o usu ´ ario ´
entre com o caractere ‘0’
(c) Feche o arquivo*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    FILE *p_file;
    p_file = fopen("arq.txt","a");
    int decisao = 9;
    char gravar[255];

    printf("Programa feito para gravar arquivo até quando você quiser.\n");
    while (decisao!=0){

        printf("Insira o que você quer gravar no arquivo\n");
        scanf("%s", gravar);

        fseek(p_file,0, SEEK_END);
        fwrite(&gravar, strlen(gravar)+'\n', 1,p_file);

        printf("Deseja gravar mais? insira 0 caso não queira.\n");
        scanf("%d", &decisao);
    }

    fclose(p_file);
    return 0;
}

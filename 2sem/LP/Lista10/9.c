#include <string.h>
#include <stdio.h>
#include <locale.h>

/*
Faca um programa que receba dois arquivos do usuario, e crie um terceiro arquivo com
o conteudo dos dois primeiros juntos (o conte udo do primeiro seguido do conteudo do segundo).
*/

int main(){
    setlocale(LC_ALL, "portuguese");

    FILE *p1;
    FILE *p2;
    FILE *p3;
    char nameFile[255];
    char buffer[255];

    printf("Primeiro arquivo\n");
    gets(nameFile);
    p1 = fopen(nameFile, "r");

    printf("Segundo arquivo\n");
    gets(nameFile);
    p2 = fopen(nameFile, "r");

    if (p2 == NULL || p1 == NULL) {
        printf("Arquivos passados nao localizados. Finalizando execucao.\n");
        return 1;
    }
    p3 = fopen("resultFile.txt", "w");

    while(fgets(buffer, 255, (FILE*) p1)) {
        fseek(p3,0, SEEK_END);
        fwrite(&buffer, strlen(buffer), 1,p3);
    }
    while(fgets(buffer, 255, (FILE*) p2)) {
        fseek(p3,0, SEEK_END);
        fwrite(&buffer, strlen(buffer), 1,p3);
    }

    fclose(p3);
    return 0;
}

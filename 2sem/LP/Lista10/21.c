#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
Crie um programa que receba como entrada o numero de alunos de uma disciplina. Aloque
dinamicamente em uma estrutura para armazenar as informac¸oes a respeito desses
alunos: nome do aluno e sua nota final.
Use nomes com no maximo 40 caracteres. Em seguida, salve os dados dos alunos em um
arquivo binario. Por fim, leia o arquivo e mostre o nome do aluno com a maior nota.
*/

typedef struct{
    int numAlunos;
    char nome[41];
    char notaFinal[4];
}armazenar;

int main(){
    setlocale(LC_ALL, "portuguese");
    armazenar Armazenar;
    FILE *arquivo;

    char linhaArquivo[255];
    char aux[255];
    float maiorNota = 0;
    char maiorNota[255];

    printf("Número de alunos\n");
    scanf("%d", &Armazenar.numAlunos);

    arquivo = fopen("database.txt", "w");

    for (int i = 0; i < Armazenar.numAlunos; i++){
        printf("Nome do aluno (max 40 caracteres)\n");
        scanf("%s", Armazenar.nome);
        fflush(stdin);
        printf("Nota final\n");
        scanf("%s", Armazenar.notaFinal);
        fflush(stdin);
        fprintf(arquivo, Armazenar.nome);
        fprintf(arquivo, Armazenar.notaFinal);
        printf("Gravado com sucesso.\n");
        if (maiorNota < atof(Armazenar.notaFinal)){
            maiorNota = atof(Armazenar.notaFinal);
            strcpy(maiorNota, Armazenar.nome);
        }

    }
    fclose(arquivo);


    arquivo = fopen("database.txt", "r");

    printf("Aluno mais top\n: %s", maiorNota);
    fclose(arquivo);
    return 0;
}

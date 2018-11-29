#include <stdio.h>
#include <string.h>

/*  Faca um programa que receba do usuario um arquivo que contenha o nome e a nota de diversos alunos da seguinte forma:
    NOME: JOAO
    NOTA: 8
 um aluno por linha. Mostre na tela o nome e a nota do aluno que possui a maior nota.
 */

typedef struct {
    char nome[50];
    float nota;
} Aluno;

int main() {
    FILE *arq = fopen("arquivo.txt", "r+");
    int qtd;
    Aluno aluno;
    char aux, palavra[50], palavra2[50], nome[50];
    float nota = 0.0;


    printf("Quantos alunos deseja adicionar? ");
    scanf("%d", &qtd);

    for (int i=0; i<qtd; i++) {
        printf("Nome: ");
        fflush(stdin);
        gets(aluno.nome);
        fprintf(arq, "Nome: %s\n", aluno.nome);

        printf("Nota: ");
        scanf("%f", &aluno.nota);
        fprintf(arq, "Nota: %.2f\n\n", aluno.nota);
        printf("\n");

        if (aluno.nota > nota) {
            nota = aluno.nota;
            strcpy(nome, aluno.nome);
        }
    }

    printf("Maior nota: \nAluno: %s\nNota: %.2f\n", nome, nota);

    return 0;
}


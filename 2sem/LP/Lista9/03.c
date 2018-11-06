#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/* Construa uma estrutura aluno com nome, numero de matrıcula e curso. Leia do usuario a informacao de 5 alunos, armazene em vetor dessa
estrutura e imprima os dados na tela */

struct Aluno {
    char nome[50], curso[20];
    int matricula;
    struct Aluno *prox;
};

int main() {
    setlocale(LC_ALL, "portuguese");

    struct Aluno alunos, *inicio, *atual;

    inicio = malloc(sizeof(struct Aluno));
    inicio->prox = NULL;

    atual = inicio;

    for (int i=0; i<5; i++) {
        printf("Nome do %dº aluno: ", i+1);
        fflush(stdin);
        fgets(atual->nome, 50, stdin);
        atual->nome[strlen(atual->nome) ] = '\0';

        printf("Matricula: ");
        scanf("%d", &atual->matricula);

        printf("Curso: ");
        fflush(stdin);
        fgets(atual->curso, 20, stdin);
        atual->nome[strlen(atual->nome) -1] = '\0';
        printf("\n");

        atual-> prox = malloc(sizeof(struct Aluno));
        atual = atual->prox;

        atual->prox = NULL;
    }

    atual = inicio;

    while (atual->prox != NULL) {
        printf("Nome: %s\n", atual->nome);
        printf("Matrícula: %d\n", atual->matricula);
        printf("Curso: %s\n", atual->curso);

        atual = atual-> prox;
    }

    return 0;
}

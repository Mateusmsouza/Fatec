#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/* Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrıcula do aluno, nome, nota da primeira
prova, nota da segunda prova e nota da terceira prova.
    (a) Permita ao usuario entrar com os dados de 5 alunos.
    (b) Encontre o aluno com aux nota da primeira prova.
    (c) Encontre o aluno com aux media geral.
    (d) Encontre o aluno com menor media geral
    (e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovacao.  */

struct Aluno {
    int matricula;
    char nome[50];
    float nota1, nota2, nota3, media;

    struct Aluno *prox;
};


void lerDados(struct Aluno *atual) {
    for (int i=0; i<5; i++) {
        printf("Nome: ");
        fflush(stdin);
        fgets(atual->nome, 50, stdin);
        atual->nome[strlen(atual->nome) -1] = '\0';

        printf("Matrícula: ");
        scanf("%d", &atual->matricula);

        printf("Nota 1: ");
        scanf("%f", &atual->nota1);

        printf("Nota 2: ");
        scanf("%f", &atual->nota2);

        printf("Nota 3: ");
        scanf("%f", &atual->nota3);

        atual->media = (atual->nota1 + atual->nota2 + atual->nota3) / 3;

        printf((atual->media >= 6) ? "Aluno aprovado.\n\n" : "Aluno reprovado.\n\n");

        atual->prox = malloc(sizeof(struct Aluno));
        atual = atual->prox;
        atual->prox = NULL;
    }
}

void imprimir (struct Aluno *atual) {
    printf("Nome: %s\n", atual->nome);
    printf("Matricula: %d\n", atual->matricula);
    printf("Nota da prova 1: %.2f\n", atual->nota1);
    printf("Nota da prova 2: %.2f\n", atual->nota2);
    printf("Nota da prova 3: %.2f\n", atual->nota3);
}

void maiorNotaP1(struct Aluno *atual) {
    struct Aluno *aux;

    while (atual->prox != NULL) {
        if (atual->nota1 > aux->nota1)
            aux = atual;
        atual = atual->prox;
    }
    imprimir(aux);
}

void maiorMedia(struct Aluno *atual) {
    struct Aluno *aux;
    aux = atual;

    while (atual->prox != NULL) {
        if (atual->media > aux->media)
            aux = atual;
        atual = atual->prox;
    }
    imprimir(aux);
}

void menorMedia(struct Aluno *atual) {
    struct Aluno *aux;
    aux= atual;

    while (atual->prox != NULL) {
        if (atual->media < aux->media)
            aux = atual;
        atual = atual->prox;
    }
    imprimir(aux);
}

int main() {
    setlocale(LC_ALL, "portuguese");

    struct Aluno *inicio, *atual;
    char opc;

    inicio = malloc(sizeof(struct Aluno));
    atual = inicio;

    do {
        printf("| 0 | Sair\n");
        printf("| 1 | Entrar com dados de 5 alunos\n");
        printf("| 2 | Encontrar aluno com maior nota na primeira prova\n");
        printf("| 3 | Encontrar aluno com maior media geral\n");
        printf("| 4 | Encontrar aluno com menor media geral\n");
        opc = getche() ;
        printf("\n");

        switch (opc) {
            case '0':
                break;

            case '1':

                    lerDados(atual);
                break;

            case '2':
                maiorNotaP1(atual);
                break;

            case '3':
                maiorMedia(atual);
                break;

            case '4':
                menorMedia(atual);
                break;

            default:
                printf("Opção inválida.\n");

        }
        atual = inicio;
        printf("\n");
        system("pause");
        system("cls");
    } while (opc != '0');

    return 0;
}

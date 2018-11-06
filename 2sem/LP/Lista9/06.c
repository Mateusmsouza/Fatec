#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/*  Faca um programa que realize a leitura dos seguintes dados relativos a um conjunto de alunos: Matricula, Nome, Codigo da Disciplina, Nota1 e
Nota2. Considere uma turma de ate 10 alunos. Apos ler todos os dados digitados, e depois de armazena-los em um vetor de estrutura, exibir na tela
a listagem ﬁnal dos alunos com as suas respectivas medias ﬁnais (use uma media ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0).  */

struct aluno {
    int matricula, cod_disciplina;
    char nome[50];
    float nota1, nota2;
    struct aluno *prox;
};

int main() {
    setlocale(LC_ALL, "portuguese");

    struct aluno *atual, *inicio;
    char opc;

    inicio = malloc(sizeof(struct aluno));
    atual = inicio;
    atual->prox = NULL;

    do {
        printf("Matricula: ");
        scanf("%d", &atual->matricula);

        printf("Nome: ");
        fflush(stdin);
        fgets(atual->nome, 50, stdin);
        atual->nome[strlen(atual->nome) -1] = '\0';

        printf("Codigo da disciplina: ");
        scanf("%d", &atual->cod_disciplina);

        printf("Nota 1: ");
        scanf("%f", &atual->nota1);

        printf("Nota 2: ");
        scanf("%f", &atual->nota2);

        printf("\nDeseja continuar adicionando? ");
        opc = getche();
        printf("\n");

        while (opc != 's' && opc != 'S' && opc != 'n' && opc != 'n') {
            printf("Opção inválida, tente novamente.\n");
            printf("\nDeseja continuar adicionando? ");
            opc = getche();
            printf("\n");
        }
            atual->prox = malloc(sizeof(struct aluno));
            atual = atual->prox;
            atual->prox = NULL;
    } while (opc == 's');

    atual = inicio;
    printf("\nLista de alunos: \n");

    while (atual->prox != NULL) {
        printf("Nome: %s\n", atual->nome);
        printf("Matrícula: %d\n", atual->matricula);
        printf("Disciplina: %d\n", atual->cod_disciplina);
        printf("Nota 1: %.2f\n", atual->nota1);
        printf("Nota 2: %.2f\n", atual->nota2);
        printf("Média: %.2f\n\n", (atual->nota1 * 1 + atual->nota2 * 2) / 3);

        atual = atual->prox;
    }

    return 0;
}

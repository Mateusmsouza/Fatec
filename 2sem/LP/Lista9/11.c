#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

#define TAM 10

/* Faca um programa que leia os dados de 10 alunos (Nome, matricula, MediaFinal), armazenando em um vetor. Uma vez lidos os dados, divida estes
dados em 2 novos vetores, o vetor dos aprovados e o vetor dos reprovados, considerando a media mınima para a aprovacao como sendo 5.0. Exibir
na tela os dados do vetor de aprovados, seguido dos dados do vetor de reprovados.  */

typedef struct {
    char nome[50];
    int matricula;
    float media;
} Aluno;


int main() {
    setlocale(LC_ALL, "portuguese");

    Aluno alunos[TAM], aprovados[TAM], reprovados[TAM];
    int cont1 = 0, cont2 = 0;

    for (int i=0; i<TAM; i++) {
        printf("Nome: ");
        fflush(stdin);
        gets(alunos[i].nome);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Media: ");
        scanf("%f", &alunos[i].media);

        printf("\n");

        if (alunos[i].media < 5)
            reprovados[cont1++] = alunos[i];
        else
            aprovados[cont2++] = alunos[i];
    }

    system("cls");

    printf("\nLista de aprovados: \n");

    for (int i=0; i<cont2; i++) {
        printf("Nome: %s\n", aprovados[i].nome);
        printf("Matricula: %d\n", aprovados[i].matricula);
        printf("Media: %.2f\n\n", aprovados[i].media);
    }

    printf("Lista de reprovados: \n");

    for (int i=0; i <cont1; i++) {
        printf("Nome: %s\n", reprovados[i].nome);
        printf("Matricula: %d\n", reprovados[i].matricula);
        printf("Media: %.2f\n\n", reprovados[i].media);
    }

    return 0;
}

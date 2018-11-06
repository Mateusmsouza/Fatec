#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/*  Faca um programa que leia um vetor com dados de 5 livros: tıtulo (maximo 30 letras), autor (maximo 15 letras) e ano. Procure um livro por tıtulo,
perguntando ao usuario qual tıtulo deseja buscar. Mostre os dados de todos os livros encontrados */

struct Livro {
    char titulo[30], autor[15];
    int ano;
    struct Livro *prox;
};

void print(struct Livro *atual) {
    printf("Titulo: %s\n", atual->titulo);
    printf("Autor: %s\n", atual->autor);
    printf("Ano: %d\n", atual->ano);
}

int main() {
    setlocale(LC_ALL, "portuguese");

    struct Livro *inicio, *atual;
    char titulo[30];

    inicio = malloc(sizeof(struct Livro));
    atual = inicio;
    atual->prox = NULL;

    for (int i=0; i<5; i++) {
        printf("Titulo: ");
        fflush(stdin);
        gets(atual->titulo);

        printf("Autor: ");
        fflush(stdin);
        gets(atual->autor);

        printf("Ano: ");
        scanf("%d", &atual->ano);

        printf("\n");

        atual->prox = malloc(sizeof(struct Livro));
        atual = atual->prox;
    }

    printf("\n\nQual título deseja buscar? ");
    fflush(stdin);
    gets(titulo);

    atual = inicio;

    while (atual->prox != NULL) {
        if (strcmpi(atual->titulo, titulo) == 0)
            print(atual);
        atual = atual->prox;
        printf("\n");
    }


    return 0;
}

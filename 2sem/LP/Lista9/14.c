#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/* Faca um programa que leia um vetor com os dados de 5 carros: marca (maximo 15 letras), ano e preco. Leia um valor p e mostre as informacoes
de todos os carros com preco menor que p. Repita este processo ate que seja lido um valor p = 0. */

struct Carro {
    char marca[15];
    int ano;
    float preco;
    struct Carro *prox;
};

void print(struct Carro *atual) {
    printf("Marca: %s\n", atual->marca);
    printf("Ano: %d\n", atual->ano);
    printf("Preço: %.2f\n", atual->preco);
}

int main() {
    setlocale(LC_ALL, "portuguese");

    struct Carro *inicio, *atual;
    float preco;

    inicio = malloc(sizeof(struct Carro));
    inicio->prox = NULL;
    atual = inicio;

    for (int i=0; i<5; i++) {
        printf("Marca: ");
        fflush(stdin);
        gets(atual->marca);

        printf("Ano: ");
        scanf("%d", &atual->ano);

        printf("Preço: ");
        scanf("%f", &atual->preco);

        printf("\n");

        atual->prox = malloc(sizeof(struct Carro));
        atual = atual->prox;
    }

    printf("Abaixo de qual preço deseja encontrar? ");
    scanf("%f", &preco);

    atual = inicio;

    while (atual->prox != NULL) {
        if (atual->preco <= preco)
            print(atual);
        atual = atual->prox;
    }

    return 0;
}

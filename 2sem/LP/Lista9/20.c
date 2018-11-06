#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#define QTD 5

/* Faca um programa para armazenar um livro de receitas e:
    - Crie um vetor de 5 receitas, que deve ter nome (max 25 letras), quantidade de ingredientes e
    ingredientes.
    - Para cada receita, leia seu nome e a quantidade de incredientes. Então crie e leia o vetor de ingredientes,
    sendo que cada ingrediente contém  nome e quantidade.
    - Procure receita por nome, mostrando seus ingredientes se encontrar. Se não encontrar, informe ao
    usuário. Repita o processo até digitar uma string vazia. */

typedef struct ingredientes {
    char nome[30];
    int qtd;
} INGREDIENTES;

typedef struct receitas{
    char nome[25];
    int qtd_ingrediente;
    INGREDIENTES *ingredientes;
} RECEITAS;

int main() {
    RECEITAS receitas[QTD];

    for (int i=0; i<QTD; i++) {
        printf("Entre com o nome da receita: ");
        fflush(stdin);
        fgets(receitas[i].nome, 25, stdin);
        receitas[i].nome[strlen(receitas[i].nome) -1] = '\0';

        printf("Quantos ingredientes essa receita possui? ");
        scanf("%d", &receitas[i].qtd_ingrediente);

        receitas[i].ingredientes = malloc(sizeof(RECEITAS) * receitas[i].qtd_ingrediente);

        printf("\n\n");

        for (int j=0; j<receitas[i].qtd_ingrediente; j++) {
            printf("Entre com o nome do %d ingrediente: ", j+1);
            fflush(stdin);
            fgets(receitas[i].ingredientes[j].nome, receitas[i].qtd_ingrediente, stdin);
            receitas[i].ingredientes[j].nome[strlen(receitas[i].ingredientes[j].nome) -1] = '\0';
            printf("Entre com a quantidade do ingrediente: ");
            fflush(stdin);
            scanf("%d", &receitas[i].ingredientes[j].qtd);
            printf("\n");

        }
    }

   for (int i=0; i<QTD; i++) {
        printf("%s\n", receitas[i].nome);
        printf("Ingredientes:\n");
        for (int j=0; j< receitas[i].qtd_ingrediente; j++) {
            printf("%d %s \n", receitas[i].ingredientes[j].qtd, receitas[i].ingredientes[j].nome);
        }
        printf("\n\n");
    }
    return 0;
}

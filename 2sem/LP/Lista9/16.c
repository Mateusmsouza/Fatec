#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/*  Faca um programa que seja uma agenda de compromissos e:
    - Crie e leia um vetor de 5 estruturas de dados com: compromisso (maximo 60 letras) e data. A data deve ser outra estrutura de dados contendo dia,
    mes e ano.
    - Leia dois inteiros M e A e mostre todos os compromissos do mes M do ano A. Repita o procedimento ate ler M = 0.  */

typedef struct {
    int dia, mes, ano;
} Data;

struct Compromisso {
    char compromisso[60];
    Data data;
    struct Compromisso *prox;
};

void print(struct Compromisso *atual) {
    printf("Compromisso: %s\n", atual->compromisso);
    printf("Data: %d/%d/%d\n", atual->data.dia, atual->data.mes, atual->data.dia);

}

int main() {
    setlocale(LC_ALL, "portuguese");

    struct Compromisso *inicio, *atual;
    int dia, mes;

    inicio = malloc(sizeof(struct Compromisso));
    atual = inicio;
    atual->prox = NULL;

    for (int i=0; i<5; i++) {
        printf("Compromisso: ");
        fflush(stdin);
        gets(atual->compromisso);

        printf("Data (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &atual->data.dia, &atual->data.mes, &atual->data.ano);

        printf("\n");

        atual->prox = malloc(sizeof(struct Compromisso));
        atual = atual->prox;
    }

    printf("Listar por que data? (dd/mm) ");
    scanf("%d/%d", &dia, &mes);

    atual = inicio;

    while (atual->prox != NULL) {
        if (dia == atual->data.dia && mes == atual->data.mes)
            print(atual);
        atual = atual->prox;
        printf("\n");
    }

    return 0;
}

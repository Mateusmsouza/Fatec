#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/* Utilizando uma estrutura, faca um programa que permita a entrada de nome, endereco e telefone de 5 pessoas e os imprima em ordem alfabetica */

typedef struct {
    char nome[50], endereco[255], telefone[15];
} Pessoa;

void BubbleSortStruct(Pessoa *vet, int Tam) {
    Pessoa temp;
    for (int i=0; i<Tam; i++) {
        for (int j=i; j<Tam; j++) {
            if (strcmpi(vet[j].nome, vet[i].nome) < 0) {
                temp = vet[j];
                vet[j] = vet[i];
                vet[i] = temp;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");

    Pessoa pessoas[5];

    for (int i=0; i<5; i++) {
        printf("Nome: ");
        fflush(stdin);
        fgets(pessoas[i].nome, 50, stdin);
        pessoas[i].nome[strlen(pessoas[i].nome) -1] = '\0';

        printf("Endereço: ");
        fflush(stdin);
        fgets(pessoas[i].endereco, 255, stdin);
        pessoas[i].endereco[strlen(pessoas[i].endereco) -1] = '\0';

        printf("Telefone: ");
        fflush(stdin);
        fgets(pessoas[i].telefone, 15, stdin);
        pessoas[i].telefone[strlen(pessoas[i].telefone) -1] = '\0';

        printf("\n");
    }

    BubbleSortStruct(pessoas, 5);

    system("pause");
    system("cls");

    printf("Ordenado: \n");

    for (int i=0; i<5; i++) {
        printf("\nNome: %s\n", pessoas[i].nome);
        printf("Endereço: %s\n", pessoas[i].endereco);
        printf("Telefone: %s\n", pessoas[i].telefone);
    }

    return 0;
}

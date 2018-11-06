#include <stdio.h>
#include <locale.h>
#include <string.h>

/*  Implemente um programa que leia o nome, a idade e o endereco de uma pessoa e armazene os dados em uma estrutura. */

typedef struct {
    char nome[50], endereco[200];
    int idade;
} Pessoa;

int main() {
    setlocale(LC_ALL, "portuguese");
    Pessoa pessoa;

    printf("Nome: ");
    fgets(pessoa.nome, 50, stdin);
    pessoa.nome[strlen(pessoa.nome) -1] = '\0';

    printf("Endereço: ");
    fgets(pessoa.endereco, 200, stdin);
    pessoa.endereco[strlen(pessoa.endereco) -1] = '\0';

    printf("Idade: ");
    scanf("%d", &pessoa.idade);
}

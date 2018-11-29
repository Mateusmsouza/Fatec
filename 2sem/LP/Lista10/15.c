#include <stdio.h>
#include <string.h>

/*  Faca um programa que receba como entrada o ano corrente e o nome de dois arquivos: um de entrada e outro de saıda. Cada linha do arquivo de
entrada contem o nome de uma pessoa (ocupando 40 caracteres) e o seu ano de nascimento. O programa devera ler o arquivo de entrada e gerar
um arquivo de saıda onde aparece o nome da pessoa seguida por uma string que representa a sua idade.
    - Se a idade for menor do que 18 anos, escreva “menor de idade”
    - Se a idade for maior do que 18 anos, escreva “maior de idade”
    - Se a idade for igual a 18 anos, escreva “entrando na maior idade” */

typedef struct {
    char nome[40];
    int ano_nasc;
} Pessoa;

int main() {
    FILE *arq = fopen("arquivo.txt", "w");
    Pessoa pessoa;

    printf("Nome: ");
    fgets(pessoa.nome, 40, stdin);
    pessoa.nome[strlen(pessoa.nome) -1] = '\0';

    fprintf(arq, "%s\n", pessoa.nome);


    printf("Ano de nascimento: ");
    scanf("%d", &pessoa.ano_nasc);


    fprintf(arq, "%d\n", pessoa.ano_nasc);

    int idade = 2018 - pessoa.ano_nasc;

    if (idade < 18)
        fprintf(arq, "Menor de idade.\n");
    else if (idade > 18)
        fprintf(arq, "Maior de idade.\n");
    else
        fprintf(arq, "Entrando na maior idade.\n");




    return 0;
}


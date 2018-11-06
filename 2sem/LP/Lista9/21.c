#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#define QTD 5

/* Faca um programa que armazena filmes produzidos por varios diretores e:
    - Crie e leia um vetor de 5 diretores, cada um contendo nome (maximo 20 letras), quuantidade de filmes
    e filmes. O membro filmes é um vetor, que deve ser criado apos ter lido a quantidade de filmes. Cada
    filme é composto por nome, ano e duracao.
    - Procure um diretor por nome, mostrando todos os filmes que ele ja produziu. Repita o processo
    ate digitar uma string vazia.  */

typedef struct  {
    char nome[20];
    int ano, duracao;
} FILME;

typedef struct diretor {
    char nome[20];
    FILME *filme;
    int qtd;
} DIRETOR;

int main() {
    setlocale(LC_ALL, "Portuguese");

    DIRETOR diretor[QTD];
    char busca[20];

    for (int i=0; i<QTD; i++) {
        diretor[i].qtd = -1;

        printf("Nome do diretor: ");
        fflush(stdin);
        fgets(diretor[i].nome, 20, stdin);
        diretor[i].nome[strlen(diretor[i].nome) -1] = '\0';

        printf("Quantidade de filmes: ");
        scanf("%d", &diretor[i].qtd);

        while (diretor[i].qtd == -1) {
            printf("Valor inválido, tente novamente.\n");
            printf("Quantidade de filmes: ");
            fflush(stdin);
            scanf("%d", &diretor[i].qtd);
        }

       diretor[i].filme = (FILME *) malloc(diretor[i].qtd * sizeof(FILME));

        for (int j=0; j<diretor[i].qtd; j++) {
            printf("Filme %d:\n", j+1);
            printf("Nome: ");
            fflush(stdin);
            fgets(diretor[i].filme[j].nome, 20, stdin);
            diretor[i].filme[j].nome[strlen(diretor[i].filme[j].nome) -1] = '\0';

            printf("Ano: ");
            scanf("%d", &diretor[i].filme[j].duracao);

            printf("Duracao: ");
            scanf("%d", &diretor[i].filme[j].duracao);
        }
        printf("\n");
    }

    do {
        printf("Diretor que deseja buscar: ");
        fflush(stdin);
        fgets(busca, 20, stdin);
        busca[strlen(busca) -1] = '\0';

        for (int i=0; i<QTD; i++) {
            if (strcmpi(busca, diretor[i].nome) == 0 && strcmp(busca , "") != 0) {
                printf("Filmes:\n");
                for(int j=0; j<diretor[i].qtd; j++) {
                    printf("Nome: %s\n", diretor[i].filme[j].nome);
                    printf("Ano: %d\n", diretor[i].filme[j].duracao);
                    printf("Duracao: %d\n\n", diretor[i].filme[j].duracao);
                }
            }
        }
    } while (strcmp(busca , "") != 0) ;
}


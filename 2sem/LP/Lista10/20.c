#include <stdio.h>
#include <stdlib.h>

/*
Crie um programa que receba como entrada o numero de alunos de uma disciplina. Aloque dinamicamente dois vetores para armazenar as
informacoes a respeito desses alunos. O primeiro vetor contem o nome dos alunos e o segundo contem suas notas ﬁnais. Crie um arquivo que
armazene, a cada linha, o nome do aluno e sua nota ﬁnal. Use nomes com no maximo 40 caracteres. Se o nome nao contem 40 caracteres, complete
com espaco em branco.
*/

int main() {
    FILE *arq = fopen("saida.txt", "w");

    int qtd;
    char **nomes;
    float *notas;

    printf("Quantidade de alunos: ");
    scanf("%d", &qtd);

    nomes = malloc (qtd * sizeof(char *));
    for (int i=0; i<qtd; i++)
        nomes[i] = malloc (sizeof(char) * 40);

    notas = malloc (qtd * sizeof(float));

    for (int i=0; i<qtd; i++) {
        printf("Nome: ");
        fflush(stdin);
        fgets(nomes[i], 40, stdin);

        printf("Nota: ");
        scanf("%f", &notas[i]);

       fprintf(arq, "%s %.2f\n", nomes[i], notas[i]);

    }

    return 0;
}

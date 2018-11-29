#include <stdio.h>
#include <locale.h>

/* Escreva um programa que leia a proﬁssao e o tempo de servico (em anos) de cada um dos 5 funcionarios de uma empresa e armazene-os no
arquivo “emp.txt”. Cada linha do arquivo corresponde aos dados de um funcionario. Utilize o comando fprintf(). Em seguida, leia o mesmo arquivo
utilizando fscanf(). Apresente os dados na tela. */

typedef struct {
    int tempo;
    char profissao[20];
} Funcionario;

int main() {
    setlocale(LC_ALL, "portuguese");

    FILE *arq = fopen("emp.txt", "w+");
    Funcionario funcionario;
    char aux;

    for (int i=0; i<5; i++) {
        printf("Profissão: ");
        fflush(stdin);
        gets(funcionario.profissao);
        fprintf(arq, "%s ", funcionario.profissao);

        printf("Tempo de serviço: ");
        scanf("%d", &funcionario.tempo);
        fprintf(arq, "%d\n", funcionario.tempo);
    }

    fseek(arq, 0, SEEK_SET);

    printf("\n\n");

    while((aux = fgetc(arq)) != EOF ) {
		printf("%c", aux);
     }

    return 0;
}


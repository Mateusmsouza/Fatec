#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/* Faca um programa que armazene em um registro de dados (estrutura composta) os dados de um funcionario de uma empresa, compostos de:
Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, Codigo do Setor onde trabalha (0-99), Cargo que ocupa (string de ate 30 caracteres) e Salario.
Os dados devem ser digitados pelo usuario, armazenados na estrutura e exibidos na tela.  */

typedef struct {
    int dia, mes, ano;
} Data;

typedef struct {
    char nome[50], sexo, cpf[15], cargo[30];
    int idade, setor;
    float salario;
    Data data;
} Funcionario;

int main() {
    setlocale(LC_ALL, "portuguese");

    Funcionario funcionario;

    printf("Nome: ");
    fflush(stdin);
    fgets(funcionario.nome, 50, stdin);
    funcionario.nome[strlen(funcionario.nome) -1] = '\0';

    printf("Idade: ");
    scanf("%d", &funcionario.idade);
    while (funcionario.idade < 18 && funcionario.idade > 100) {
        printf("Informação inválida, tente novamente.");
        printf("Idade: ");
        scanf("%d", &funcionario.idade);
    }

    printf("Sexo: ");
    fflush(stdin);
    scanf("%c", &funcionario.sexo);
    while(funcionario.sexo != 'M' && funcionario.sexo != 'm' && funcionario.sexo != 'F' && funcionario.sexo != 'f') {
        printf("Informação inválida, tente novamente.\n");
        printf("\nSexo: ");
        fflush(stdin);
        scanf("%c", &funcionario.sexo);
    }

    printf("CPF: ");
    fflush(stdin);
    fgets(funcionario.cpf, 15, stdin);
    funcionario.cpf[strlen(funcionario.cpf) -1] = '\0';

    printf("Data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &funcionario.data.dia, &funcionario.data.mes, &funcionario.data.ano);

    printf("Codigo do setor: ");
    scanf("%d", &funcionario.setor);
    while (funcionario.setor < 0 || funcionario.setor > 99) {
        printf("Informação inválida, tente novamente.\n");
        printf("Codigo do setor: ");
        scanf("%d", &funcionario.setor);
    }

    printf("Cargo: ");
    fflush(stdin);
    fgets(funcionario.cargo, 30, stdin);
    funcionario.cargo[strlen(funcionario.cargo) -1] = '\0';

    printf("Salario: ");
    scanf("%f", &funcionario.salario);

    system("pause");
    system("cls");

    printf("Nome: %s\n", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Sexo: %c\n", funcionario.sexo);
    printf("CPF: %s\n", funcionario.cpf);
    printf("Data de nascimento: %d/%d/%d\n", funcionario.data.dia, funcionario.data.mes, funcionario.data.ano);
    printf("Codigo do setor: %d\n", funcionario.setor);
    printf("Cargo: %s\n", funcionario.cargo);
    printf("Salario: %.2f", funcionario.salario);

    return 0;
}

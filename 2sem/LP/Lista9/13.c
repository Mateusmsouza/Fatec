#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

/* Peca ao usuario para digitar seus dados pessoais (Nome, Endereco, Data de Nascimento, Cidade, CEP, email), veriﬁque se as informacoes de
Data de Nascimento, CEP e email fazem sentido, e mostre ao usuario as informacoes, se estao todas corretas, ou mostre que alguma informacao
estava errada. */

typedef struct {
    int dia, mes, ano;
} Data;

struct Dado {
    char nome[30], endereco[255], cidade[40], cep[10], email[50]; // 12236-680
    Data data;
};

int main(){
    setlocale(LC_ALL, "portuguese");

    struct Dado dado;
    bool aux = 0;

    printf("Nome: ");
    fflush(stdin);
    fgets(dado.nome, 30, stdin);
    dado.nome[strlen(dado.nome) -1] = '\0';

    printf("Endereço: ");
    fflush(stdin);
    fgets(dado.endereco, 255, stdin);
    dado.endereco[strlen(dado.endereco) -1] = '\0';

    printf("Data de nascimento: ");
    scanf("%d/%d/%d", &dado.data.dia, &dado.data.mes, &dado.data.ano);

    while (dado.data.ano > 2018 || dado.data.mes > 12 || dado.data.mes < 0 || dado.data.dia > 31 || dado.data.ano < 1918) {
        printf("Data inválida, tente novamente. \n");
        printf("Data de nascimento: ");
        scanf("%d/%d/%d", &dado.data.dia, &dado.data.mes, &dado.data.ano);
    }



    printf("Cidade: ");
    fflush(stdin);
    fgets(dado.cidade, 40, stdin);
    dado.cidade[strlen(dado.cidade) -1] = '\0';

    while (!aux) {
        aux = 1;

        printf("Cep (xxxxx-xxx): ");
        fflush(stdin);
        fgets(dado.cep, 10, stdin);

        for (int c=0; c<9; c++) {
            if (c == 5) c++;
            if (isalpha(dado.cep[c])) {
                    aux = 0;
            }
        }

    if (dado.cep[5] != '-' || strlen(dado.cep) != 9  || !aux) {
            printf("Cep inválido, tente novamente.\n");
            aux = 0;
    }

    }

    aux = 0;

    do {
        printf("E-mail: ");
        fflush(stdin);
        fgets(dado.email, 50, stdin);
        int tam_email= strlen(dado.email);
        dado.email[tam_email -1] = '\0';

        for (int c=0; c<tam_email; c++){
            if ('@' == dado.email[c]) aux = 1;
        }

    if (!aux) printf("E-mail inválido, tente novamente.\n");

    }  while (!aux);


    return 0;
}


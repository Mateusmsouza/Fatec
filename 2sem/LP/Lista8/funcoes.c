#include "funcoes.h"

void imprimir(Crianca *criancas, int indice) {
    printf("\n");
    printf("|Nome: %s\n", criancas[indice].nomeCrianca);
    printf("|Nome do pai: %s\n", criancas[indice].nomePai);
    printf("|Nome da mae: %s\n", criancas[indice].nomeMae);
    printf("|Data de nascimento: %d/%d/%d\n", criancas[indice].data.dia, criancas[indice].data.mes, criancas[indice].data.ano);
    printf("|Hora de nascimento: %d:%d:%d\n", criancas[indice].hora.hora, criancas[indice].hora.mnt, criancas[indice].hora.seg);
    printf("|Massa: %.2f\n", criancas[indice].massa);
    printf("|Altura: %.2f\n", criancas[indice].altura);
    printf("\n");
}

void cadastrar(Crianca *criancas, int *qtd) {
    *qtd +=1;

    printf("Nome da criança: ");
    fflush(stdin);
    fgets(criancas[*qtd].nomeCrianca, 50, stdin);
    criancas[*qtd].nomeCrianca[strlen(criancas[*qtd].nomeCrianca) -1] = '\0';

    printf("Nome do pai: ");
    fflush(stdin);
    fgets(criancas[*qtd].nomePai, 50, stdin);
    criancas[*qtd].nomePai[strlen(criancas[*qtd].nomePai) -1] = '\0';

    printf("Nome da mãe: ");
    fflush(stdin);
    fgets(criancas[*qtd].nomeMae, 50, stdin);
    criancas[*qtd].nomeMae[strlen(criancas[*qtd].nomeMae) -1] = '\0';

    printf("Data de nascimento (DD/MM/AAAA): ");
    fflush(stdin);
    scanf("%d/%d/%d", &criancas[*qtd].data.dia, &criancas[*qtd].data.mes, &criancas[*qtd].data.ano);

    printf("Hora de nascimento: (HH:MM:SS)");
    fflush(stdin);
    scanf("%d:%d:%d", &criancas[*qtd].hora.hora, &criancas[*qtd].hora.mnt, &criancas[*qtd].hora.seg);

    printf("Massa da criança: ");
    scanf("%f", &criancas[*qtd].massa);

    printf("Altura: ");
    scanf("%f", &criancas[*qtd].altura);
}

void listarPorData(Crianca *criancas, int qtd) {
    int ano;
    printf("Qual ano? ");
    scanf("%d", &ano);
    for (int i=1; i<qtd+1; i++)
        if (criancas[i].data.ano == ano)
            imprimir(criancas, i);
}

void listarPorMassaAbaixo(Crianca *criancas, int qtd) {
    int massa;
    printf("Qual massa? ");
    scanf("%d", &massa);
    for (int i=1; i<qtd+1; i++) {
        if (criancas[i].massa < massa)
            imprimir(criancas, i);
    }
}

void listarPorMassaAcima(Crianca *criancas, int qtd) {
    int massa;
    printf("Qual massa? ");
    scanf("%d", &massa);
    for (int i=1; i<qtd+1; i++) {
        if (criancas[i].massa > massa)
            imprimir(criancas, i);
    }
}
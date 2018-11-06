#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* Faca um programa que gerencie o estoque de um mercado e:
    - Crie e leia um vetor de 5 produtos, com os dados: codigo(inteiro), nome(maximo 15 letras), preco e quantidade.
    - Leia um pedido, composto por um código de produto e a quantidade. Localize este código no vetor e, se houver
    quantidade suficiente para atender ao pedido integralmente, atualize o estoque e informe o usuário. Repita este
    processo até ler um código igual a zero */

#define TAM 1


struct produto {
    int codigo, quantidade;
    char nome[15];
    float preco;
};

struct Pedido {
    int codigo, quantidade;
};

void Busca(struct produto *vet, struct Pedido pedido, int *posicao) {
    for (int i=0; i<TAM; i++)
        if (vet[i].codigo == pedido.codigo) {
            printf("Código encontrado! \n");
            *posicao = i;
            return;
        }

    printf("Código não encontrado.\n");
}

int main() {
    setlocale(LC_ALL, "portuguese");

    struct produto produtos[TAM];
    struct Pedido pedido;
    int posicao = -1;

    for (int i=0; i<TAM; i++){
        printf("%d produto\n", i+1);

        printf("Nome: ");
        fflush(stdin);
        fgets(produtos[i].nome, 15, stdin);

        printf("codigo: ");
        scanf("%d", &produtos[i].codigo);

        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);

        printf("Preco: ");
        scanf("%d", &produtos[i].preco);

        printf("\n\n");
    }

    system("cls");

    do {
        printf("Entre com o código do produto: ");
        scanf("%d", &pedido.codigo);

        printf("Quantidade: ");
        scanf("%d", &pedido.quantidade);

        Busca(produtos, pedido, &posicao);

        if (posicao != -1) {
            if (pedido.quantidade < produtos[posicao].quantidade) {
                printf("Existe quantidade suficiente no estoque.\n\n");
                produtos[posicao].quantidade -= pedido.quantidade;
                printf("Estoque atualizado! \n");
                printf("Agora você possui %d %2 no estoque.\n\n", produtos[posicao].quantidade, produtos[posicao].nome);
            }

            else
                printf("Não existe quantidade suficiente no estoque.\n\n");
        }

        posicao = -1;

    } while (pedido.codigo != 0) ;
}

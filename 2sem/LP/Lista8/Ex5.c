#include "funcoes.h"

/* Uma maternidade deseja cadastrar os nascimentos ocorridos. Usando a linguagem C e struct, implemente:
a) uma função de cadastro capaz de armazenar nome da criança, nome do pai, nome da mãe, dia, mês, ano e hora de nascimento, massa e altura
do recém-nascido.
b) uma função que lista os nomes de todos os bebês nascidos em uma determinada data, passada como parâmetro.
c) uma função que lista os nomes de todos os bebês que nasceram com massa abaixo de determinado valor passado como parâmetro;
d)uma função que lista os nomes de todos os bebês que nasceram com massa acima dede determinado valor passado como parâmetro;
e) main(): oferece menu para o usuário escolher a operação desejada.
 */


int main() {
    setlocale(LC_ALL, "portuguese");
    Crianca criancas[100];
    int qtd = 0;
    char opc = 'x';

    while (opc != '0') {
        printf("| 1 |Cadastrar criança\n");
        printf("| 2 | Listar bebês nascidos em uma determinada data\n");
        printf("| 3 | Listar bebês nascidos com massa abaixo de um determinado valor\n");
        printf("| 4 | Listar bebês nascidos com massa acima de um determinado valor\n");
        printf("| 0 | Sair\n");
        printf("Opção: ");
        opc = getche();
        printf("\n\n");

        switch (opc) {
            case '0':
                break;

            case '1':
                cadastrar(criancas, &qtd);
                break;

            case '2':
                listarPorData(criancas, qtd);
                break;

            case '3':
                listarPorMassaAbaixo(criancas, qtd);
                break;

            case '4':
                listarPorMassaAcima(criancas, qtd);
                break;

            default :
                printf("Opção inválida.\n");
        }

        printf("\n");
        system("pause");
        system("cls");
    }

    return 0;
}
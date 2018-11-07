#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/*  Faca um programa que controla o consumo de energia dos eletrodomesticos de uma casa e:
    Crie e leia 5 eletrodomesticos que contem nome (maximo 15 letras), potencia (real, em kW) e tempo ativo por dia (real, em horas).
    Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo relativo de cada eletrodomestico (consumo/consumototal)
    nesse perıodo de tempo. Apresente este ultimo dado em porcentagem.  */


typedef struct eletrodomestico {
    char nome[15];
    float potencia, consumoDia, porcentagemConsumo;
    int tempo;
} ELETRO;


int main() {
    setlocale(LC_ALL, "portuguese");

    ELETRO eletrodomesticos[5];
    int t;
    float consumoDia = 0, consumoTotal = 0;

    for (int i=0; i<5; i++) {
        printf("Nome: ");
        fflush(stdin);
        gets(eletrodomesticos[i].nome);

        printf("Potência: ");
        scanf("%f", &eletrodomesticos[i].potencia);

        printf("Tempo: ");
        scanf("%d", &eletrodomesticos[i].tempo);

        printf("\n");

        eletrodomesticos[i].consumoDia += (eletrodomesticos[i].potencia * eletrodomesticos[i].tempo);
        consumoTotal += eletrodomesticos[i].consumoDia;
    }

    printf("Entre com a quantidade de dias para mostrar o consumo de energia neste intervalo de tempo:\n");
    scanf("%d", &t);

    printf("Porcentagens de consumo:\n");
    for (int j = 0; j < 5; j++) {
      eletrodomesticos[j].porcentagemConsumo = (eletrodomesticos[j].consumoDia * 100)/consumoTotal;
      printf("%s: %.2f %%\n", eletrodomesticos[j].nome, eletrodomesticos[j].porcentagemConsumo);
    }

    return 0;
}

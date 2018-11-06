#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/* Faca um programa que faca operacoes simples de numeros complexos:
    Crie e leia dois numeros complexos z e w, compostos por parte real e parte imaginaria.
    Apresente a soma, subtracao e produto entre z e w, nessa ordem, bem como o modulo de ambos.  */

typedef struct {
    int z, w;
} Numero;

int main() {
    setlocale(LC_ALL, "portuguese");

    Numero num;

    printf("Entre com o valor de Z: ");
    scanf("%d", &num.z);

    printf("Entre com o valor de W: ");
    scanf("%d", &num.w);

    printf("\n\nSoma: %d\n", num.z + num.w);
    printf("Subtração: %d\n", num.z - num.w);
    printf("Produto: %d\n", num.z * num.w);
    printf("Modulo de Z : |%d|\n", abs(num.z) );
    printf("Modulo de W : |%d|\n", abs(num.w) );
    return 0;
}

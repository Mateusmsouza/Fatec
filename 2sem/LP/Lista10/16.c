#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que recebe um vetor de 10 numeros, converta cada um desses numeros para binario e grave a sequencia de 0s e 1s em um
arquivo texto. Cada numero deve ser gravado em uma linha. */

int main() {
    FILE *arq = fopen("arquivo.txt", "w");
    int vet[10];

    for (int i=0; i<10; i++)
        scanf("%d", &vet[i]);

    for (int i = 0; i<10; i++) {
        while (vet[i] > 0) {

            if (vet[i] % 2 == 0)
                fputc('0', arq);
            else
                fputc('1', arq);
            vet[i] /= 2;

        }

        fputc('\n', arq);
    }

    return 0;
}

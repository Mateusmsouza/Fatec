#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/*  Considerando a estrutura
struct Vetor {
    float x;
    float y;
    float z;
};
para representar um vetor no R3, implemente um programa que calcule a soma de dois vetores.  */

typedef struct {
    float x;
    float y;
    float z;
} Vetor;

int main() {
    setlocale(LC_ALL, "portuguese");

    Vetor vetores[3];

    printf("01 - Valor de x: ");
    scanf("%f", &vetores[0].x);
    printf("01 - Valor de y: ");
    scanf("%f", &vetores[0].y);
    printf("01 - Valor de x: ");
    scanf("%f", &vetores[0].z);

    printf("\n02 - Valor de x: ");
    scanf("%f", &vetores[1].x);
    printf("02 - Valor de y: ");
    scanf("%f", &vetores[1].y);
    printf("02 - Valor de x: ");
    scanf("%f", &vetores[1].z);

    vetores[2].x = vetores[0].x + vetores[1].x;
    vetores[2].y = vetores[0].y + vetores[1].y;
    vetores[2].z = vetores[0].z + vetores[1].z;

    printf("\n\nValor de x: %f\nValor de y: %f\nValor de z: %f\n", vetores[2].x, vetores[2].y, vetores[2].z);


    return 0;
}

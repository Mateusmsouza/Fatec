#include <stdio.h>

int main(){
    int codigo;
    float quantidade;

    scanf("%d", &codigo);
    scanf("%f", &quantidade);
    switch(codigo){
    case 100:
        printf("Valor a ser pago:%f\n", ((1.20 * quantidade)));
        break;
    case 101:
        printf("Valor a ser pago:%f\n", ((1.30 * quantidade)));
        break;
    case 102:
        printf("Valor a ser pago:%f\n", ((1.50 * quantidade)));
        break;
    case 103:
        printf("Valor a ser pago:%f\n", ((1.20 * quantidade)));
        break;
    case 104:
        printf("Valor a ser pago:%f\n", ((1.40 * quantidade)));
       break;
    case 105:
        printf("Valor a ser pago:%f\n", ((2.20 * quantidade)));
    case 106:
        printf("Valor a ser pago:%f\n", ((1.00 * quantidade)));
        break;
    default:
        printf("No.\n");
        break;
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float n1,n2,raiz,quad;
    int codigo,N1;
    printf("Informe o codigo de 1 a 5 para escolher o programa a ser rodado:\n");
    scanf("%d",&codigo);
    switch (codigo){
    case 1:
        printf("PROGRAMA 1\n");
         printf("Informe o primeiro numero: \n");
        scanf("%f", &n1);
        printf("Informe o segundo numero: \n");
        scanf("%f", &n2);
        if (n1>n2)
            printf("O maior numero e: %.2f", n1);
        else
            printf("O maior numero e: %.2f", n2);
    break;

    case 2:
        printf("PROGRAMA 2\n");
        printf("Informe o numero: \n");
        scanf("%f", &n1);
        raiz = sqrt(n1);
        if (n1>=0)
            printf("raiz: %.2f",raiz);
        else
            printf("Numero invalido.");
    break;

    case 3:
        printf("PROGRAMA 3\n");
         printf("Informe o numero: \n");
        scanf("%f", &n1);
        raiz = sqrt(n1);
        quad = pow(n1,2);
        if (n1>=0)
            printf("A raiz quadrada: %.2f",raiz);
        else
            printf("O numero ao quadrado: %.2f", quad);
    break;

    case 4:
        printf("PROGRAMA 4\n");
         printf("Informe o numero: \n");
         scanf("%f", &n1);
         quad = pow(n1,2);
         raiz = sqrt(n1);
         if (n1>=0)
            printf("Numero ao quadrado: %.2f \n Raiz quadrada do numero: %.2f",quad, raiz);
         else
            printf("Numero invalido.");
    break;

    case 5:
        printf("PROGRAMA 5\n");
        printf("Digite o numero:\n");
        scanf("%d", &N1);
        if (N1%2==0)
            printf("O numero informado e par.");
        else
            printf("O numero informado e impar.");
    break;
    default:
        printf("CODIGO INVALIDO.");
    }
    getche();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *p, x=5; // declara��o de ponteiro

    p *= 2*p;//N�o atribui nenhum valor ao ponteiro 'p'

    printf("%d", x);//O resultado � a variavel x que est� iniciando com valor 5.
}

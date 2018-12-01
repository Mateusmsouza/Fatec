#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *p, x=5; // declaração de ponteiro

    p *= 2*p;//Não atribui nenhum valor ao ponteiro 'p'

    printf("%d", x);//O resultado é a variavel x que está iniciando com valor 5.
}

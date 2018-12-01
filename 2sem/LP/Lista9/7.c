Exercicio 7

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    float raio,argumento;
}Polar;

typedef struct
{
    float x,y;
}Cartesiana;

Polar pol;
Cartesiana car;

int main()
{
    printf("Entre com o valor do raio: ");
    scanf("%f",&pol.raio);
    printf("Entre com o valor do raio: ");
    scanf("%f",&pol.argumento);

    car.x = pol.raio*cos(pol.argumento);
    car.y = pol.raio*sin(pol.argumento);

    printf("As cordenadas polares em cartesianas ficam (x,y): %f, %f",car.x,car.y);
    return 0;
}
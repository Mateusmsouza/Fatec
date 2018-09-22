#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salAt,bonus,salFn, fim;
    int tempS;
    printf("Informe o salario atual:\n");
    scanf("%f",&salAt);
    printf("Informe o tempo de serviço:\n");
    scanf("%f",&tempS);

    if (salAt<=500){
        salFn = (0.25*salAt)+salAt;
    }
    else if (salAt<=1000){
        salFn = (0.20*salAt)+salAt;
    }
    else if (salAt<=1500){
        salFn = (0.15*salAt)+salAt;
    }
    else if (salAt<=2000){
        salFn = (0.10*salAt)+salAt;
    }
    else if (salAt>2000){
        salFn = salAt;
        printf("SEM REAJUSTE");
    }

    if (tempS<1){
        bonus = 0;
        printf("SEM BONUS.");
    }
    else if((tempS>=1)&&(tempS<=3)){
        bonus=100;
    }
    else if ((tempS>=4)&&(tempS<=6)){
        bonus=200;
    }
    else if ((tempS>=7)&&(tempS=10)){
        bonus=300;
    }
    else if (tempS>10){
        bonus = 500;
    }
    fim = salFn + bonus;
    printf("Salario final reajustado = %.2f", fim);
    return 0;
}

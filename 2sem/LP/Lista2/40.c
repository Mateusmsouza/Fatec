#include <stdio.h>
#include <stdlib.h>

int main()
{
    float CF, CC, PercD, Imp;
    printf("Informe o custo de fabrica:\n");
    scanf("%f",&CF);

    if (CF<12000){
        PercD = 0.05*CF;
        Imp = 0;
    }
    else if ((CF>=12000)&&(CF<=25000)){
        PercD = 0.10*CF;
        Imp = 0.15*CF;
    }
    else if (CF>25000){
        PercD = 0.15*CF;
        Imp = 0.20*CF;
    }
    CC = CF+Imp+CF;
    printf("Custo ao consumidor = %.2f", CC);
    return 0;
}

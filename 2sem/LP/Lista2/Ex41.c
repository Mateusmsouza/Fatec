#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura, IMC;
    printf("Informe o seu peso:\n");
    scanf("%f", &peso);
    printf("Informe a sua altura:\n");
    scanf("%f", &altura);
    IMC = peso/(altura*altura);
    if (IMC<18.5){
        printf("Abaixo do peso");
    }
    else if ((IMC>=18.6)&&(IMC<=24.9))
        printf("Saudável");
    else if ((IMC>=25)&&(IMC<=29.9))
        printf("PESO EM EXCESSO");
    else if ((IMC>=30)&&(IMC<=34.9))
        printf("OBESIDADE GRAU I");
    else if ((IMC>=35)&&(IMC<=39.9))
        printf("OBESIDADE GRAU II(SEVEREA)");
    else if (IMC>40)
        printf("OBESIDADE GRAU III(MORBIDA)");
  return 0;
}

/**
*Programa que cont�m as seguintes funcionalidades:
*a) calcular per�metro de um quadrado;
*b) calcular �rea de um quadrado;
*c) calcular diagonal de um quadrado.
*O usu�rio poder� escolher uma funcionalidade,
*dentre as existentes no programa, e executar
*o programa at� optar por sair.
**/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int perimetro_quadrado(int lado);//s� declara��o

void area_quadrado(int lado)
{
    printf("\narea=%d",lado*lado);
}

float diagonal_quadrado()
{
  int lado;
  printf("\nDigite o lado");
  scanf("%d", &lado);
  return(lado*sqrt(2));
}
int main()
{
    char op;
    int la;
    do
    {
     printf("\no que deseja:\npERIMETRO\naREA\ndIAGONAL\nsAIR\n");
     op=getche();
     op=tolower(op);//mandando para min�sculo
     switch(op)
     {
         case 'p':printf("\nlado?");
                  scanf("%d",&la);
                  printf("\nperi=%d",perimetro_quadrado(la));
                  break;
         case 'a':printf("\nlado?");
                  scanf("%d",&la);
                  area_quadrado(la);
                  break;

         case 'd':printf("\ndiagonal=%.2f",diagonal_quadrado());
                  break;
         case 's': printf("\n tchau");
                  break;
         default:printf("\n op errada");

     }
    }while(op!='s');

    return 0;
}

int perimetro_quadrado(int lado)
{
    return(4*lado);
}

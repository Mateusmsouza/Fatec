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

int perimetro_quadrado(int lado);//s� declara��o

void perim_menor_10(int lado){

  if ((4*lado)>10){
    printf("O perimetro é maior que 10!\n");
  }else if((4 * lado)==10){
    printf("O perimetro é igual a 10\n");
  }else{
    printf("O perimetro é menor que 10\n");
  }
}

void area_quadrado(int lado)
{

  
    printf("\narea=%d",lado*lado);
}

int area_maior_10(int lado){
  if ((lado * lado)>10){
    return 1;
  }else{
    return 0;
  }


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
    int op;
    int la;
    do
    {
     printf("\no que deseja:\n1-PERIMETRO\n2-AREA\n3-DIAGONAL\n4-SAIR\n");
     scanf("%d", &op);//mandando para min�sculo
     switch(op)
     {
         case 1:printf("\nlado?");
                  scanf("%d",&la);
                  printf("\nperi=%d",perimetro_quadrado(la));
                  perim_menor_10(la);
                  break;
         case 2:printf("\nlado?");
                  scanf("%d",&la);
                  area_quadrado(la);
                  printf("\nRetorno:%d\n", area_maior_10(la) );
                  break;

         case 3:printf("\ndiagonal=%.2f",diagonal_quadrado());
                  break;
         case 4: printf("\n tchau");
                  break;
         default:printf("\n op errada");

     }
    }while(op!=4);

    return 0;
}

int perimetro_quadrado(int lado)
{
    return(4*lado);
}

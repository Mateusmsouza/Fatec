//Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela
//a seguir, verifique e mostra qual a classificação dessa pessoa.4
/*
---------------------------------------------------------
Altura | peso
--------------------------------------------------------
	   |Até 60 | Entre 60 e 90 (inclusive ) | Acima de 90
< 1,20 |   A   |             D              |     G
---------------------------------------------------------
>= 1,20|       |                            |     
   a   |   B   |             E              |     H
<= 1,70|       |                            |       
---------------------------------------------------------
> 1,70 |   C   |             F              |     I
---------------------------------------------------------
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int Peso;
	float Altura;

	printf("Ente com sua altura e peso.\n");
	scanf("%f", &Altura);
	scanf("%d", &Peso);

	if (Altura<1.20){
		if (Peso<=60){
			printf("classificação: A\n");
		}else if(Peso > 60 && Pesdo <= 90){
			printf("classificação: B\n");
		}
	}
	return 0;
}

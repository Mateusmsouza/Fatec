/*Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário:

(a) Geométrica: 
(b) Ponderada:
(c) Harmônica:
(d) Aritmética:
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
	int op;
	float A, B, C;

	printf("O que gostaria de realizar com as notas?:\n1)Geométrica\n2)Ponderada\n3)Harmônica\n4)Aritmética\n");

	scanf("%d", &op);
	printf("Insira as notas\n");
	scanf("%f", &A);
	scanf("%f", &B);
	scanf("%f", &C);

	switch(op){
		case 1:
			printf("Geométrica: %f\n", (cbrt((A*B*C))));
			break;
		case 2:
			printf("Ponderada: %f\n", (((A)+(B*2)+(C*3))/6));
			break;

		case 3:
			printf("Harmônica:%f\n", (  1 / ((1/A) + (1/B) + (1/C)) ) );
			break;
		case 4:
			printf("Aritmética:%f\n", (A+B+C)/3);
			break;

		default:printf("Opção inválida.\n");
				break;
	}


	return 0;
}
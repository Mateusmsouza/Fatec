// Exercício: Crie um algoritmo e um programa em C que leia a medida dos três lados de um triângulo e calcule o perímetro e área, imprimindo o resultado na tela. 

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	float A, B, C, resultado;

	printf("Entre com o valor:\n");
	scanf("%f",&A);
	printf("Entre com o valor:\n");
	scanf("%f",&B);
	printf("Entre com o valor:\n");
	scanf("%f",&C);

	printf("Perimetro:\n%.2f\n", (A+B+C));
	printf("Area:\n%.2f\n", sqrt(((A+B+C)/2)*(((A+B+C)/2)-A)*(((A+B+C)/2)-B)*(((A+B+C)/2)-C)));

	return 0;

}
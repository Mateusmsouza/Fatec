 /*Exercício: Crie um algoritmo e um programa em C que leia os coeficientes 
 a, b e c de uma função de 2º grau e calcule x para y=0, imprimindo o resultado na tela.*/


#include <stdio.h>
#include <locale.h>

int main(){
	float A, B, C;

	printf("Entre com os coeficientes:\n");
	scanf("%f", &A);
	printf("Entre com os coeficientes:\n");
	scanf("%f", &B);
	printf("Entre com os coeficientes:\n");
	scanf("%f", &C);

	printf("%.2f\n", ((B*B)+(-4*A*C)));

	// b^2 (- 4 . a . c) - A = 1 B = 2 C = 3
	// 4 (-12)
	// - 8

	return 0;

}
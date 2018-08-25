//Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
//O número digitado ao quadrado
//A raiz quadrada do número digitado
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	float num;

	scanf("%f", &num);
	if (num > 0){
		printf("%.2f\n", (num*num) );
		printf("%.2f\n", sqrt(num));
		return 0;
	}

	return 0;
}
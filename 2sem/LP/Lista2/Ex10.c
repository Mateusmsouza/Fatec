//Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
//peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
//Homens: (72.7 ∗ h) − 58
//Mulheres: (62, 1 ∗ h) − 44, 7
#include <stdio.h>

int main(){
	float h;
	char s;

	scanf("%f", &h);
	scanf("%s", &s);
	switch(s){
		case 'm':printf("Peso Ideal:%f\n", (72.7 * h) - 58);
				break;
		case 'f':printf("Peso Ideal:%f\n", (62.1 * h) - 44.7);
				break;
		default:printf("Sexo invalido!\n");
	}

	return 0;
}
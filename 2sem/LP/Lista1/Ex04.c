/*
Exercício: Crie um algoritmo e um programa em C que leia a medida dos três lados de um triângulo e determine se o perímetro é maior que 10, imprimindo o resultado na tela. 
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>


int main(){
	float A,B,C;
	char is_or_isnt[4];
	
	printf("Insira o valor:\n");
	scanf("%f", &A);
	printf("Insira o valor:\n");
	scanf("%f", &B);
	printf("Insira o valor:\n");
	scanf("%f", &C);

	printf("%s\n", ((A+B+C)>10 ? strcpy(is_or_isnt,"SIM"): strcpy(is_or_isnt,"NAO")));

	return 0;
}
//Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
//(b + B) * h / 2 = A

#include <stdio.h>

int main(){
	float b, B, h;

	scanf("%f", &b);
	scanf("%f", &B);
	scanf("%f", &h);

	printf("Área do trapézio:\n%.2f\n", (((b+B)*h)/2) );


	return 0;
}
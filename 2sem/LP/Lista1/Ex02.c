#include <stdio.h>
#include <locale.h>

// Exercício: Crie um algoritmo e um programa em C que leia a largura e o comprimento de um retângulo e calcule o perímetro e área, imprimindo o resultado na tela. 

int main(){
	float base, altura;
	printf("Insira a base do retangulo:\n");
	scanf("%f", &base);
	printf("Insira a altura do retangulo:\n");
	scanf("%f", &altura);

	printf("\nArea: %.2f\nPerimetro: %.2f\n", (base * altura), (base + altura)*2);


	return 0;
}
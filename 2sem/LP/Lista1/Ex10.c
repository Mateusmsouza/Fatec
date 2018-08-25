// Exercício: Crie o fluxograma e o programa em C que leia o 
// tamanho do raio de um círculo do e calcule o perímetro e área, 
// imprimindo o resultado na tela. 

#include <stdio.h>
#include <locale.h>

int main(){
	float raio;

	scanf("%f", &raio);
	printf("\nArea:%f\n", ((raio * raio) * 3.14));
	printf("\nPerimetro:%f\n", ((2*raio)*3.14));


	return 0;
}
/*Exercício: Crie um algoritmo e um programa em C que leia os coeficientes a e b 
de uma função de 1º grau e calcule x para y=0 ( y=ax+b), imprimindo o resultado 
na tela*/

#include <stdio.h>
#include <locale.h>

int main(){
	int A,B;
	printf("Entre com o coeficiente de A:\n");
	scanf("%d", &A);
	printf("Entre com o coeficiente de B:\n");
	scanf("%d", &B);

	if (A==0){
		printf("Valor de A não pode ser 0.\n");
		return 0;
	}

	printf("Valor de x quando y=0 é:%d\n", (-B/A));

	return 0;
}
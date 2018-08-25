//Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
//soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor
//8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa terminará com a
//mensagem “Número inválido”.

#include <stdio.h>

int main(){
	int numero, acumulador=0;

	scanf("%d", &numero);

	if (numero>0){

		while (numero >0 ){
			acumulador += numero%10;
			numero /= 10;
		}
		printf("Sominha: %d\n", acumulador);
		return 0;
	}
	
	printf("NÚMERO INVÁLIDO.\n");

	return 0;
} 
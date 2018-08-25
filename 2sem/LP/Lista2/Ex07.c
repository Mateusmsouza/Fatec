//Faça um programa que receba dois números e mostre o maior. 
//Se por acaso, os dois
//números forem iguais, imprima a mensagem Números iguais.
#include <stdio.h>

int main(){

	int A, B;

	scanf("%d", &A);
	scanf("%d", &B);

	if (A > B){
		printf("Menor: %d\n \ndiferença:%d", A,(A-B));
		return 0;
	}

	else if (B > A){
		printf("Maior: %d\nDiferença:%d\n", B, (B-A));
		return 0;
	}

	printf("\nIguais.\n");
	return 0;

}
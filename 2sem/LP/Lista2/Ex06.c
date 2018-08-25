//Escreva um programa que, dados dois números
//inteiros, mostre na tela o maior deles,
//assim como a diferença existente entre ambos.

#include <stdio.h>

int main(){

	int A, B;

	scanf("%d", &A);
	scanf("%d", &B);

	if (A > B){
		printf("%d\n \ndiferença:%d", A,(A-B));
		return 0;
	}

	else if (B > A){
		printf("Maior: %d\nDiferença:%d\n", B, (B-A));
		return 0;
	}

	printf("\nIguais.\n");
	return 0;

}
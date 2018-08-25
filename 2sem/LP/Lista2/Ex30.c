 //Faça um programa que receba três números e mostre-os em ordem crescente.
#include <stdio.h>

int main(){
	int A,B,C;

	printf("Entre com os valores:\n");
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	if (A > B && A > C){
		// A Maior número
		if (B > C){
			printf("%d , %d , %d\n", A, B, C);
		}else{
			printf("%d, %d, %d\n",A, C, B );
		}
	}else if( B > A && B > C){
		// B maior
		if (A > C){
			printf("%d, %d, %d\n", B, A, C);
		}else{
			printf("%d, %d, %d\n", B, C, A);
		}
	}else{
		// C maior
		if (A>B){
			printf("%d, %d, %d\n", C, A, B);
		}else{
			printf("%d, %d, %d\n", C, B, A);
		}
	}

	return 0;
}
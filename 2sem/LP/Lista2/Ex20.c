//Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo
//e, se forem, se é um triângulo escaleno, equilátero ou isóscele, considerando os seguin-
//tes conceitos:
//• O comprimento de cada lado de um triângulo é menor do que a soma dos outros
//dois lados.
//• Chama-se equilátero o triângulo que tem três lados iguais.
//• Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
//• Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
#include <stdio.h>

int main(){
	int A,B,C;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	if ((A  < (B+C)) && (B < (A+C)) && (C < (B+A))){

		if ((A == B) && (B == C)){
			printf("equilátero\n");
		}else if(((A==B) || (A==C)) || (C == B))
			printf("isósceles\n");
		else if((A != B) && (A != C) && (C != B)){
			printf("escaleno\n");

		}
		return 0;
	}

	printf("Nao forma triangulo.\n");
	return 0;
}
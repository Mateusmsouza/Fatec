//Calcule as raı́zes da equação de 2 o grau.
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	int A, B, C, delta;


	printf("Entre com A, B e C da equação de 2o grau.\n");
	scanf("%d", A);
	scanf("%d", B);
	scanf("%d", C);

	if (A == 0){
		printf("Não é equação de 2o grau\n");
		return 0;
	}

	delta = (B*B) + (-B * (A*C));

	if (delta < 0){
		printf("Não existe raiz\n");
	}

	else if(delta == 0){
		printf("Raiz unica.\n");
	}

	else{
		printf("Raiz Posivita:%d\n\n", ((-B + sqrt(delta))/(2*A));
		printf("Raiz Negativa:%d\n\n", ((-B - sqrt(delta))/(2*A));
	}
	
	return 0;
}
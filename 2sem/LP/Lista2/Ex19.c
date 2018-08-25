//Faça um programa para verificar se um determinado número inteiro e divisı́vel por 3 ou
//5, mas não simultaneamente pelos dois.
#include <stdio.h>
#include <locale.h>

int main(){
	int num;

	printf("Entre com o número\n");
	scanf("%d", &num);

	if ((num % 3) == 0){
		if ((num % 5) == 0){
				printf("divisivel por 3 e 5\n");
				return 0;
		}else{
			printf("Passou! divisivel apenas por 3\n");
			return 0;
		}
	}else if((num % 5)==0){
		printf("Passou! divisivel apenas por 5!\n");
		return 0;
	}

	printf("Não é divisivel por 3 nem 5.\n");

	return 0;
}
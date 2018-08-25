//Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se
//for divisı́vel por 400 ou se for divisı́vel por 4 e não for divisı́vel por 100. Por exemplo:
//1988, 1992, 1996

#include <stdio.h>
#include <locale.h>

int main(){

	int ano;

	printf("Insira o ano que deseja verificar se é bissexto\n");
	scanf("%d", &ano);

	if (((ano % 400 == 0) || (ano % 4 == 0)) && (ano % 100 != 0)){
		printf("O ano %d é bissexto.\n", ano);
	}else{
		printf("O ano %d não é bissexto.\n", ano);
	}

	return 0;
}
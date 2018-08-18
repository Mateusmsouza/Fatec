//Faça um programa que mostre ao usuário um menu com 4 opções de operações ma-
//temáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu pro-
//grama então pede dois valores numéricos e realiza a operação, mostrando o resultado e
//saindo.
#include <stdio.h>
#include <locale.h>


int main(){
	int n1, n2;
	char opcao;

	printf("Qual operação fazer?\n");
	scanf("%s", &opcao);

	switch(opcao){
		case '-':
			scanf("%d", &n1);
			scanf("%d", &n2);
			printf("%d\n", (n1-n2));
			break;

		case '+':;
			scanf("%d", &n1);
			scanf("%d", &n2);
			printf("%d\n", (n1+n2));
			break;
		case '*':;
			scanf("%d", &n1);
			scanf("%d", &n2);
			printf("%d\n", (n1*n2));
			break;

		case '/':;
			scanf("%d", &n1);
			scanf("%d", &n2);
			printf("%d\n", (n1/n2));
			break;		

		default :printf("NOT!\n");
				break;
	}

	return 0;
}
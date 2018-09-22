#include <stdio.h>
#include <locale.h>

#include "func.h"

int main(){
	int decisao;

	printf("Insira um número ai vá.\n");
	scanf("%d", &decisao);

	switch(decisao){
		case 1:exercicio1();
				break;
		case 2:exercicio2();
				break;
		case 3:exercicio3();
				break;
		case 4:exercicio4();
				break;
		case 5:exercicio5();
				break;
		case 6:exercicio6();
				break;
		case 7:exercicio7();
				break;
		case 8:exercicio8();
				break;
		case 9:exercicio9();
				break;
		case 10:exercicio10();
				break;
		case 11:exercicio11();
				break;
		case 22:exercicio22();
				break;
		case 23:exercicio23();
				break;
		case 24:exercicio24();
				break;
		case 25:exercicio25();
				break;
		case 26:exercicio26();
				break;
		case 27:exercicio27();
				break;
		case 28:exercicio28();
				break;
		case 29:exercicio28();
				break;
		case 30:exercicio30();
				break;
		default:printf("Errou fi\n");

	}

	return 0;

}
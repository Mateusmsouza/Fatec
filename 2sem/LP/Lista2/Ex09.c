//Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a
//prestação for maior que 20% do salário imprima: Empréstimo n~
//ao concedido, caso
//contrário imprima: Empréstimo concedido.

#include <stdio.h>

int main(){

	float salario, prestacao;

	scanf("%f", &salario);
	scanf("%f", &prestacao);
	
	if (prestacao > (salario * 0.2)){
		printf("Empréstimo não concedido!\n");
		return 0;
	}

	printf("Empréstimo concedido!\n");
	return 0;
}

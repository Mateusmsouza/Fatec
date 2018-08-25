/*Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:
Categoria  | Idade
Infantil A | 5 A 7
Infantil B | 8 a 10
Juvenil A  | 11 a 13
Juvenil B  | 14 a 17
Sênior     | maiores de 18 anos */

#include <stdio.h>
#include <locale.h>

int main(){
	int idade;

	scanf("%d", &idade);

	if (idade >= 5 && idade <= 7){
		printf("Infantil A\n");
	}else if(idade>= 8 && idade <=10){
		printf("Infantil B\n");
	}else if(idade >= 11 && idade <= 13){
		printf("Juvenil A\n");
	}else if (idade >= 14 && idade <= 17){
		printf("Juvenil B\n");
	}else if(idade >= 18){
		printf("Sênior\n");
	}

	return 0;
}
//Usando switch, escreva um programa que leia um 
//inteiro entre 1 e 7 
//imprima o dia
//da semana correspondente a este numero. 
//Isto é, domingo se 1,
//segunda-feira se 2, e
//assim por diante.
#include <stdio.h>
#include <locale.h>

int main(){
	int opcao;

	scanf("%d", &opcao);

	switch(opcao){

		case 1:printf("Segunda\n");
				break;
		case 2:printf("Terca\n");
				break;
		case 3:printf("Quarta\n");
				break;
		case 4:printf("Quinta\n");
				break;
		case 5:printf("Sexta\n");
				break;
		case 6:printf("Sábado\n");
				break;
		case 7:printf("Domingo\n");
				break;
		default:printf("Invalido\n");
				break;
	}

	return 0;
}

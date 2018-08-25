//Faça um programa que receba um número 
//inteiro e verifique se este número é par ou
//ı́mpar.


#include <stdio.h>
#include <math.h>

int main(){
	int num;

	scanf("%d", &num);

	if (num % 2 == 0){
		printf("É par!\n");
		return 0;
	}

	printf("É impar!\n");
	return 0;
}
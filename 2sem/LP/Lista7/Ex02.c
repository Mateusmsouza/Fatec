/*
Crie um programa que calcula o comprimento de uma string (nao use a func¸ ˜ ao strlen)
*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	char statement[255];
	int count = 0;

	printf("Type a phrase\n");
	fgets(statement, 100, stdin);

	while (statement[count] != '\0'){
		count++;
	}
	printf("Length: %d\n", count-1 );
	return 0;
}



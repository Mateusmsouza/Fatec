/*
fac¸a um programa que leia um nome e imprima as 4 primeiras letras do nome.
*/
#include <stdio.h>
#include <ctype.h>

int main(){
	char name[255];

	fgets(name, 100,stdin);
	for (int i = 0; i < 4; ++i)
	{
		printf("%c", name[i]);
	}
	printf("\n");
	return 0;
}
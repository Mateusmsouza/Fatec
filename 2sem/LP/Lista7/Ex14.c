/*
Fac¸a um programa que leia uma palavra (maximo de 50 letras) e some 1 no valor ASCII ´
de cada caractere da palavra. Imprima a string resultante
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	char str[51];
	int by = 0;
	scanf("%s", str);

	by = strlen(str);
	for (int i = 0; i < by; ++i)
	{
		printf("%c", str[i] + 1);

	}
	printf("\n");
	return 1;
}
/*
Escreva um programa para converter uma cadeia de caracteres de letras maiusculas em ´
letras minusculas. ´ Dica: some 32 dos caracteres cujo codigo ASCII est ´ a entre 65 e 90.
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	char string[255];
	scanf("%s", string);
	int by = strlen(string);
	for (int i = 0; i < by; ++i)
	{
		printf("%c\n", string[i] + 32);
	}
	printf("\n");

	return 0;
}
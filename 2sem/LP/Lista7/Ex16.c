/*
Leia uma cadeia de caracteres e converta todos os caracteres para maiuscula. ´ Dica:
subtraia 32 dos caracteres cujo codigo ASCII est ´ a entre 97 e 122
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(){
	char str[255];

	scanf("%s", str);
	int by = strlen(str);

	for (int i = 0; i < by; ++i)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			printf("%c", str[i] - 32);
		}
		
	}
	printf("\n");

	return 0;
}
/*
Leia um vetor contendo letras de uma frase inclusive os espac¸os em branco. Retirar os
espacos em branco do vetor e depois escrever o vetor resultante.
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main(){
	char str[255], str2[255];

	fgets(str, 100, stdin);
	int by = strlen(str);
	int count = 0;
	while (str[count] != '\0'){
		if (str[count] != ' '){
			str2[count] = str[count];
		}
		++count;
	}



	printf("%s\n", str2);

	return 0;
}
/*
Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
	char word[255];
	char word_aux[255];
	char caractere;
	int vowels=0;
	printf("Type any letter\n");
	fflush(stdin);
	scanf("%c", &caractere);
	printf("Type any word.\n");
	scanf("%s", word);

	//printf("%zu\n", strlen(word));
	for (int i = 0; i < strlen(word); ++i)
	{
		if (tolower(word[i]) == caractere){
			word_aux[i] = '*';
		}else{
			word_aux[i] = word[i];
		}
		if (tolower(word[i]) == 'a' || tolower(word[i]) == 'e' || tolower(word[i]) == 'i' || tolower(word[i]) == 'o' || tolower(word[i]) == 'u'){
			++vowels;
		}
	}

	printf("%d\n", vowels);
	printf("New word: %s\n", word_aux);
	return 0;
    system("pause");
}
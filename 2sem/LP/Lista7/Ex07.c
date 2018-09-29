/*
Crie um programa que compara duas strings (nao use a func¸ ˜ ao strcmp).
*/
#include <stdio.h>
#include <string.h>
int main(){
	char string1[255], string2[255];
	int x = 0;
	int temp = 0;

	printf("a\n");
	scanf("%s", string1);
	scanf("%s", string2);

	if (strlen(string1) == strlen(string2)){
		temp = strlen(string1);
		for (int i = 0; i < temp; ++i)
		{
			if (string1[i] == string2[i]){
				printf("Analisando....\n");
			}else{
				printf("Strings diferentes.\n");
				return 0;
			}
		}
	}else{
		printf("Strings diferentes\n");
		return 0;
	}

	printf("Strings iguais!\n");
	return 0;
}
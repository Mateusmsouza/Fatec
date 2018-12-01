/*
Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da
pessoa e a palavra “ACEITA”, caso contrario imprimir “N ´ AO ACEITA”.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (){
	int age;
	char name[255], gender;

	printf("Type your name\n");
	fgets(name, 100, stdin);

	printf("Type your gender [M or F]\n");
	scanf("%c", &gender);


	printf("Type your age.\n");
	scanf("%d", &age);
	
	

	if (tolower(gender) == 'f' && age < 25){
		printf("ACEITA\n");
	}else{
		printf("NAO ACEITA\n");
	}
	return 0;
}
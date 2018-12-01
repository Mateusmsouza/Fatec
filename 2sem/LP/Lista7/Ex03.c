/*
. Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’
(maiuscula ou min ´ uscula). 
*/

#include <stdio.h>
#include <ctype.h>

int main(){
	char name[255];

	printf("Type a name\n");
	fgets(name, 100, stdin);

	if (name[0] == 'a' || name[0] == 'A'){
		printf("%s\n", name);
	}else{
		printf("NO\n");
	}
	return 0;
}
#include <stdlib.h>
#include <stdio.h>

int main(){
	int a = 666;
	int *s = &a;
	printf("Valor indexado pelo ponteiro: %d\n", *s);
	printf("Endereço da variavel que o ponteiro aponta: %p\n", &a);
	printf("Endereço que o ponteiro aponta: %p\n", s);
	printf("Endereço que do ponteiro:%p\n", &s);
	return 0;
}

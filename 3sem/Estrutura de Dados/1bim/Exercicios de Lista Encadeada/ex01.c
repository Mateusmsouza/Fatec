#include <stdio.h>

typedef struct registro {
	int objeto;
	struct registro *next;
} celula;


#define EXIT_SUCCESS 0;

int main(void){
	printf("Tamanho ocupado em memória: %zu\n",
			sizeof(celula));
	return EXIT_SUCCESS;
}

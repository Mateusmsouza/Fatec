#include <stdio.h>
#include <stdlib.h>
// este algoritmo trata uma lista encadeada com cabeça (primeiro objeto com conteudo = lixo em memoria)


typedef struct registro {
	int objeto;
	struct registro *next;
} celula;

void imprimir(celula *le){
	if(le->next != NULL){
		printf("Objeto: %d\n", le->objeto);
		imprimir(le->next);	
	}else{
		printf("Objeto: %d\n", le->objeto);
		printf("Final da Lista Encadeada\n");
	}

}

void insere(int novoElemento, celula *le){
	if (le->next == NULL){
		celula *novoObjeto = malloc(sizeof(celula));
		novoObjeto->objeto = novoElemento;
		novoObjeto->next = NULL;
		le->next=novoObjeto;
	}else{
		insere(novoElemento, le->next);
	}
}

int main(void){
	celula *le;
	le = malloc (sizeof(celula));
	le->next = NULL;

	insere(1000000, le);
	
	insere(10000, le);
	insere(1000, le);
	insere(100, le);
	
	imprimir(le);	
	return EXIT_SUCCESS;
}

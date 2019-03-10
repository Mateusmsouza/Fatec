#include <stdio.h>
#include <stdlib.h>
// este algoritmo trata uma lista encadeada com cabeça (primeiro objeto com conteudo = lixo em memoria)


typedef struct registro {
	int objeto;
	struct registro *next;
} celula;

void busca(celula *le, int x){
	if (le->objeto == x){
		printf("Objeto: %d existe na lista\n", le->objeto);
	}
	if (le->next!=NULL) busca(le->next, x);
}

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
	insere(100, le);
	
	//imprimir(le);	
	busca(le, 100);
	return EXIT_SUCCESS;
}

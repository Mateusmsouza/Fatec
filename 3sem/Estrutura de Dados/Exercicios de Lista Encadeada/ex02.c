#include <stdio.h>
#include <stdlib.h>
// este algoritmo trata uma lista encadeada com cabeça (primeiro objeto com conteudo = lixo em memoria)


typedef struct registro {
	int objeto;
	struct registro *next;
} celula;

// função de busca na LE.
celula *busca(celula *le, int x, int comcabeca){
	if (comcabeca){
		if (le != NULL){
			if (le->objeto == x){
				printf("Objeto: %d existe na lista\nRetornando ponteiro para o main...\n", le->objeto);
				return le;
			}
			busca(le->next, x);
		}	
	}
}

// função de imprime a LE inteira.
void imprimir(celula *le){
	if(le != NULL){
		printf("Objeto: %d\n", le->objeto);
		imprimir(le->next);	
	}else{
		printf("Final da Lista Encadeada\n");
	}

}

// Função para inserir um novo elemento no final da lista.
void insereFinal(int novoElemento, celula *le){
	if (le->next == NULL){
		celula *novoObjeto = malloc(sizeof(celula));
		novoObjeto->objeto = novoElemento;
		novoObjeto->next = NULL;
		le->next=novoObjeto;
	}else{
		insereFinal(novoElemento, le->next);
	}
}

// Função para inserir um novo objeto entre o objeto P e seu próximo elemento
void insereMeio(int novoElemento, celula *le){
	if (le == NULL){
		printf("Lista vazia, utilize a funcao insereFinal.\n");
		return ;
	}
	celula *novaCelula;
	novaCelula = malloc(sizeof(celula));
	novaCelula->next = le->next;
	novaCelula->objeto = novoElemento;
	le->next = novaCelula;
	printf("Elemento %d inserido com sucesso no endereco em memoria %p\n", novoElemento, &novaCelula);
}

int main(void){
	celula *le;
	//le = malloc (sizeof(celula));
	le = NULL;

	insereFinal(1000000, le);
	/*
	insereFinal(10000, le);
	insereFinal(1000, le);
	insereFinal(100, le);
	insereFinal(100, le);
	*/
	//imprimir(le->next);	
	//busca(le, 100);
	//insereMeio(666, busca(le, 1000));
	//imprimir(le->next);
	return EXIT_SUCCESS;
}

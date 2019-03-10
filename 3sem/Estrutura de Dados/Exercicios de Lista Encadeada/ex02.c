#include <stdio.h>
#include <stdlib.h>
// este algoritmo trata uma lista encadeada com cabeça (primeiro objeto com conteudo = lixo em memoria)


typedef struct registro {
	int objeto;
	struct registro *next;
} celula;

// função de busca na LE.

celula *busca(celula *le, int x){
		if (le != NULL){
			if (le->objeto == x){
				printf("Objeto: %d existe na lista (Endereco de Memoria: %p)\nRetornando ponteiro para o main...\n", le->objeto, &le);
				return le;
			}
			busca(le->next, x);
		}	
}

celula *buscaAnterior(celula *le, celula *tofind){
	if (le == NULL || tofind == NULL) return NULL;
	if (le->next == tofind) return le;
	return buscaAnterior(le->next, tofind);
}

// função de imprime a LE inteira.
void imprimir(celula *le){
	if(le != NULL){
		printf("Objeto: %d, ", le->objeto);
		imprimir(le->next);	
	}else{
		printf("\n");
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

// Função para inserir um novo objeto entre o objeto le e seu próximo elemento
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

void exclui(celula *le, celula *exclude){
	celula *anterior;
	anterior = buscaAnterior(le, exclude);
	if (anterior == NULL){
		printf("Erro, retorno da buscaAnterior foi null.\n");
		return;
	}

	anterior->next = exclude->next;
	printf("Objeto contido no endereco de memoria %p excluido com sucesso!\n", exclude);
	free(exclude);
}

int main(void){
	celula *le;
	le = malloc (sizeof(celula));
	le->next = NULL;
	int exit = 1;

	printf("-----------------------------------------------------\n");
	printf("| Brincando de Lista Encadeada (c/ head cell)  2019 |\n");
	printf("-----------------------------------------------------\n");
	printf("Versão 1.0 - Mateus M. Souza [Fatec São José dos Campos]\n");
	printf(".\n");
	printf(".\n");
	printf(".\n");

	while(exit){
		int decisao = 0;
		int a;	
		int temp3;

		printf("Insira o que desja manipular da Lista Encadeada:\n");
		printf("1-Inserir no Fim da Lista\n2-Inserir no meio da lista (passar valor para busca)\n3-Excluir da Lista\n4-Imprimir\n");
		scanf("%d", &decisao);
		switch(decisao){
			case 1:	
				printf("Insira o valor que deseja inserir na L.E\n");
				scanf(" %d", &a);
				insereFinal(a, le);
				system("clear");
				printf("Valor %d inserido com sucesso.\n", a);
				break;
			case 2:
				system("clear");
				printf("Insira o objeto que receberá como sucessor o novo objeto.\n");
				imprimir(le);
				scanf("%d", &temp3);
				printf("Insira o valor do novo objeto.\n");
				scanf("%d", &a);
				insereMeio(a, busca(le, temp3));
				break;
			case 3:
				system("clear");
				imprimir(le);
				printf("Insira o valor que deseja excluir.\n");
				scanf("%d", &a);
				exclui(le, busca(le, a));
				break;
			case 4:
				imprimir(le);
				break;
		}
		printf("Finaliza execução?[INPUT 1 PARA CONTINUAR]\n");
		scanf("%d", &exit);
	}

	return EXIT_SUCCESS;
}
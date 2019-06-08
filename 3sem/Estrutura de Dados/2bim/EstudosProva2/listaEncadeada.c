#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct cel {
    int valor;
    struct cel *prox;
}typedef cel;


void inserir (cel **lista, int x) {
    cel *temp = NULL, *aux = *lista;

    temp = malloc(sizeof(cel));
    temp->valor = x;
    temp->prox = NULL;


    if (*lista == NULL)
      *lista = temp;
    else {
      for (; aux->prox != NULL; aux = aux->prox);
      aux->prox = temp;
    }
 }

 void imprimir(cel *lista) {
    for (cel *aux = lista; aux != NULL; aux = aux->prox)
        printf("%d ,", aux->valor);
    printf("\n");
}


void 
insertSort(cel *lst){
    cel *temp = NULL;
    cel *ordenado = lst->prox;

    while(ordenado){
        cel *valorOrdenando = ordenado->prox;

        // removendo o valorOrdenado da lista
        ordenado->prox = valorOrdenando->prox;

        for (cel* i = lst; i != ordenado->prox; i = i->prox)
        {
            if (valorOrdenando->valor <= (i->prox)->valor || i->prox == ordenado->prox){
                temp = i->prox;
                i->prox = valorOrdenando;
                valorOrdenando->prox = temp;

                break;
            }
        }
        ordenado = ordenado->prox;

    }
    temp = NULL;
    free(temp);
}

void 
bubbleSort(cel *lst){
    cel * aux;
    cel * firstLoop = lst;

    while(firstLoop){

        for (cel *j = lst; j->prox != NULL ; j = j->prox)
        {
            if (j->valor > (j->prox)->valor && (j->prox)->prox){
                
               aux = j->prox;
               j->prox = (j->prox)->prox;
               aux->prox = j;
               aux = NULL;
            }
        }

        firstLoop = firstLoop->prox;
    }
}
/*
cel retiracelula(cel *lista){
	cel *removed = lista->prox;
	lista->prox = removed->prox;
	return removed;
}

void adicionaNaFrente(cel *lista, cel *adicionar){
	cel *temp = lista->prox;
	lista->prox = adicionar;
	adicionar->prox = temp;
}
*/


int main(){
	cel *list = NULL;

	inserir(&list, 3);
	inserir(&list, 2);
	inserir(&list, 1);
	inserir(&list, 8);
	inserir(&list, 6);
    //insertSort(list);
    bubbleSort(list->prox);
	imprimir(list->prox);
	return 0;
}
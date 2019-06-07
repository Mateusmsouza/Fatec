#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cel {
    int valor;
    struct cel *prox;
}typedef cel;

void 
insertSort(cel *lst){

	cel *ordenado = lst->prox;

	while(ordenado){

		cel *valorOrdenando = ordenado->prox;

		// removendo o valorOrdenado da lista
		ordenado->prox = valorOrdenando->prox;

		for (cel* i = lst; i != ordenado->prox; i = i->prox)
		{
			if (valorOrdenando->valor <= (i->prox)->valor || i->prox == ordenado->prox){
				cel *temp = i->prox;
				i->prox = valorOrdenando;
				valorOrdenando->prox = temp;
				free(temp);
				break;
			}
		}
		ordenado = ordenado->prox;

	}
}
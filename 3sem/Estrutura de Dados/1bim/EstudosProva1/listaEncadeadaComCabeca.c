 #include <stdlib.h>
 #include <stdio.h>
/*
Este arquivo tem o intuito de estudar as funções aplicadas a lista encadeada com cabeça.
*/

 struct celula
 {
   int dados;
   struct celula *PROX;

 }typedef celula;

// Esta função retorna uma celula
celula *criaCelula(int data){
  celula *new = malloc(sizeof(celula));
  new->dados = data;
  new->PROX=NULL;
  return new;
}

// Função para inserir uma celula a mais em relação ao argumento passado
void *adiciona(celula *lista, int data){
  celula *new = criaCelula(data);
  celula *temp = criaCelula(-6);
  temp->PROX = NULL;
  if (lista->PROX != NULL){
    temp->PROX = lista->PROX;
  }

  lista->PROX = new;
  new->PROX = temp->PROX;
}

// Função para remover a celula seguinte em relação ao argumento passado
void exclui(celula *lista){
  if (lista == NULL) return;

  celula *exclude = lista->PROX;
  lista->PROX = exclude->PROX;
  free(exclude);
}

// Função que imprime/retorna o endereço da última celula. 
celula *imprimeEretornaUltimo(celula *lista, int imprime){
  if (lista != NULL) if (imprime && lista->dados != -1) printf("Item da celula: %d \n", lista->dados);
  
  if (lista->PROX == NULL) return lista;

  imprimeEretornaUltimo(lista->PROX, imprime);
}

int main(){
  // por convencionameno, dados -1 representará a cabeça
  celula *lista = criaCelula(-1);
  celula *celulaCabeca = lista;
  adiciona(lista, 1);
  adiciona(lista, 9);
  adiciona(lista, 10);
  adiciona( imprimeEretornaUltimo(celulaCabeca, 0), 666 );
  exclui(lista);
  imprimeEretornaUltimo(celulaCabeca, 1);
  return 0;
}
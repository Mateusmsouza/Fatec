#include <stdlib.h>
#include <stdio.h>

/*Sample 2 AB, Mateus Machado, Fatec São José dos Campos*/

// estrutura que representará cada nó da árvore
struct no{
  struct no *direita;
  struct no *esquerda;

  int valor;
}typedef no;

// Função auxiliar criada para facilitar a criação de novos nós
no* retornaNo(int valor){
  no *novoNo = malloc(sizeof(no));
  novoNo->direita = NULL, novoNo->esquerda = NULL, novoNo->valor = valor;
  return novoNo;
}

// insere um novo nó em uma árvore de forma recursiva. Recebe ponteiro de ponteiro. Caso a árvore seja null, será criada um árvore nova
void insereNoRecursivo(no **arvore, int valor){
  printf("Ok\n");
  if (*arvore == NULL) *arvore = retornaNo(valor);
  else if (valor > (*arvore)->valor) insereNoRecursivo( &(*arvore)->direita, valor );
  else insereNoRecursivo( &(*arvore)->esquerda, valor );
}

// imprime uma arvore (esquerda, valor, direita) de forma recursiva
void imprimeArvoreRecursivo(no* arvore){
  if(arvore){
    imprimeArvoreRecursivo(arvore->esquerda);
    printf("%d\n", arvore->valor);
    imprimeArvoreRecursivo(arvore->direita);
  }
}

int main(){
  no *arvorezinha = NULL;

  insereNoRecursivo(&arvorezinha, 10);
  insereNoRecursivo(&arvorezinha, 1);
  imprimeArvoreRecursivo(arvorezinha);
  return 0;
}
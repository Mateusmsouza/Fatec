#include <stdlib.h>
#include <stdio.h>

/*Sample 2 AB, Mateus Machado, Fatec Sao José dos Campos*/

// estrutura que representará cada nó da árvore
struct no{
  struct no *direita;
  struct no *esquerda;

  int valor;
}typedef no;

// Função auxiliar criada para facilitar a criação de novos nós
no* retornaNo(int valor){
  no *novoNo = malloc(sizeof(no));
  novoNo->direita = NULL, novoNo->esquerda = NULL;
  return novoNo;
}

// insere um novo nó em uma árvore. Caso a árvore seja null, será criada um árvore nova
void insereNo(no *arvore, int valor){
  if (arvore == NULL) arvore = retornaNo(valor);

}

int main(){

  return 0;
}
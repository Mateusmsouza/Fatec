#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
  if (*arvore == NULL) *arvore = retornaNo(valor);
  else if (valor > (*arvore)->valor) insereNoRecursivo( &(*arvore)->direita, valor );
  else insereNoRecursivo( &(*arvore)->esquerda, valor );
}

// imprime uma arvore (esquerda, valor, direita) de forma recursiva.
void imprimeArvoreRecursivo(no* arvore){
  if(arvore){
    imprimeArvoreRecursivo(arvore->esquerda);
    printf("%d\n", arvore->valor);
    imprimeArvoreRecursivo(arvore->direita);
  }
}

// retorna o ponteiro para o nó com o valor passado.
no *buscaNaArvoreRecursiva(no *arvore, int valor){
  if (arvore == NULL) return NULL;
  else if ( arvore-> valor == valor) return arvore;
  else return valor > arvore->valor ? buscaNaArvoreRecursiva(arvore->direita, valor) : buscaNaArvoreRecursiva(arvore->esquerda, valor);
}

// inverte todos os nós da árvore
void espelhaArvore(no *arvore){
  if (arvore){
    espelhaArvore(arvore->direita);
    espelhaArvore(arvore->esquerda);
    no* aux = arvore->direita;
    arvore->direita = arvore->esquerda;
    arvore->esquerda = aux;
    
  }
}

// Verifica se duas árvores diferentes são espelho uma da outra
int verificaEspelho(no *arvore1, no *arvore2){
  if (arvore1 == NULL && arvore2 == NULL) return 1;
  if (arvore1 == NULL || arvore2 == NULL) return 0;
  return ( arvore1->valor == arvore2->valor && verificaEspelho(arvore1, arvore2) && verificaEspelho(arvore2, arvore1) );
}

// Realiza a soma de todos os valores da árvore de forma recursiva
int somaRecursiva(no *arvore){
  return arvore ? arvore->valor + somaRecursiva(arvore->direita) + somaRecursiva(arvore->esquerda) : 0;
}

// Retorna a altura de uma árvore (Considerando o primeiro nó).
int retornaAltura(no *arvore){

  if (!arvore) return 0;

  int alturaDireita = retornaAltura(arvore->direita);
  int alturaEsquerda = retornaAltura(arvore->esquerda);

  return 1 + (alturaDireita > alturaEsquerda ? alturaDireita : alturaEsquerda);
}

// Remove um nó passado e realiza a substituição por um nó filho no lugar. 
void removeNo(no *iAmGroot){
  
  if (!iAmGroot) return;
  
  if (iAmGroot->esquerda == NULL){
    memcpy(iAmGroot, iAmGroot->direita, sizeof(no));
    printf("1\n");
    return;
  } 
  
  no* elegivel = iAmGroot->esquerda;
  no* paiDoElegivel = iAmGroot;
  while (elegivel->direita != NULL)
  {
    printf("1\n");
    paiDoElegivel = elegivel;
    elegivel = elegivel->direita;
  }
  
  if(elegivel->direita) paiDoElegivel->direita = elegivel->direita;
  else paiDoElegivel->direita = elegivel->esquerda; 

  elegivel->esquerda = iAmGroot -> esquerda, elegivel->direita = iAmGroot->direita;
  memcpy(iAmGroot, elegivel, sizeof(no));
}

int main(){
  no *arvorezinha = NULL;

  insereNoRecursivo(&arvorezinha, 2);
  insereNoRecursivo(&arvorezinha, 1);
  insereNoRecursivo(&arvorezinha, 3);
  //insereNoRecursivo(&arvorezinha, 6);
  //insereNoRecursivo(&arvorezinha, 8);
  removeNo(buscaNaArvoreRecursiva(arvorezinha, 2));
  imprimeArvoreRecursivo(arvorezinha);
  //printf("Endereco de memória do valor %d\n%p\n", buscaNaArvoreRecursiva(arvorezinha, 10)->valor, buscaNaArvoreRecursiva(arvorezinha, 10) );
  
  //espelhaArvore(arvorezinha);
  //imprimeArvoreRecursivo(arvorezinha);

  printf("Altura de árvore: %d\n", retornaAltura(arvorezinha));
  return 0;
}
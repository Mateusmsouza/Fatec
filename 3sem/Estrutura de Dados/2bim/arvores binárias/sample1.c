#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//#include "assign.h"

struct sample1
{
  int value;
  struct sample1* right;
  struct sample1* left;

} typedef node;


int altura (node *folha) {
   // quando a folha for null, retorna -1
   if (folha == NULL)
      return -1; // altura da árvore vazia
   else {
      // A recursão abaixo explorará todos os ramos da árvore até encontrar seu fim.
      // O algoritmo é: o ramo que for mais distante da árvore, retornará o maior valor
      // para a instância anterior devido a comparação entre alturaEsquerda e alturaDireita abaixo
      int alturaEsquerda = altura (folha->left);
      int alturaDireita = altura (folha->right);

      // se alturaEsquerda maior, retorna-se ela + 1.
      // Caso contrário, alturaDireita +1.
      // Esta comparação seleciona o maior lado ao longo da recursão
      if (alturaEsquerda < alturaDireita) return alturaDireita + 1;
      else return alturaEsquerda + 1;
   }
}

void
printTree(node* r){

  if (r != NULL){
    // printa left, valor e right recursivamente.
    printTree(r->left), printf("%d\n", r->value), printTree(r->right);

  }
}


node*
devolveNo(int x){
  node* newNode = malloc(sizeof(node));
  newNode->value = x;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

node*
insertNodeOnTree(node* tree, int x){
    // se não existe árvore, agora existe
    node* inTree = tree;
    if (inTree == NULL) return devolveNo(x);

    // se o valor de x é maior que o valor da árvore, checar se há próximo node a direita
    if((inTree->value) < x ){
      // se há nó a direita (não é nulo), a recursão é ativada
      if(inTree->right != NULL) insertNodeOnTree( inTree->right, x );
      // se o nó a direita é null, então a nova folha é posicionada
      else inTree->right = devolveNo(x);
    }
    else{
      // se há nó a esquerda (não nulo), a recursão é ativada
      if(inTree->left != NULL) insertNodeOnTree(inTree->left, x);
      // se o nó a direita é null, então a nova folha é posicionada
      else inTree->left = devolveNo(x);
    }
    return tree;
}

node*
searchNodeOnTree(node* tree, int x){
    if (tree == NULL){
      return NULL;
    }
    if (tree->value == x){
      return tree;
    }
    if(x > tree->value) searchNodeOnTree(tree->right, x);
    else searchNodeOnTree(tree->left, x);
}


// função que removerá node
// também procura por um substituto na árvore para ele.
// O substituto será sempre o maior elemento da esquerda (assumindo uma árvore ordenada)
// ou caso o ramo da esquerda seja nulo, o primeiro da direita será retornado.
node*
removeNode(node* tree){
  node *raiz = tree;
  node *eligible = malloc(sizeof(node));
  node *fatherOfEligible = malloc(sizeof(node));


  // se árvore null retorna null
  if (raiz == NULL) return NULL;

    // alterado
  if ((raiz)->left == NULL) return raiz->right;
  else fatherOfEligible = raiz, raiz = raiz->left;

  // achando o elegível e seu pai na árvore
  while (raiz->right != NULL)
  {
    fatherOfEligible = raiz;
    raiz = raiz->right;
    //printf("Raiz: %d\n", raiz->value);
  }


  eligible = raiz;

  if(eligible->right != NULL){
    fatherOfEligible->right = eligible->right;
  }else{
    fatherOfEligible->right = eligible->left;
  }
  printf("Elegivel Encontrado: %d\n", eligible->value);
  //tree = eligible;
  eligible->left = tree->left;
  eligible->right = tree->right;


  memcpy(tree, eligible, sizeof(node));
  return eligible;
}


int
somaRecursiva(node *arvore){
    int l=0, r=0;
    if (arvore == NULL) return 0;
    if (arvore->left) l = somaRecursiva(arvore->left);
    if (arvore->right) r = somaRecursiva(arvore->right);
    return arvore->value + l + r;
}

int 
ismirror(node *arvore1, node *arvore2){
  if (arvore1 == NULL && arvore2 == NULL) return 1;
  if (arvore1 == NULL || arvore2 == NULL) return 0;
  return ( arvore1->value == arvore2->value && ismirror(arvore1->left, arvore2->right) && ismirror(arvore1->right, arvore2->left));
}

int main(){
    setlocale(LC_ALL , "portuguese");
  //char *s = "Árvore Binária";
  //assign(s);

	int n = 10;
	int V[] = {15,8,2,6,7,1,4,6,10,5};
	int i;


	node *R;
	R = NULL;

	for (i = 0; i < n; i++)
		R = insertNodeOnTree(R, V[i]);

  printf("Printando a árvore antes de excluir um elemento\n");
	printTree(R);

  //node *toRemove = searchNodeOnTree(R, 8);
  //printf("Valor a ser removido da árvore: %d\n", toRemove->value);

  printf("Excluindo o elemento: %d\n", searchNodeOnTree(R, 8)->value);
  removeNode( searchNodeOnTree(R, 8) );

  printf("Printando a árvore após de excluir um elemento\n");
  printTree(R);

  return 0;
}

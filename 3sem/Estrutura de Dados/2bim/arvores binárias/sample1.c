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
      return -1; // altura da �rvore vazia
   else {
      // A recurs�o abaixo explorar� todos os ramos da �rvore at� encontrar seu fim.
      // O algoritmo �: o ramo que for mais distante da �rvore, retornar� o maior valor
      // para a inst�ncia anterior devido a compara��o entre alturaEsquerda e alturaDireita abaixo
      int alturaEsquerda = altura (folha->left);
      int alturaDireita = altura (folha->right);

      // se alturaEsquerda maior, retorna-se ela + 1.
      // Caso contr�rio, alturaDireita +1.
      // Esta compara��o seleciona o maior lado ao longo da recurs�o
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
    // se n�o existe �rvore, agora existe
    node* inTree = tree;
    if (inTree == NULL) return devolveNo(x);

    // se o valor de x � maior que o valor da �rvore, checar se h� pr�ximo node a direita
    if((inTree->value) < x ){
      // se h� n� a direita (n�o � nulo), a recurs�o � ativada
      if(inTree->right != NULL) insertNodeOnTree( inTree->right, x );
      // se o n� a direita � null, ent�o a nova folha � posicionada
      else inTree->right = devolveNo(x);
    }
    else{
      // se h� n� a esquerda (n�o nulo), a recurs�o � ativada
      if(inTree->left != NULL) insertNodeOnTree(inTree->left, x);
      // se o n� a direita � null, ent�o a nova folha � posicionada
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


// fun��o que remover� node
// tamb�m procura por um substituto na �rvore para ele.
// O substituto ser� sempre o maior elemento da esquerda (assumindo uma �rvore ordenada)
// ou caso o ramo da esquerda seja nulo, o primeiro da direita ser� retornado.
node*
removeNode(node* tree){
  node *raiz = tree;
  node *eligible = malloc(sizeof(node));
  node *fatherOfEligible = malloc(sizeof(node));


  // se �rvore null retorna null
  if (raiz == NULL) return NULL;

    // alterado
  if ((raiz)->left == NULL) return raiz->right;
  else fatherOfEligible = raiz, raiz = raiz->left;

  // achando o eleg�vel e seu pai na �rvore
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
  //char *s = "�rvore Bin�ria";
  //assign(s);

	int n = 10;
	int V[] = {15,8,2,6,7,1,4,6,10,5};
	int i;


	node *R;
	R = NULL;

	for (i = 0; i < n; i++)
		R = insertNodeOnTree(R, V[i]);

  printf("Printando a �rvore antes de excluir um elemento\n");
	printTree(R);
  
  printf("Excluindo o elemento: %d\n", searchNodeOnTree(R, 8)->value);
  removeNode( searchNodeOnTree(R, 8) );

  printf("Printando a �rvore ap�s de excluir um elemento\n");
  printTree(R);

  return 0;
}

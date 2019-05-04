#include <stdio.h>
#include <stdlib.h>

struct sample1
{
  int value;
  struct sample1* right;
  struct sample1* left;

} typedef node;


void
printTree(node* r){
  
  if (r != NULL){
    // printa left, valor e right recursivamente.
    printTree(r->left), printf("%d\n", r->value), printTree(r->right);

  } 
}

void 
main(){

}
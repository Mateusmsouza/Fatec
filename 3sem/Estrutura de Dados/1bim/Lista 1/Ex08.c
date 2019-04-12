/*
8 - Faça uma função para intercalar duas listas encadeadas

Its code consider dummy cell in the list.
Mateus M Souza - 2019
*/
#include <stdio.h>
#include <stdlib.h>

struct LinkedList{

    int value;
    struct LinkedList *next;

}typedef LinkedList;


LinkedList *TOCOMSONO( LinkedList *lk1, LinkedList *lk2 ){
    LinkedList *lk = malloc( sizeof( LinkedList ) );
    LinkedList *headcell = malloc( sizeof(LinkedList) );
    headcell = lk;
    
    while( (lk1 != NULL) && (lk2 != NULL)){
      if(lk1 != NULL){
        lk->next = lk1;
        lk = lk1;
        lk1 = lk1->next;
      }
    //  printf("%d\n", lk->value);

      if(lk2 != NULL){
        lk->next = lk2;
        lk = lk2;
        lk2 = lk2->next;
      }

    //  printf("%d\n", lk->value);
    }
    printf("%d\n", ((headcell->next)->next)->value);
    return headcell;
}

int main(){
  LinkedList *celula1 = malloc(sizeof(LinkedList));
  celula1->value = 1;
  LinkedList *celula2 = malloc(sizeof(LinkedList));
  celula2->value = 3;
  celula1->next = celula2;
  celula2->next = NULL;

  LinkedList *celula3 = malloc(sizeof(LinkedList));
  celula3->value = 10;
  LinkedList *celula4 = malloc(sizeof(LinkedList));
  celula4->value = 11;
  celula3->next = celula4;
  celula4->next = NULL;

  TOCOMSONO(celula1, celula3);

  return 0;
}
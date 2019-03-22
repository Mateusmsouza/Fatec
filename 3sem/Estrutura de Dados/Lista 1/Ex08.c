/*
8 - Faça uma função para intercalar duas listas encadeadas

Its code consider dummy cell in the list.
Mateus M Souza - 2019
*/
#include <stdio.h>

struct {

    int value;
    struct LinkedList *next;

}typedef LinkedList;


LinkedList *TOCOMSONO( LinkedList *lk1, LinkedList *lk2 ){
    LinkedList *lk = malloc( sizeof( LinkedList ) );
    
    while( (lk1 != NULL) && (lk2 != NULL)){
      if(lk1 != NULL){
        lk->next = lk1;
        lk = lk1;
        lk1 = lk1->next;
      }

      if(lk2 != NULL){
        lk->next = lk2;
        lk = lk2;
        lk2 = lk2->next;
      }
    }
    return lk;
}
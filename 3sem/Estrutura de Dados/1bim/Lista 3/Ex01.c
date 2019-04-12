/*1 - Faça uma função que receba duas listas encadeadas L1 e L2 e retorne
uma terceira lista L3 com a intercalação de L1 e L2.*/
#include <stdio.h>
#include <stdlib.h>

struct LinkedList{
    int value;
    struct LinkedList *NEXT;
}typedef LinkedList;

// append at list function
LinkedList *append( LinkedList  *current, int valueToAppend){

  LinkedList *newCell = malloc(sizeof(LinkedList));
  newCell->NEXT = NULL;
  newCell->value = valueToAppend;

  // 
  current->NEXT = newCell;

  return newCell;
}

// =]
LinkedList *interweave( LinkedList *listOne, LinkedList *listTwo ){

    LinkedList *headcell = malloc(sizeof(LinkedList));
    LinkedList *listThree = malloc(sizeof(LinkedList));
    listThree->NEXT = NULL;
    headcell = listThree;

    // while any of lists aren't null
    while( (listOne != NULL) || (listTwo != NULL) ){
      
      if (listOne != NULL){

        listThree = append(listThree, listOne->value);
        listOne = listOne->NEXT;
      }

      if (listTwo != NULL){

        listThree = append(listThree , listTwo->value);
        listTwo = listTwo->NEXT;
      }

    }

    return headcell;
}



void printAll(LinkedList *lklist){

  if(lklist == NULL) return;
  printf("%d\n", lklist->value);
  printAll( lklist->NEXT );
}

int main(){
  LinkedList *celula1 = malloc(sizeof(LinkedList));
  celula1->value = 1;
  LinkedList *celula2 = malloc(sizeof(LinkedList));
  celula2->value = 3;
  celula1->NEXT = celula2;
  celula2->NEXT = NULL;

  LinkedList *celula3 = malloc(sizeof(LinkedList));
  celula3->value = 10;
  LinkedList *celula4 = malloc(sizeof(LinkedList));
  celula4->value = 11;
  celula3->NEXT = celula4;
  celula4->NEXT = NULL;

  // testing
  printAll( ( interweave ( celula1, celula3 ) )->NEXT );
  

  return 0;
}
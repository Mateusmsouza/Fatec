/*
2 - Implemente uma lista duplamente encadeada
*/
#include <stdio.h>
#include <stdlib.h>


struct LinkedList{
    int value;
    struct LinkedList *NEXT;
    struct LinkedList *PREVIOUS;
}typedef LinkedList;


// functions //
/*return last element*/
LinkedList *findLast(LinkedList *mylk){
  if (mylk->NEXT==NULL) return mylk;
  findLast(mylk->NEXT);
}

// this function returns a new element with previous and next null
LinkedList *newLinkeadList(){
  LinkedList *newlk = malloc(sizeof(LinkedList));
  newlk->NEXT = NULL;
  newlk->PREVIOUS = NULL;
  return newlk;
}
// this function append at end of the list
void append(LinkedList *mylk, int x){
    if (mylk->NEXT != NULL){
      mylk = findLast(mylk);
    }
    LinkedList *newCell = newLinkeadList();
    
    mylk->NEXT = newCell;
    newCell->PREVIOUS = mylk;

    newCell->value = x;
    
    printf("Inserido com sucesso no fim da lista [Valor: %d]\n", x);
    return ;
}

/*This function append after the cell passed*/
void appendAfter(LinkedList *mylk, int x){
    LinkedList *newCell = newLinkeadList();
    newCell->value = x;
    newCell->NEXT = (mylk->NEXT);
    newCell->PREVIOUS = mylk;

    (mylk->NEXT)->PREVIOUS = newCell;
    mylk->NEXT = newCell;
    
    printf("Inserido com sucesso após a celula passada na funcao [Valor: %d]\n", x);
}

void exclude(LinkedList *mylk){
  LinkedList *temp = mylk->PREVIOUS;
  if(mylk->NEXT != NULL){
    (mylk->NEXT)->PREVIOUS = mylk->PREVIOUS;
  }
  temp->NEXT = mylk->NEXT;

  free(mylk);
}

/*This function print all elements in the list*/
void printAll(LinkedList *mylk){
  if(mylk != NULL){
    printf("%d ", mylk->value);
    printAll(mylk->NEXT);
  }
  if (mylk == NULL ) printf("\n");
  return ; 
}


int main(){
  LinkedList *mylk = newLinkeadList();

  printf("Lixo de memoria:%d\n", mylk->value);
  append(mylk, 5);
  append(mylk, 2);
  appendAfter(mylk, 8);
  append(mylk, 9);

  printf("Imprimindo o vetor\n");
  printAll(mylk->NEXT);
  exclude((mylk->NEXT));
  printf("Imprimindo o vetor após remover o primeiro elemento\n");
  printAll(mylk->NEXT);
  return 0;
}
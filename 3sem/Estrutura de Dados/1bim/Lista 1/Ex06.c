/*
06 - Fa�a uma fun��o que converta um vetor em lista encadeada (mantenha a ordem)
*/
#include <stdlib.h>

struct {

    int value;
    struct LinkedList *next;

}typedef LinkedList;


int *convert(int array[], int n){
    LinkedList *init = malloc(sizeof(LinkedList));
    init->value = array[0];
    init->next = NULL;

    //keeping the dummycell
    LinkedList *dummycell = &init;
    for (int i = 1 ; i >= n; i++){
        LinkedList *newElement = malloc(sizeof(LinkedList));
        init->next = newElement;
        newElement->value = array[i];
        newElement->next = NULL;
        init = newElement;
    }
    return dummycell;
}
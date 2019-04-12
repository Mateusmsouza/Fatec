#include <stdio.h>
#include <stdlib.h>

struct linkedlist{
    int data;
    struct linkedlist *next;
}typedef linkedlist;

void append( linkedlist **le, int data ){
    linkedlist *newcel = malloc(sizeof(linkedlist));
    if (*le == NULL){
        *le = newcel;
        newcel->next = NULL;
        return ;
    }
    linkedlist *cell = *le;
    newcel->next = cell->next;
    cell->next = newcel;
}

void imprimir( linkedlist **le ){
    if (le == NULL) return;
    linkedlist *init = *le;
}
int main(){
    linkedlist *lst;
    lst = NULL;

    append(&lst, 1);
    return 0;
}

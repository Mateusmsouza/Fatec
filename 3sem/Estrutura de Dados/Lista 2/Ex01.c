/*1- Faça uma função que retorne apenas uma lista encadeada
ordenada com os elementos das duas listas encadeadas ordenadas.*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct LinkedList{

    int value;
    struct LinkedList *next;

}typedef LinkedList;

LinkedList *bind(LinkedList *listA, LinkedList *listB){
        LinkedList *headcell;
        LinkedList *listC = malloc(sizeof(LinkedList));
        headcell = listC;

        int auxA = 0, auxB = 0, auxBiggest = 0, auxLowest = 0;

        while( (listA != NULL) || (listB != NULL) ){
            // code for A
            if (listA != NULL){
                auxA = listA->value;
                printf("capA\n");

            }else{
                auxA = INT_MAX;
            }
            // code for B
            if (listB != NULL){
                auxB = listB->value;
                printf("capB\n");
                //listB = listB->next;
            }else{
                auxB = INT_MAX;
            }

            //comparisions to find the lowest
            if(auxB<auxA) {
                auxLowest = auxB;
                // moving list forward
                listB = listB->next;
                printf("lista b possui menor valor (%d)\n", auxLowest);
            }

            if(auxA<auxB){
                printf("got here\n");
                auxLowest = auxA;
                listA = listA->next;
                printf("got here\n");
                printf("lista a possui menor valor (%d)\n", auxLowest);
            }

            if(auxB==auxA){
                auxLowest = auxA;
                listA = listA->next;
                listB = listB->next;
                printf("lista a possui mesmo valor que lista b (%d)\n", auxLowest);
            }

            //validating lowest value
            if(listC->value != auxLowest){
                LinkedList *swapcell = malloc(sizeof(LinkedList));
                swapcell->value = auxLowest;
                swapcell->next = NULL;

                listC->next = swapcell;
                listC = swapcell;
            }

        }
        return headcell;
}

int main(){

    LinkedList *celula1 = malloc(sizeof(LinkedList));
    celula1->value = 3;
    LinkedList *celula2 = malloc(sizeof(LinkedList));
    celula2->value = 4;
    celula1->next = celula2;
    celula2->next = NULL;

    LinkedList *celula3 = malloc(sizeof(LinkedList));
    celula3->value = 10;
    LinkedList *celula4 = malloc(sizeof(LinkedList));
    celula4->value =11;
    celula3->next = celula4;
    celula4->next = NULL;

    LinkedList *temp = bind(celula1, celula3);
    /*
    printf("here\n");
    while(temp!= NULL){
        printf("Valu: %d \n", temp->value);
        temp = temp->next;
    }*/
    return 0;
}

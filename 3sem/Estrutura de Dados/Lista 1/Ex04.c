/*
1 - Faça uma função para concatenar duas listas encadeadas


Its code consider dummy cell in the list.
Mateus M Souza - 2019
*/

struct{
  int value;
  struct cell *NEXT;
}typedef cell;

int *bindTwoLists( cell *list1, cell *list2 ){
      
      if (list1->NEXT = NULL){
        list1->NEXT = list2;
        return list1;
      }

      return bindTwoLists(list1->NEXT, list2);
}
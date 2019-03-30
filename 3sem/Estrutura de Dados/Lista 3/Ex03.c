/*
3 - Uma TV chega a cada 3min num setor de qualidade para inspeção. 
Apenas um técnico faz a inspeção no modo FIFO e leva 4min por aparelho.
Faça uma função para simular as inspeções. Quantas TVs saíram após 8 horas de trabalho?

# Rascunho # 
temp total = 8 * 60; *converter horas em minutos.

cada tv -> entra na fila [A cada 3 minutos em 8h]
cada 4 minutos em 8h -> sai uma TV na fila.
*/
#include <stdlib.h>
#include <stdio.h>

struct LinkedList{
    int value;
    struct LinkedList *NEXT;
}typedef LinkedList;

void insert(LinkedList **u, LinkedList **t, int x){
  LinkedList *newCell = malloc(sizeof(LinkedList));
  if( (*u == NULL) && (*t == NULL) ){  
    *u = newCell;
    *t = newCell;
  }else
  {
    (**t).NEXT = newCell;
    *t = newCell;
  }
  newCell->NEXT = NULL;
  newCell->value = x;
}

void Remove(LinkedList **u){
  LinkedList *lixo = *u;
  
  *u = (**u).NEXT; 
  printf("ID Inspecionado: %d\n", (*u)->value);
  free(lixo);
}
int main(){
  int minutes = 8 * 60;
  LinkedList *u = NULL, *t = NULL;
  int id = 1;
  int idFixed = 0;

  // inserindo as TV's na fila
  for(int i = 1; i < minutes;)
  {
    i = i + 3;
    printf("-------------------------------------------\n");
    printf("Inserindo a TV %d\n Criando instancia %d\n", id, id);
    insert(&u, &t, id);
    id++;
  }

  printf("Realizando o calculo de TVs reparadas\n");
  for(int j = 1; j <= minutes;){
    // 
    j = j + 4;
    Remove(&u);
    idFixed++;
    
  }
  printf("\n\n");
  printf("Em 8h de trabalho:\nUm total de %d TVs foram para o tecnico\nE %d foram inspecionadas\n", id-1, idFixed);

  return 0;
}
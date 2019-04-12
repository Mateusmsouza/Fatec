/*
5 - Faça uma função para remover elementos repetidos de uma lista encadeada (apenas uma varredura).
*/
#include <stdio.h>

struct Ex05
{
  int value;
  struct celula *next;
}typedef celula;

void eliminarepeticao(celula *cel){
  if(cel == NULL) return ;
  
  celula *next = cel->next;
  if (cel->value == next->value){
    cel->next = next->next;
    free(next);
    eliminarepeticao(cel->next);
  }
}
/* Teste de Mesa
|  |1| ----> |  |1| ------> |  |2| -----> |  |2| -----> |  |3|

1º inst eliminarepeticao()
NEXT  || 
| |1|            -> |  |1| == |  |1| (?) 
                 -> free(|  |1|)

2º inst eliminarepeticao()
NEXT  ||
| |2|            -> |  |2| == | |2| (?)
                  -> free(|  |2|)

3º inst eliminarepeticao()
NEXT  ||
| |3|            -> |  |2| == | |3| (?)
                  -> pass

3º inst eliminarepeticao()
NEXT ||
NULL            -> |  |3| == NULL (?)
                  -> pass

4º inst eliminarepeticao()
cel ||
NULL

                -> CEL == NULL (?)
                -> return;

*/ 
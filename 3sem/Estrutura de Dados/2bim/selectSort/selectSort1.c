/*
*-----------
* Implementando um select sort
* Este select Sort selecionará o menor elemento em cada varredura e o posicionará no inicio do vetor
*-----------
*/
#include <limits.h>
#include <stdio.h>

int *selectSort(int v[], int n){
  int menor;
  int swap;

  for(int i = 0; i < n; i++)
  {
    menor = i;
    for(int j = i; j < n; j++)
    {
      if(v[menor] > v[j]){
        menor = j;
      }
    }
    swap = v[menor];
    v[menor] = v[i];
    v[i] = swap;
  }
  
  for(int a = 0; a < n; a++)
  {
    printf("%d ", v[a]);
  }
  printf("\n");
  
  return v;
}


int main(){
  int v[] = {5,2,3,4,1};
  selectSort(v,5);
}
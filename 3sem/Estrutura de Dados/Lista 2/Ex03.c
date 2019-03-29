/*
3- Dado um vetor V com tamanho n e um inteiro p.
Faça uma função que separe dentro do mesmo vetor, os elementos
menores que p à esquerda e os maiores à direita.

n = 5
p = 2
init = 2;
final = n-3;

[ 1 , 2 , 5 , 7 , 3 ]
*/
#include <stdlib.h>
#include <stdio.h>


int *swap(int v[], int n, int p){
  int auxInicio = 0;
  int auxFinal = n-1;
  int auxSwap;

  for(int i = 0; i < n; i++){
    
    if(v[i] <  p){
      printf("no if 1\n");
      auxSwap = v[auxInicio];
      v[auxInicio] = v[i];
      v[i] = auxSwap;
      auxInicio += 1;
    }
    if (v[i] > p){
      printf("no if 2\n");
      auxSwap = v[auxFinal];
      v[auxFinal] = v[i];
      v[i] = auxSwap;
      auxFinal-=1;
    }
  }
  
  for(int j = 0; j < n; j++)
  {
    printf("%d\n", v[j]);
  }
  

  return v;
}

int main(){
  int v[] = { 1 , 3 , 5 , 2 , 7 };
  swap(v, 5, 2);
  return 0;
}
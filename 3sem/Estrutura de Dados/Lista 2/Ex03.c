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

  for(int i = 0; i < 3; i++){

    if(v[i] <  p){

      auxSwap = v[auxInicio];
      printf("No if 1\nTrocando v[auxInicio]: %d por v[i]: %d\n\n", v[auxInicio], v[i]);
      v[auxInicio] = v[i];
      v[i] = auxSwap;
      auxInicio += 1;
    }

    if (v[i] > p){
      auxSwap = v[auxFinal];
      printf("No if 2\nTrocando v[auxFinal]: %d por v[i]: %d\n\n", v[auxFinal], v[i]);
      v[auxFinal] = v[i];
      v[i] = auxSwap;
      auxFinal-=1;
    }
    if (v[i] == p) auxInicio +=1;
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

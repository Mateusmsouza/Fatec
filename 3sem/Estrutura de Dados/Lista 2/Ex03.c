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

  for(int i = 0; i < n - 1; i++){
    if ( v[i] < p ){
         auxSwap = v[auxInicio];
         v[auxInicio] = v[i];
         v[i] = auxSwap;
         auxInicio++;
    }
    if (v[i] > p){
        auxSwap = v[auxFinal];
        v[auxFinal] = v[i];
        v[i] = auxSwap;
        auxFinal--;
    }
    if ((v[i] == p) && (v[i+1] > v[i] ) ){
        auxSwap = v[i];
        v[i] = v[i=1];
        v[i+1] = auxSwap;
        auxInicio++;
    }else if(v[i] == p){
        auxInicio++;
    }

  }

  for(int j = 0; j < n; j++)
  {
    printf("%d, ", v[j]);
  }
  printf("\n");
  return v;
}

int main(){
  int v[] = { 1 , 5 , 2 , 6 , 7 };
  swap(v, 5, 5);
  return 0;
}

/*
4 - Escreva uma função iterativa que simule o comportamento da seguinte função recursiva. 
Use uma pilha.

#include <stdio.h>

int TTT (int x[], int n) {
   if (n == 0) return 0;
   if (x[n] > 0) return x[n] + TTT (x, n-1);
   else return TTT (x, n-1);
}

int main(){
  int v[] = {1,2,3,4};
  printf("retorno: %d\n", TTT(v, 3));
  return 0;
}

O que a função faz: Somar todos os elementos do array com exceção do último v[0]
Retornou 4 + 3 + 2 + 0 = 9

----- 1 inst.
v   |   
n   | 3 | 
v[n]| 4 |
Return 1 inst. 4 + TTT(v, 3-1)
Return 4 + 3 + 2 + 0
---- 2 inst.
n   | 2 |
v[n]| 3 |
Return 2 inst. 3 + TTT(v, 3-1)
Return 3 + 2 + 0
---- 3 inst.
n   | 1 | 
v[n]| 2 | 
Return 3 inst. 2 + TTT(v,1-1)
Return 2 + 0
---- 4 inst.
n   | 0
v[n]| 1
Return 0
*/
#include <stdio.h>
#include <stdlib.h>

// Função que retorna a soma dos elementos da pilha com exceção do último elemento.
int TTT(int v[], int t){
  int acumula = 0;
  
  for(t; t > 0; t--){
    acumula += v[t];
  }

  return acumula;
}

int main(){
  // criando pilha manualmente
  int v[] = {1,2,3,4};
  int t = 3;

  printf("Retorno da função TTT iterativa para a pilha: %d\n", TTT(v, 3));

  return 0;
}
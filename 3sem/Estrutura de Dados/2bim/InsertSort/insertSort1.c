/*
*--------------------------------------------------------
* Implementando um insert sort                          *
* Este insert selecionará ordena de forma crescente     *
*                                                       *
*-------------------------------------------------------*
* Autor: Mateus M. Souza, 2019
*/

#include <stdio.h>
#include <locale.h>

void assign(){
    printf("+--------------------------------+\n");
    printf("| Algoritmo: Insert Sort 1       |\n");
    printf("| Autor: Mateus Machado de Souza |\n");
    printf("|                                |\n");
    printf("| Faculdade de Tecnologia  de    |\n");
    printf("| São José dos Campos            |\n");
    printf("| Ano: 2019                      |\n");
    printf("+--------------------------------+\n\n");
}
#include <stdio.h>

void
insertSort(int v[], int n){
  int selecionado, i, j;
  // selecionando um elemento por vez, que será ordenado.
  // Começar selecionando a partir do elemento de índice 1
  // otimizará uma comparação disperçada dentro do for mais interno
  for(int i = 1; i < n ; i++){
    selecionado = v[i];

    // enquanto o elemento v[j] for maior do que o elemento selecionado
    // e j > 0 (para evitar que o j fique negativo)
    // o elemento será arrastado para frente no vetor, isto é 
    // o elemento de índice j+1
    for(j = i-1; j >= 0 && v[j] > selecionado; j--) v[j+1] = v[j];

    // quando o for mais interno terminar, j+1 deverá guardar o 
    // índice selecionado para guardar o elemento selecionado.
    // Ou seja, o for acima mais interno é usado para dois motivos:
    // a. empurrar todos os elementos maiores que o selecionado para frente
    // b. encontrar o índice anterior ao índice que o elemento selecionado deverá ficar.
    v[j+1] = selecionado;
  }

}

void 
printVetor(int v[], int n){
    printf("\n");
    printf("[");
    for(int a = 0; a < n; a++){
        if (a ==  n-1 )printf("%d", v[a]);
        else printf("%d, ", v[a]);
    }
    printf("]\n");
}


int main(void) {
  int v[] = {5,2,1,3,6};
  
  insertSort(v, sizeof(v)/sizeof(int));

  printVetor(v, sizeof(v)/sizeof(int));
  return 0;
}
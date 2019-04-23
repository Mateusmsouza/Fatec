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

void insertSort (int v[], int n){
    // Criando variável de troca
  int swap, i, j;

  // iniciando a iteração a partir do primeiro elemento, o algoritmo exige que haja pelo menos um elemento anterior para
  // realizar a comparação, por este motivo a iteração do for mais externo deve iniciar em 1.
  for (int j = 1; j < n; ++j) {
      int x = v[j];
      int i;
      for (i = j-1; i >= 0 && v[i] > x; --i)
        printf("I: %d ", i);
         v[i+1] = v[i];
    printf("\n");;
      v[i+1] = x;
   }


}
void printVetor(int v[], int n){
    printf("\n");
    printf("[");
    for(int a = 0; a < n; a++){
        if (a ==  n-1 )printf("%d", v[a]);
        else printf("%d, ", v[a]);
    }
    printf("]\n");
}

int main(){
  setlocale(LC_ALL, "Portuguese");
  assign();
  int tamanho = 5;
  int v[] = {5,2,3,4,1};

  printf("Vetor original:\n");
  printVetor(v, tamanho);

  insertSort(v, tamanho);

  printf("Vetor ordenado por insert sort:\n");
  printVetor(v, tamanho);
  return 0;
}

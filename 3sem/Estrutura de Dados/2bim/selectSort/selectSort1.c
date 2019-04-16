/*
*--------------------------------------------------------
* Implementando um select sort                          *
* Este select Sort selecionará o menor elemento em cada *
* varredura e o posicionará no inicio do vetor          *
*-------------------------------------------------------*
* Autor: Mateus M. Souza, 2019
*/
#include <stdio.h>
#include <locale.h>

int *selectSort(int v[], int n){
  int menor;
  int swap;

  // varrendo o vetor de 0 até o final
  for(int i = 0; i < n; i++)
  {
    // definindo que o menor começa em I para que os elementos já ordenados não sejam trocados
    menor = i;

    // Definindo J recebe I para que elementos já ordenados não sejam analisados na varredura
    for(int j = i; j < n; j++)
    {
      // se o elemento de índice menor é maior que o elemento do índice J
      // então menor recebe índice J
      if(v[menor] > v[j]) menor = j;
    }

    // Troca o menor elemento com o elemento que está no inicio do vetor.
    swap = v[menor];
    v[menor] = v[i];
    v[i] = swap;
  }

  // printando o vetor para testes.
  for(int a = 0; a < n; a++)
  {
    printf("%d ", v[a]);
  }
  printf("\n");

  return v;
}

void assign(){
    printf("+--------------------------------+\n");
    printf("| Algoritmo: Select Sort 1       |\n");
    printf("| Autor: Mateus Machado de Souza |\n");
    printf("|                                |\n");
    printf("| Faculdade de Tecnologia  de    |\n");
    printf("| São José dos Campos            |\n");
    printf("| Ano: 2019                      |\n");
    printf("+--------------------------------+\n");
}

int main(){
  int v[] = {5,2,3,4,1};
  selectSort(v,5);
}

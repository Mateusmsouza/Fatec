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
    printf("+--------------------------------+\n");
}

void insertSort (int v[], int n){

  for(int i = 1; i < n; i++)
  {
    int aux = v[i];

    for(int j = i-1 ; v[j] < aux; i--)
    {
      v[i+1] = v[i];
    }
    v[i+1] = aux;
    
  }
  

}
void printVetor(int v[], int n){
    printf("\n");
    for(int a = 0; a < n; a++){
        printf("%d ", v[a]);
    }
    printf("\n");
}

int main(){
  setlocale(LC_ALL, "Portuguese");
  assign();
  int tamanho = 5;
  int v[] = {5,2,3,4,1};

  insertSort(v, tamanho);
  printVetor(v, tamanho);
  return 0;
}
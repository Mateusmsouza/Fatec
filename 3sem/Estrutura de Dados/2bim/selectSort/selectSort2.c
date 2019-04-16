/*
*----------------------------------------------------
* Implementando um select sort                      *
* Este select Sort selecionará o maior elemento     *
* em cada varredura e o posicionará no fim do vetor *
*----------------------------------------------------
* Autor: Mateus M. Souza, 2019
*/
#include <stdio.h>
#include <locale.h>

int *selectSort(int v[], int n){
  int swap;
  int aux;

  // Iniciando o loop do final do vetor
  // e decrementando I que será a condição de parada do FOR mais interno
  for(int i = n-1; i > -1; i--)
  {

    // Swap será o índice do maior elemento a cada uma das varreduras
    swap = 0;

    // Varrendo o vetor até (incluindo) o índice I.
    // Esta varredurá impedirá que um elemento já ordenado seja analisado na varredura
    // já que ela tem critério de parada J <= I
    for(int j = 0; j <= i; j++)
    {
      // Caso elemento índice SWAP seja menor que elemento índice J, SWAP recebe J
      if(v[swap] < v[j]) swap = j;
    }

    // A troca do maior elemento é realizado
    // com o último elemento do vetor e o I será decrementado na próxima varredura.
    aux = v[swap];
    v[swap] = v[i];
    v[i] = aux;
  }

  // printando o vetor para testes
  for(int a = 0; a < n; a++)
  {
    printf("%d ", v[a]);
  }
  printf("\n");

  return v;
}

void assign(){
    printf("+--------------------------------+\n");
    printf("| Algoritmo: Select Sort 2       |\n");
    printf("| Autor: Mateus Machado de Souza |\n");
    printf("|                                |\n");
    printf("| Faculdade de Tecnologia  de    |\n");
    printf("| São José dos Campos            |\n");
    printf("| Ano: 2019                      |\n");
    printf("+--------------------------------+\n");
}

int main(){

  setlocale(LC_ALL, "Portuguese");
  assign();

  int v[] = {5,2,3,4,1};
  selectSort(v,5);
}

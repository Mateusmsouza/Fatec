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
  int swap;

  // iniciando a iteração a partir do primeiro elemento, o algoritmo exige que haja pelo menos um elemento anterior para
  // realizar a comparação, por este motivo a iteração do for mais externo deve iniciar em 1.
  for(int i = 1; i < n; i++)
  {

    // o j será iniciando sempre no elemento de índice anterior (i-1) em relação ao índice do for mais externo (i)
    // a condição de parada é:
    // 1 - o elemento do índice j não é maior do que seu sucessor j+1
    // 2- o j é um número positivo ou neutro ( j >= 0) para evitar que as comparações saiam da medida do vetor
    for(int j = i-1 ; v[j] > v[j+1] && j>=0; j--)
    {
        // caso o elemento de j seja maior que o elemento de j+1
        // a troca é realizada, já que isto significa que o elemento em J não está ordenado.
        // j é decrementado para que este elemento continue sendo comparado até que se encontre
        // o ponto exato onde ele estará ordenado no vetor.
        swap = v[j+1];
        v[j+1] = v[j];
        v[j] = swap;
    }

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

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void bubbleSort(int v[], int n){
    int auxiliar;

    for(int i = 0; i < n-1; n--){

        auxiliar = 0;

        for ( int j = i ; j < n - 1 ; j++){

            if (v[j] > v[j+1]){

                auxiliar = v[j];

                v[j] = v[ j+1 ];

                v[ j+1 ] = auxiliar;

            }

        }

    }

    // print

}

void printVetor(int v[], int n){
    printf("\n");
    for(int a = 0; a < n; a++){
        printf("%d ", v[a]);
    }
    printf("\n");
}

void assign(){
    printf("+--------------------------------+\n");
    printf("| Algoritmo: Bubble Sort 1       |\n");
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

  int tamanho = 5;
  int v[] = {5,2,3,4,1};
  bubbleSort(v,tamanho);
  printVetor(v, tamanho);
}

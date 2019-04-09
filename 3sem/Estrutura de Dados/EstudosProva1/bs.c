#include <stdlib.h>
#include <stdio.h>

int buscabinaria(int v[], int x, int n){
    int ini = 0;
    int fim = n-1;
    int meio;
    while (ini <= fim){
        meio = (ini+fim)/2;
        if (v[meio] == x){
            return meio;
        }
        else if(v[meio] > x){
            fim=meio-1;
        }
        else ini=meio+1;
    }
    return -1;
}

int main(){
  int v[] = {1,2,3,4,5,6};

  printf("Procurando pelo 3: %d\n", buscabinaria(v,3, 6));
  return 0;
}

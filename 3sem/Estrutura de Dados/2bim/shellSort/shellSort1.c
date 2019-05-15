#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// implementação de round para arredondar para cima caso impar
int roundGap(int x){
  if (x == 1) return 0;
  return (x%2) == 0? x/2 : (x+1)/2;
}

int *
devolveVetorgaps(int x){
  int tempGap = x;
  int toMalloc = 0;

   x = roundGap(x);
  while (x > 0)
  {
    
    toMalloc++;
    
    x = roundGap(x);
  } 
  
  int *vetorMallocs = malloc(sizeof(int) * toMalloc);
  tempGap = roundGap(tempGap);
  for (int i = 0; i <= sizeof(vetorMallocs)/sizeof(int); i++)
  {
    vetorMallocs[i] = tempGap;
    printf("Inserindo na posição %d o gap %d\n", i, tempGap);
    tempGap = roundGap(tempGap);
  }
  
  return vetorMallocs;
}

void
shellSort(int v[], int n, int gap, int nGap){
  int swap, i, j, currentGap;
  
  int *vetorGaps = devolveVetorgaps(gap);

  for (i = 0 ; i < nGap ; i++){

    currentGap = vetorGaps[i];
    for ( j = 0; j < n; j++)
    {

      // se o indice nao estoura tamanho do vetor
      if (n > (j+currentGap)){

        if ( v[j] > v[j+currentGap]){

          swap=v[j], v[j] = v[j+currentGap], v[j+currentGap] = swap;

        }
      }
      
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

void main(){
  int v[] = {5,2,3,4,1};
  
  shellSort(v, 5, 5, 5);
  printVetor(v, 5);
}

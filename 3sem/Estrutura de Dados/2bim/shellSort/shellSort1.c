#include <stdio.h>
#include <locale.h>

// implementação de round para arredondar para cima caso impar
int roundGap(int x){
  return (x%2) == 0? x/2 : (x+1)/2;
}

// 3 8 5 2 7 
void
shellSort(int v[], int n, int gap){
  int swap;
  int desordVet = n;
    
    for(int i = 0; i < desordVet && gap > 0; i++, desordVet--)
    {
      printf("entrou no for\n");
    
      for(int j = (0 - gap); (j+gap) < n; j = j+gap)
      {
        printf("entrou no for mais interno\nj:%d", j);
        if (v[j] > v[j+gap]){
          swap = v[j];
          v[j] = v[j+gap];
          v[j+gap] = swap;
        }
      }
      
      gap = roundGap(gap);

      swap = v[0];
      v[0] = v[desordVet];
      v[desordVet] = swap;
    }
    

    //gap = roundGap(gap);
  //}
  

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
  shellSort(v, 5, 3);
  printVetor(v, 5);
}
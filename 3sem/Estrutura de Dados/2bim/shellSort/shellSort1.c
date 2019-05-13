#include <stdio.h>
#include <locale.h>

// implementação de round para arredondar para cima caso impar
int roundGap(int x){
  return (x%2) == 0? x/2 : (x+1)/2;
}

// 3 8 5 2 7
void
shellSort(int v[], int n, int gap){
  int swap, i, j;
  int desordVet = n;

    // enquanto gap for maior que zero
    while(gap > 0){
        printf("GAP: %d\n", gap);
        // for de 0 (inicio do vetor) até i+gap ou seja, o pulo
        // seja maior do que o tamanho do vetor.
        // quanto isso ocorrer, o gap não é mais possivel
        for(i = 0; (i + gap) < n  ; i++){

            // neste passo andaremos com um J e o gap. Por isso j recebe i.
            j = i;
            // o while fará o swap do gap enquanto o v posição j for maior que o próximo salto
            while( v[j] > v[j+gap] && j+gap < n){

                swap = v[j], v[j] = v[j+gap], v[j+gap] = swap;
                j += gap;
            }

        }
        printf("gap:%d\n", gap);
        if(gap == 1) gap = 0;
        gap = roundGap(gap);
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

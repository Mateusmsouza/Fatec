/*2- Dado um vetor contendo dois subvetores ortdenados v[i..h-1] e v[h..n].
Fa�a uma fun��o que retorne este vetor ordenado.*/

#include <stdio.h>
#include <stdlib.h>

int *ordena(int v[], int i, int h, int n){
    // aux var
    int auxi=i, auxh=h-1;

    // swap var
    int xtemp;

    for (; auxi < h; auxi){
        printf("entrou no for\n");
        if (v[auxi] > v[auxh]){
            // troca posição do vetor se v[auxi] maior que v[auxh]
            xtemp = v[auxi];
            v[auxi] = v[auxh];
            v[auxh] = xtemp;
            
            // incrementa auxiliar h
            auxh=auxh+1;
        }else{
            // se v[auxi] não é maior que v[auxh] então auxi é incrementado, considera-se que a ordenação dos dois elementos já está correta.
            auxi=auxi+1;
        }

    }

    for (int j=0; j<n; j++){
        printf("%d\n", v[j]);
    }
}

int main(){
    int v[] = {1,1,2,1,3,4,4};
    ordena(v, 0, 4, 7);
    return 0;
}

/*2- Dado um vetor contendo dois subvetores ortdenados v[i..h-1] e v[h..n].
Faça uma função que retorne este vetor ordenado.*/

#include <stdio.h>
#include <stdlib.h>

int *ordena(int v[], int i, int h, int n){
    int auxi=i, auxh=h;
    int xtemp;

    for (int x=0; x < h; x++){
        printf("a");
        if (v[auxi] > v[auxh]){

            xtemp = v[auxi];
            v[auxi] = v[auxh];
            v[auxh] = xtemp;
            auxi=auxi+1;
        }else{
            auxh=auxh+1;
        }

    }

    for (int j=0; j<n; j++){
        printf("%d\n", v[j]);
    }
}

int main(){
    int v[] = {1,2,2,1,3,3,4};
    ordena(v, 0, 5, 7);
    return 0;
}

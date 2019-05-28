#include <stdio.h>
#include <stdlib.h>

void
intercala(int p, int q, int r, int v[]){
	int i, j, *w;
	int k = 0;

	w = malloc(sizeof(int) * (r-p)) ;

	i = p, j = q;

	while (i < q && j < r){
		if(v[i] <= v[j]) w[k++] = v[i++];
		else w[k++] = v[j++];
	}
	while(i<q) w[k++] = v[i++];
	while(j<r) w[k++] = v[j++];

	for (i = p ; i < r; i++) v[i] = w[i-p];
    free(w);
}

void
MergeSort(int p, int r, int v[]){
    if (p < r-1){
        int q = (p+r)/2;
        MergeSort(p, q, v);
        MergeSort(q, r, v);
        intercala(p, q, r, v);
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

  MergeSort(0,5, v);
  printVetor(v, 5);
}

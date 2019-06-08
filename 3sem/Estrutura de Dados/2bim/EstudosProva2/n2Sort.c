#include <stdio.h>
#include <stdlib.h>

/* O algoritmo de ordenação pelo método da bolha é um dos piores.
Sua lógica consiste em percorrer um vetor v[0..x] n^2 vezes e comparar 
elemento ao seu próximo elemento (x e x+1), caso esteja desordenado, ordena-se estes dois elementos.
Sua complexidade é de n^2.*/
void
bubbleSort(int v[], int n){
	int temp;
	for (int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; j++){
			if(v[j] >= v[j+1]){
				temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
			}
		}
	}
}


/*O algoritmo de ordenação por seleção possui uma lógica bem simples: 
percorrer o vetor e selecionar o menor, aloca-lo na posição inicial do vetor,
percorrer novamente e selecionar o menor, aloca-lo na segunda posição do vetor e assim vai.
Sua complexidade é de n^2*/
void
selectionSort(int v[], int n){

  for (int i = 0; i < n-1; i++)
  {
    int smallestElementIndex = i;
    for (int j = i+1; i < n-1; i++)
    {
      if (v[i] > v[j]) smallestElementIndex = j;
    }
    
    int swap = v[i];
    v[i] = v[smallestElementIndex];
    v[smallestElementIndex] = swap;
  }
  
}



int main(){
	int v[] = {4,3,1,2,5,7,8};

	bubbleSort(v, 7);
  
	for (int i = 0; i < 7; ++i)
	{
		printf("%d\n", v[i]);
	}
}
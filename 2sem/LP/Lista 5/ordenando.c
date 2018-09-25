#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void ShellSort(char *vetor, int tam) {

    int i, j;
    char atual;
    int h = 1;

    while(h < tam){
        h = 3*h+1;
    }

    while(h > 1){
        h = h / 3;

        for(i = h; i < tam; i++){
           atual = vetor[i];
            j = i - h;

            while( (j >=0) && (atual < vetor[j])){
                vetor[j + h] = vetor[j];
                j = j - h;
            }

            vetor[j + h] = atual;
        }
    }
}




void SelectionSort(char *vetor, int tam){

	    int posicaoDoMenorValor, i, j;
        char aux;

	for(i = 0; i < tam; i++){
	        posicaoDoMenorValor = i;

	        for(j = i + 1; j < tam; j++){
	            if(vetor[j] < vetor[posicaoDoMenorValor]){
	                posicaoDoMenorValor = j;
	            }
	        }

	        if(posicaoDoMenorValor != i){
	            aux = vetor[i];
	            vetor[i] = vetor[posicaoDoMenorValor];
	            vetor[posicaoDoMenorValor] = aux;
	        }
	    }
	}


void BubbleSort(char *vet, int t){
    char aux;

    for (int i=0; i<t; i++){
        for (int j=i; j<t; j++){
            if (vet[i] > vet[j]) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

void InsertionSort(char *v, int n) {
    char aux;
    int j;
    for (int i=1; i < n; i++){
        aux = v[i];
        for (j=i; j > 0 && aux < v[j -1]; j--)
            v[j] = v[j -1];
        v[j] = aux;
    }
}


void PrintVetor(char *v,int tam) {
    for (int i=0; i<tam; i++)
        printf("%c ", v[i]);
}

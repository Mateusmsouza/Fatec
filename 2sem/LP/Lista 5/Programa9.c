
/*Usando Linguagem C, implemente um programa que leia um conjunto de caracteres digitados pelo usuário e armazene-os em um vetor.

O usuário deve informar quantos caracteres serão digitados. Após a digitação dos caracteres, o programa mostrará um menu para que o usuário escolha por qual algoritmo de ordenação, dentre pelo menos quatro, ele quer que os caracteres sejam ordenados alfabeticamente.

Cada algoritmo de ordenação deve ser uma função de uma biblioteca chamada "ordenando.h", criada por você.*/
#include <stdio.h>
#include "ordenando.h"

int main(int argc, char const *argv[])
{
	int aux;
	printf("How many characters will be typed?\n");
	scanf("%d", &aux);

	char vetor[aux];


	printf("Type your string\n");
	scanf("%s", vetor);
	printf("%s", insertion_sort(vetor));
	printf("%s", selection_sort(vetor));
	printf("%s", shellSort(vetor));
	printf("%s", bubble_sort(vetor));

	return 0;
}
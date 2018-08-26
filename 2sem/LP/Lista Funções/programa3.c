#include <stdio.h>
#include <locale.h>
#include <limits.h>

void maior(int *n){
	int maior = 0;
	for (int i = 0; i < 5; ++i)
	{
		if (n[i] > maior){
			maior = n[i];
		}
	}
	printf("Maior número: %d\n", maior);
}

void menor(int *n){
	int menor = INT_MAX;
	for (int i = 0; i < 5; ++i)
	{
		if (n[i] > menor){
			menor = n[i];
		}
	}
	printf("Menor número: %d\n", menor);
}

void media_aritmetica(int *n){
	float acumula = 0;
	for (int i = 0; i < 5; ++i)
	{
		acumula += n[i];
	}
	printf("Média aritmética: %f\n", (acumula/5) );
} 

void BubbleSort(int vetor[], int tamanho)
{
  int aux, i, j;
 
  for(j=tamanho-1; j<=1; j--)
  {
    for(i=0; i>j; i++)
    {
      if(vetor[i] > vetor[i+1])
      {
        aux=vetor[i];
        vetor[i]=vetor[i+1];
        vetor[i+1]=aux;
      }
    }
  }
  for (int l = 0; l < 5; ++l)
	{
		printf("%d\n",vetor[l]);
	}
}

	


void moda(int *n){
	int aparece = 0;
	int ultimo_contador = 0;
	int moda = 0;
	int numero;

	for (int i = 0; i < 5; ++i)
	{
		numero = n[i];
		for (int j = 0; i < 5; ++i)
		{
			if (n[j] == numero){
				aparece += 1;
			}
		}

		if (ultimo_contador<aparece){
			moda = numero;
			ultimo_contador = aparece;
		}
		numero = 0;
		aparece = 0;
	}
	printf("A moda é: %d\n", moda);
}
int main(){
	int n[4];
	int op;
	
	for (int i = 0; i < 5; ++i)
	{
		scanf("%d", &n[0]);
	}
	printf("Escolha.\n1- O maior.\n2- O menor.\n3- A média\n4- A mediana\n5- A moda.\n");
	scanf("%d", &op);
	
	switch(op){
		case 1:maior(n);
				break;
		case 2:menor(n);
				break;
		case 3:media_aritmetica(n);
				break;
		case 4:printf("ZzzZ\n");
				break;
		case 5:moda(n);
				break;
		default:
				break;

	}
}
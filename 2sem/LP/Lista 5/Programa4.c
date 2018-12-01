/* Faça um programa que leia, via teclado, duas matrizes de números inteiros do tipo 4 x 4. O programa deverá apresentar um menu para as operações de soma e subtração das duas matrizes. Após o usuário escolher a operação a ser feita, o programa mostrará a matriz resultante. */
#include <stdio.h>
#include <locale.h>

void soma_matriz(int matriz_y[4][4],int matriz_x[4][4]){
	int matriz_resultante[4][4];

	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			matriz_resultante[y][x] = matriz_y[y][x] + matriz_x[y][x];
		}
	}
	printf("Matriz formada após a soma:\n");
	for (int y = 0; y <=3; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{

			printf("%d ", matriz_resultante[y][x]);
		}
		printf("\n");
	}

}

void subtrai_matriz(int matriz_y[4][4],int matriz_x[4][4]){
	int matriz_resultante[4][4];

	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			matriz_resultante[y][x] = matriz_y[y][x] - matriz_x[y][x];
		}
	}
	printf("Matriz formada após a subtração:\n");
	for (int y = 0; y <=3; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{

			printf("%d ", matriz_resultante[y][x]);
		}
		printf("\n");
	}

}

int main(int argc, char const *argv[])
{	int matriz_y[4][4];
	int matriz_x[4][4];
	int decisao;

	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			printf("Forneça um valor.\n");
			scanf("%d", &matriz_y[y][x]); 
		}
	}
	printf("Matriz Formada:\n");
	for (int y = 0; y <=3; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{

			printf("%d ", matriz_y[y][x]);
		}
		printf("\n");
	}
	// nova matriz
	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			printf("Forneça um valor.\n");
			scanf("%d", &matriz_x[y][x]); 
		}
	}
	printf("Matriz Formada:\n");
	for (int y = 0; y <=3; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{

			printf("%d ", matriz_x[y][x]);
		}
		printf("\n");
	}

	printf("O que deseja fazer?\n1-Somar as matrizes\n2-Subtrair as matrizes\n");
	scanf("%d", &decisao);
	switch(decisao){
		case 1: soma_matriz(matriz_y, matriz_x);
			break;
		case 2: subtrai_matriz(matriz_y, matriz_x);
			break;

		default:printf("Invalido.\n");
				break;
	}

	return 0;
    system("pause");
}
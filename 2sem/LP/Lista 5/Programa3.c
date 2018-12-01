/*Exploração de planetas. Em 2142, o capitão McNamara viaja sempre com  uma equipe de cinco naves. Ao se aproximar do planeta a ser explorado, é preciso que haja uma lista ordenada com as distâncias de cada nave em relação ao planeta, de forma a iniciar os procedimentos de aterrissagem. O capitão pede sua ajuda para implementar um programa que tenha por entrada as coordenadas do planeta a ser explorado e as coordenadas de cada uma das cinco naves. Como saída, o programa fornece uma lista ordenada por distância, contendo os índices de cada nave. Exemplo:
Entrada:
coordenadas do planeta (xp, yp, zp) = (0,4,-1)
coordenadas da nave 0 (x[0],y[0],z[0]) = (5,4,-1)
coordenadas da nave 1 (x[1],y[1],z[1]) =...
....
coordenadas da nave 4 (x[4],y[4],z[4]) =(1,4,-1)

Saída:
Sequência das naves: 4,0,1,2,3
Observação: crie uma biblioteca que contenha funções para cálculo de
a) distância entre dois pontos com duas dimensões
b) distância entre dois pontos com três dimensões
c) distância entre dois pontos com uma dimensão*/

#include <stdio.h>
#include <locale.h>
#include <math.h>


typedef struct NAVE{
	int x,y,z;
	float disancia_ate_ponto;
}NAVE;

float calcula_distancia(NAVE nave, int x, int y, int z){
	return sqrt((nave.x - x) * (nave.x - x)) + ((nave.y - y) * (nave.z - z));
}

int main(){
	int xp, yp, zp;
	NAVE navezinha[5];
	int controlador_ranking[5], temp;
	float mais_proximo = 999.0;

	for (int i = 0; i < 5; ++i)
	{
		controlador_ranking[i] = 9;
	}

	printf("Entre com as coordenadas do planeta separadas por virgula\n");
	scanf("%d,%d,%d", &xp, &yp, &zp);
	printf("Coordenadas gravadas com sucesso!\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("Entre com as coordenadas da nave %d separadas por vigula\n", i);
		scanf("%d,%d,%d", &navezinha[i].x, &navezinha[i].y, &navezinha[i].z);
		navezinha[i].disancia_ate_ponto = calcula_distancia(navezinha[i], xp, yp, zp);
		printf("Distancia até o ponto: %.2f\n", navezinha[i].disancia_ate_ponto);
	}

	// Parte abaixo para manipulação está com problema
	printf("Posição das naves em relação ao ponto a ser explorado: (A posição 0 é a mais próxima)\n");
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if ((navezinha[j].disancia_ate_ponto < mais_proximo) && (j != controlador_ranking[0] &&  j != controlador_ranking[1] && j != controlador_ranking[2] && j != controlador_ranking[3] && j != controlador_ranking[4])){
				mais_proximo = navezinha[j].disancia_ate_ponto;
				temp = j;
				
			}
			
			controlador_ranking[i] = temp; 

		}
		printf("Nave de nº:%d esta na posição %d em relação ao ponto a ser explorado.\n", temp, i);
		mais_proximo = 999;
	}

	return 0;
    system("pause");
}

// Essa parte vai para o header
float distancia_uma_dimensao(float x1,float x2){
	return sqrt((x1 - x2));
}

float distancia_duas_dimensoes(float x1,float x2, float y1, float y2){
	return sqrt((x1 - x2) + (y1 - y2));
}

float distancia_tres_dimensoes(float x1,float x2, float y1, float y2, float z1, float z2){
	return sqrt((x1 - x2) + (y1 - y2) + (z1 - z2));
}
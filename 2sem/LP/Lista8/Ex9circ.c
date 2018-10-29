//9-Faça um programa que use uma estrutura para armazenar os atributos de uma circunferência C,isto é, 
//raio e centro. O programa deve permitir as seguintes funcionalidades: a) calcular comprimento da 
//circunferência b) calcular a área do círculo envolto pela circunferência. Use funções.
#include <stdio.h>
#include <locale.h>

typedef struct
	{
		float raio;
		float centro;
	}circ;

float calc1(circ circulo){
	// C = 2·π·r

	return 2 * 3.14 * circulo.raio;
}

float calc2(circ circulo){
	// A = r² . π
	return 3.14 * (circulo.raio * circulo.raio);
}

int main(int argc, char const *argv[])
{

	circ Circ;

	printf("Insira o raio\n");
	scanf("%f", &Circ.raio);
	printf("Insira o centro\n");
	scanf("%f", &Circ.centro);

	printf("Comprimento: %.2f Área:%.2F\n", calc1(Circ), calc2(Circ));


	return 0;
}
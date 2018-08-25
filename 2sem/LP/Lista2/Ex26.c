/*Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro
em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com
a tabela abaixo:

CONSUMO menor que 8 MENSAGEM Venda o carro!
entre 8 e 11 Econômico!
maior ou igual a 12 Super econômico!*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
	float km, litros, consumo;

	printf("Entre com a quilometragem percorrida e posteriormente os litros de gasolina consumidos\n");
	scanf("%f", &km);
	scanf("%f", &litros);

	consumo = (km/litros);
	if (consumo < 8){
		printf("Venda o carro!\n");
	}else if(consumo >= 8 || consumo <= 11){
		printf("Econômico!\n");
	}else if(consumo >= 12){
		printf("Super econômico\n");
	}

	return 0;
}
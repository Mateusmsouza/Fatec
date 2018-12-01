#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
	int idade = 0;
	char primeirodigito[3];

	printf("Bem vindo, siga as instruções (este programa funciona para usuários até 99 anos de idade)\n");
	printf("1- Pense em seu mês de nascimenti\n");
	printf("2- Multiplque por 2\n");
	printf("3- Adiciona 5\n");
	printf("4- Multiplque por 50\n");
	printf("5- Adicione a sua idade atual\n");
	printf("6- Subtraia 365\n");

	printf("Entre com o total\n");
	scanf("%d", &idade);

	idade += 115;
	
	sprintf(primeirodigito, "%d", idade);
	printf("Idade %d, mês de nascimento: %c\n", (idade%100), primeirodigito[0]);
	
	return 0;
}
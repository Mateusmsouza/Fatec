/*a- Peça para o espectador escolher uma carta qualquer e memorizá-la.
b- Peça para ele multiplicar por dois o valor da carta, mentalmente.
c- Somar cinco e depois multiplicar por cinco.
d- Peça para memorizar o resultado da conta.
e- Agora, peça para escolher outra carta e somar o valor dela com o primeiro valor
memorizado, ou seja, o resultado da conta.
f- Peça para ele falar o valor total. Desse valor, subtraia 25, com resultado de dois algarismos você descobrirá o valor das duas cartas pensadas. (Ex: se o valor total foi 76, menos 25, é igual a 51, a primeira carta escolhida foi o número 5, e a segunda carta escolhida foi o número 1, ou seja, o ás.)*/
#include <stdio.h>
#include <locale.h>
// c1 4
// c2 5
// 8 + 5 = 13 * 5 = 65 + 5 = 70 - 25 = 45

int main(int argc, char const *argv[])
{
	struct carta
	{
		int value;
		char carta[2];
	};
	struct carta cartinha;
	printf("Escolha uma carta e memorize\n");
	printf("Multiplique por dois\n");
	printf("Some cinco e depois multiplique por cinco\n");
	printf("Pegue outra carta e some o valor dela\n");
	printf("Informe o total\n");
	scanf("%d", &cartinha.value);

	cartinha.value = cartinha.value - 25;
	sprintf(cartinha.carta, "%d", cartinha.value);

	printf("Carta 1 é: %c e Carta 2 é :%c\n", cartinha.carta[0], cartinha.carta[1]);
	return 0;
}
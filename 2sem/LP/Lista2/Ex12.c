//Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
//inválido”. Se o número for positivo, calcular o logaritmo deste numero.

#include <stdio.h>
#include <math.h>

int main(){
	int numero;

	scanf("%d", &numero);
	if (numero >= 0){
		printf("%f\n", (log(numero)));
		return 0;
	}

	printf("Invalido.\n");
	return 0;

}
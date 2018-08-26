#include <stdio.h>
#include <locale.h>
float combustivel = 0;

void Andar(){
	if (combustivel >= 1){
		printf("2 km foram andados e 1 litro de gasolina foi gasto\n");
		combustivel -= 1;
	}else{
		printf("Não há combustivel suficiente para andar.\n");
	}

}

float obterGasolina(){
	return combustivel;
}

void adicionarGasolina(float litros){
	combustivel += litros;
	printf("Gasolina adicionada com sucesso.\n");
}

int main(){
	#define consumo 2; // Consumo de 2 litros km por litros

	int op = 0;
	float quantidade=0;

	do {
		printf("Escolha uma opção.\n1- Andar 2km com o carro.\n2- Verificar gasolina.\n3-Abastecer.\n 666 - sair");
		scanf("%d", &op);

		switch(op){
			case 1:
					Andar();
					break;
			case 2:
					printf("%.2f",obterGasolina());
					break;
			case 3:
					printf("Quanta gasolina?\n");
					scanf("%f", &quantidade);
					adicionarGasolina(quantidade);
		}		

	}while (op != 666);

	return 0;
}
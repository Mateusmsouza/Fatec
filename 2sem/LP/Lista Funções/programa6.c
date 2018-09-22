#include <stdio.h>
#include <locale.h>
#include <string.h>

char tipoCombustivel;
float ValorLitro;
float quantidadeCombustivel;

void abastecerPorValor(float valor){
	printf("Colocado: %.2f\n", (valor/ValorLitro));
}
void abastecerPorLitro(float litros){
	printf("Pagará %2.f", (litros * ValorLitro));
	alterarQuantidadeCombustivel((litros * ValorLitro));
}
void alterarValor(float valor){
	ValorLitro = valor;
}
void alteraCombustivel(char c){
	strcpy(tipoCombustivel, c);
}
void alterarQuantidadeCombustivel(float cansei){
	quantidadeCombustivel += cansei;

}

int main(){

	scanf("%f", &ValorLitro);
	scanf("%f", &quantidadeCombustivel);
	scanf("%s", tipoCombustivel);

	int op=0;

	do{
		printf("Selecione.\n1-Abastecer_valor\n2-Abastecer_litro\n3-Alterar_valor\n4-alterar_combustivel\n5-alterarquantidadecombustivel\n666- sair\n");

		scanf("%d", &op);

		switch(op){
			case 1:
				abastecerPorValor();
				break;
			case 2:
				abastecerPorLitro();
				break;
			case 3:
				alterarValor();
				break;
			case 4:
				alteraCombustivel();
				break;
			case 5:
				alterarQuantidadeCombustivel();
				break;
			default:
				break;

		}


	}while (op !=666);


	
	system("pause");
	return 666;
}

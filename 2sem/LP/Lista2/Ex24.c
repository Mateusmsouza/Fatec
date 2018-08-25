//Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
//possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS
//8%). Faça um programa em que o usuário entre com o valor e o estado destino do
//produto e o programa retorne o preço final do produto acrescido do imposto do estado
//em que ele será vendido. Se o estado digitado não for válido, mostrar uma mensagem
//de erro.
#include <string.h>
#include <stdio.h>
#include <locale.h>

int main(){
	char estado[3];
	float valor;

	printf("Insira o estado (MAIUSCULO).\n");

	fgets(estado, sizeof estado, stdin);
	printf("Insira o valor\n");
	scanf("%g", &valor);


	if (strcmp(estado, "MG")==0){
			printf("Preço final: %g\n", (valor * 1.07));
		
	}else if (strcmp(estado, "SP")==0){
			printf("Preço final: %g\n", (valor * 1.12));
	}else if (strcmp(estado, "RJ")==0){
			printf("Preço final: %g\n", (valor * 1.15));
	}else if(strcmp(estado, "MS")==0){
			printf("Preço final: %g\n", (valor * 1.08));
	
	}else{
		printf("NO\n");
	}		

	return 0;
}
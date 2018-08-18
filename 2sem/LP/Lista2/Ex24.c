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
	scanf("%f", &valor);


	valor = strcmp(estado, 'MG');
	printf("%s", valor);

	/*if (estado == 'MG'){
			printf("Preço final: %.2f", (valor + (valor * 0.07)));
		
	}else if (estado == 'SP'){
			printf("Preço final: %.2f", (valor + (valor * 0.12)));
	}
	
		case 'SP':
			
			break;
		case 'RJ':
			printf("Preço final: %.2f", (valor + (valor * 0.15)));
			break;
		case 'MS':
			printf("Preço final: %.2f", (valor + (valor * 0.08)));
			break;
		default:
			printf("FUCK IT!\n");
			break;*/
	

	return 0;
}
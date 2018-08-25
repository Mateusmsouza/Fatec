//Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida. 
//Escreva uma mensagem de erro se a opção for inválida.
//Escolha a opção:
//1- Soma de 2 números.
//2- Diferença entre 2 números (maior pelo menor).
//3- Produto entre 2 números.
//4- Divisão entre 2 números (o denominador não pode ser zero).Opção:

#include <stdio.h>
#include <locale.h>

int main(){
	int A;
	int B,C;

	printf("Entre com a operação\n");
	printf("1- Soma de 2 números.\n");
	printf("2- Diferença entre 2 números (maior pelo menor).\n");
	printf("3- Produto entre 2 números.\n");
	printf("4- Divisão entre 2 números (o denominador não pode ser zero).Opção:\n");
	scanf("%d", &A);
	printf("Entre com os numeros para a operação\n");

	switch(A){
		case 1:
			scanf("%d", &B);
			scanf("%d", &C);
			printf("%d\n", (C+B));
			break;

		case 2:
			scanf("%d\n", &B);
			scanf("%d\n", &C);
				
			if (C > B){
				printf("%d\n", (C - B));
			}else{
				printf("%d\n", (B - C));
			}
			break;
		case 3:
			printf("%d\n", (B * C));
			break;

		case 4:
			if((B != 0) && (C!=0)){
				if (B > C){
					printf("%d\n", (B/C));
				}else{
					printf("%d\n", (C/B));
				}
			}
			break;

		default:printf("Invalido\n");
				break;
	}

	return 0;
}



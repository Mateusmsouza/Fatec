//Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
//aposentar. As condições para aposentadoria são
//• Ter pelo menos 65 anos,
//• Ou ter trabalhado pelo menos 30 anos,
//• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
#include <stdio.h>


int main(){
	int idade, tempo_servico;

	printf("Entre com sua idade e tempo de serviço\n");
	scanf("%d", &idade);
	scanf("%d", &tempo_servico);

	if ((idade > 64) || (tempo_servico > 29) || ((idade>59) && (tempo_servico>24))){
		printf("Pode se aposentar\n");
		return 1;
	}

	printf("Não pode se aposentar\n");
	return 0;
}
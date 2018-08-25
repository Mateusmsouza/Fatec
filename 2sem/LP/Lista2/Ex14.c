//A nota final de um estudante é calculada a partir de três notas atribuı́das entre o intervalo
//de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral
//e a um exame final. A média das três notas mencionadas anteriormente obedece aos
//pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo
//com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9), de
//recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.

#include <stdio.h>
#include <locale.h>

int main(){
	float trab_lab,av_sem, exame, media;

	scanf("%f", &trab_lab);
	scanf("%f", &av_sem);
	scanf("%f", &exame);
	media = ((trab_lab*2) + (av_sem * 3) + (exame * 5))/7;

	if (media > 0.0 && media <= 2.9){
		printf("reprovado.\n");
	}
	else if (media>=3.0 && media<=4.0){
		printf("exame.\n");
	}
	else {
		printf("Aprovado.\n");
	}



	return 0;
}
//Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e
//a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno
//e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
//superior a 60 pontos.
#include <stdio.h>

int main(){
	float N1, N2, N3, media=0;

	scanf("%f", &N1);
	scanf("%f", &N2);
	scanf("%f", &N3);

	media = ((N1 + N2 + (N3 * 2)));
	media = media / (N1+N2+N3);
	printf("%f\n", media);

	if (media > 60){
		printf("Você foi aprovado\n");
	}else{
		printf("Você não foi aprovado\n");
	}

	return 0;
}
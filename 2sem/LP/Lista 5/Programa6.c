/* 
Faça um programa para corrigir uma prova com 10 questões de múltipla escolha (a, b, c, d ou e), em uma turma com 3 alunos. Cada questão vale 1 ponto. Leia o gabarito, e para cada aluno leia sua matrícula (número inteiro) e suas respostas. Calcule e escreva, para cada aluno, sua matrícula, suas respostas, e sua nota. O percentual de aprovação, assumindo média 7.0.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	char answer[10], proof_template[10];
	int registration, score[10], aux=0;
	
	printf("Type the proof template.\n");
	for (int i = 0; i < 10; ++i)
	{
		scanf("%s", &proof_template[i]);
	}

	for (int i = 0; i < 3; ++i)
	{
		printf("student %d, type your registration.\n", i);
		scanf("%d", &registration);
		printf("student %d, type your answers.\n", i);
		for (int j = 0; j < 10; ++j)
		{
			scanf("%s", &answer[j]);
		}

		for (int k = 0; k < 10; ++k)
		{
			if ((answer[k] == proof_template[k])){
				//printf("entrou no if: %s \n", answer[k]);
				++aux;
			}
		}

		printf("The student %d (registration number %d) took score %d\n", i, registration, aux);
		if (aux >= 7){
			printf("Approved\n");
		}else{
			printf("Disapproved\n");
		}
		aux = 0;
	}

	return 1;
    system("pause");

}
//Faça uma prova de matemática para crianças que estão aprendendo a somar números
//inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na
//tela a pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a
//resposta. Faça cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas
//corretas, além de quantas vezes o aluno acertou.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main (){
	int A, B, resposta, count=0;

	for (int i = 0; i < 5; ++i)
	{
		srand(time(NULL));
		A = rand()%100;
		B = rand()%100;
		printf("Qual a soma de:%d e %d?\n", A,B);
		scanf("%d", &resposta);

		if (resposta == (A+B)){
			printf("Parabéns! VOCÊ ACERTOU!\n");
			++count;
		}else{
			printf("Você errou. A resposta corretas é %d\n", (A+B));
		}
	}

	printf("Acertos totais: %d\n", count);
	return 0;
}
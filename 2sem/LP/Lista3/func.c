#include <stdio.h>
#include <limits.h>
#include <locale.h>
#include "func.h"

/*
Fac¸a um programa que determine o mostre os cinco primeiros multiplos de 3, conside- ´
rando numeros maiores que 0 
*/

void exercicio1(){
	int i;

	for (int i = 1; i < 16; ++i)
	{
		if((i%3)==0){
			printf("Multiplo de 3:%d\n", i);
		}
	}

}

/* Escreva um programa que escreva na tela, de 1 ate 100, de 1 em 1, 3 vezes. A primeira ´
vez deve usar a estrutura de repetic¸ao˜ for, a segunda while, e a terceira do while. */

void exercicio2(){
	int i;

	for (int i = 0; i < 101; ++i)
	{
		printf("%d\n", i);
	}
	i = 0;
	printf("-----------\n");
	while(i<100){
		i++;
		printf("%d\n", i );
	}
	i = 0;
	printf("-----------\n");
	do{
		i++;
		printf("%d\n", i);
	}while(i<100);
}

/*
Fac¸a um algoritmo utilizando o comando while que mostra uma contagem regressiva
na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” apos a ´
contagem.*/

void exercicio3(){
	int i = 10;
	printf("---------\n");
	while(i>=0){
		printf("%d\n", i);
		i--;
	}
	printf("FIM\n");
}

/*Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000
em 1000, imprimindo seu valor na tela, ate que seu valor seja 100000 (cem mil). */

void exercicio4(){
	int i;
	for (int i = 0; i <=100000; i=i+1000)
	{
		printf("%d,",i);
	}
	printf("\n");
}

/*Fac¸a um programa que pec¸a ao usuario para digitar 10 valores e some-os*/
void exercicio5(){
	int values=0,i, t;

	for (int i = 0; i < 10; ++i)
	{
		printf("Insira um valor.\n");
		scanf("%d", &t);
		values = values + t;
	}
	printf("Soma: %d\n", values );
}

/* Fac¸a um programa que leia 10 inteiros e imprima sua media. */
void exercicio6(){
	int values=0,i, t;

	for (int i = 0; i < 10; ++i)
	{
		printf("Insira um valor.\n");
		scanf("%d", &t);
		values = values + t;
	}
	printf("Média: %d\n", (values/10) );
}

/*Fac¸a um programa que leia 10 inteiros positivos, ignorando nao positivos, e imprima sua ˜
media. */
void exercicio7(){
	int values=0,i, t;

	for (int i = 0; i < 10; i)
	{
		printf("Insira um valor.\n");
		scanf("%d", &t);
		if (t > 0 ){
			values = values + t;
			i++;
		}
		
	}
	printf("Média: %d\n", (values/10) );
}

/* Escreva um programa que leia 10 numeros e escreva o menor valor lido e o maior valor ´
lido. */
void exercicio8()
{
	int menor = INT_MAX;
	int maior = 0;
	int values=0,i, t;

	for (int i = 0; i < 10; ++i)
	{
		printf("Insira um valor.\n");
		scanf("%d", &t);
		if (t < menor){
			menor = t;
		}
		if (t > maior){
			maior = t;
		}
		
	}
	printf("Maior:%d\nMenor:%d\n", maior, menor );

}

/* Fac¸a um programa que leia um numero inteiro ´ N e depois imprima os N primeiros
numeros naturais ´ ´ımpares. */
void exercicio9(){
	int i, N;

	printf("Entre com um número N.\n");
	scanf("%d", &N);
	for (int i = 0; i < N+1; ++i)
	{
		if((i%2)!=0){
			printf("Número impar:%d\n", i);
		}
	}


}

/* Fac¸a um programa que calcule e mostre a soma dos 50 primeiros numeros pares. */
void exercicio10(){
	int i, soma=0;
	for (int i = 0; i <= 50; i){
		if ((i % 2) == 0 ){
			printf("%d\n", i);
			i++;
		}
	}
	{
		/* code */
	}
}

/* Fac¸a um programa que leia um numero inteiro positivo ´ N e imprima todos os numeros ´
naturais de 0 ate´ N em ordem crescente.  */
void exercicio11(){
	int i, N;
	printf("Entre com N\n");
	printf("-------------\n");
	scanf("%d", &N);
	for (int i = 0; i <= N; ++i)
	{
		printf("%d\n", i);

	}
	printf("\n");
}

/* 
12 -- 21
*/

/* Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado,
uma sequência arbitrária de notas (válidas no intervalo de 10 a 20) e que mostre na tela,
como resultado, a correspondente média aritmética. O número de notas com que o aluno
pretenda efetuar o cálculo não será fornecido ao programa, o qual terminará quando for
introduzido um valor que não seja válido como nota de aprovação. */

void exercicio22(){
	float acumula, nota; 
	int decisao = 0, divisor = 0;

	for (int decisao = 0; decisao == 0; decisao)
	{
		printf("Insira a nota.\n");
		scanf("%f", &nota);
		if (nota >= 10 && nota <= 20){
			acumula += nota;
			divisor ++;
		}else{
			printf("Apenas notas entre 10 e 20\n");
		}

		printf("Deseja sair? Digite 0 caso queira inserir outra nota.\n");
		scanf("%d", &decisao);
	}

	printf("A media é: %.2f\n", (acumula/divisor));
}

/* 
Faca um algoritmo que leia um número positivo e imprima seus divisores.
*/
void exercicio23(){
	int num = 0;

	printf("Insira um número positivo.\n");
	scanf("%d", &num);
	if (num > 0){
		for (int i=1; i <= num; ++i)
		{
			if((num % i) == 0){
				printf("Divisor de %d: %d\n", num, i);
			}
		}
	}else{
		printf("O número não é positivo.");
	}

}

/*
Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número, com exceção dele próprio. Ex: a soma dos divisores do número 66 é
1 + 2 + 3 + 6 + 11 + 22 + 33 = 78
*/
void exercicio24(){
	int num = 0, acumula=0;

	printf("Insira um número positivo.\n");
	scanf("%d", &num);
	if (num > 0){
		for (int i=1; i <= num; ++i)
		{
			if((num % i) == 0){
				acumula += i;
			}
		}
	}else{
		printf("O número não é positivo.");
	}

	printf("Soma dos divisores: %d\n", acumula);
}

/* 
Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos
de 3 ou 5.
*/

void exercicio25(){
	int soma=0;

	for (int i = 0; i < 1000; ++i)
	{
		if ((i % 3) == 0 || (i % 5) == 0){
			soma += i;
		}
	}
	printf("Soma: %d\n", soma);
}
/*
Faca um algoritmo que encontre o primeiro múltiplo de 11, 13 ou 17 após um número
dado.
*/
void exercicio26(){
	int numero_dado;


	printf("Dê um número.\n");
	scanf("%d", &numero_dado);

	for (int i = numero_dado; i > 1; ++i)
	{

		if ((i % 11) == 0 || (i % 13) == 0 || (i%17) == 0){
			printf("Número mais próximo divisivel por 11, 13 ou 17: %d\n", i);
			i = 0;
		}
	}


}

/*
Em Matemática, o número harmônico designado por H(n) define-se como sendo a soma
da série harmónica:
H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
*/

void exercicio27(){
	double acumula = 0;

	printf("Entre com o H(n)\n");
	scanf("%lf", &acumula);

	for (int i = 1; i <= acumula; ++i){
		acumula += (1/i);
	}

	printf("%lf\n", acumula);
}

/* 
Faça um programa que leia um valor N inteiro e positivo, calcule o mostre o valor E,
conforme a fórmula a seguir
E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N !
*/

/*
Recusão fatorial
*/
int  (int numm){
	if (numm == 1){
		return 1;
	}

	return (numm* recursao(numm-1));
}

/* ESTA COM PROBLEMA, REVER */

void exercicio28(){
	int num;
	float acumulador=0;
	printf("Insira uma porra de um numero\n");
	scanf("%d", &num);

	for (int i = 1; i <= num; ++i)
	{
		acumulador += 1/recursao(i);
	}
	printf("Resultado: %.2f\n", acumulador);
}

/* 

Escreva um programa para calcular o valor da série, para 5 termos.
S = 0 + 1/2! + 2/4! + 3/6! + ...
 */

void exercicio29(){
	int refazer;	
}

/*
Faça programas para calcular as seguintes sequências:
1 + 2 + 3 + 4 + 5 + ... + n
1 − 2 + 3 − 4 + 5 + ... + (2n − 1)
1 + 3 + 5 + 7 + ... + (2n − 1)
*/

void exercicio30(){
	int decisao;
	float num, soma = 0;

	printf("Qual conta será feita?\n1 + 2 + ... + n (OP 1)\n1 - 2 + 3 - 4 + ... - (2n-1) (OP 2)\n1 + 3 + 5 + 7 + ... + (2n − 1) (OP 3)");
	scanf("%d", &decisao);
	switch(decisao){
		case 1:
			printf("Entre com o numero\n");
			scanf("%f", &num);


			for (int i = 1; i <= num; ++i)
			{
				soma += i;
			};

			printf("Soma: %f\n", soma);
			break;
		case 2:
			printf("Entre com o numero\n");
			scanf("%f", &num);


			break;
		default:printf("Invalido.\n");
	}
}
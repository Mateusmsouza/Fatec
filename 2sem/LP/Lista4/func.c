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

void exercicio31() {
    float n1 = 1, acumula = 0;

    for (int n2=1; n2<51; n2++) {
        acumula += n1 / n2;
        n1 += 2;
    }

    printf("Valor: %.2f", acumula);
}

void exercicio32() {
    char decisao = 's';
    int dado1, dado2;

    srand((unsigned)time(NULL));

    while (decisao == 's' ) {
        dado1 = rand() % 6;
        dado2 = rand() % 6;

        if (dado1 > dado2) printf("Dado1 > dado2 (%d > %d)\n", dado1, dado2);
        else if (dado2 > dado1) printf("Dado2 > dado1 (%d > %d)\n", dado2, dado1);
        else printf("Dado1 = dado2 (%d = %d)\n", dado1, dado2);

        do {
            printf("Deseja lançar os dados novamente? [s] [n]");
            decisao = getche();
            tolower(decisao);
            printf("\n");

            if (decisao != 's' && decisao != 'n') printf("Opção inválida, tente novamente.\n");
        } while (decisao != 's' && decisao != 'n') ;
    }
}

void exercicio33() {
    int n, i, j, cont = 0, c = 0;
    scanf("%d %d %d", &n, &i, &j);

    while (cont < 6) {
        if (c % i == 0 || c % j == 0) {
                printf("%d ", c);
                cont++;
        }
        c++;
    }
}

void exercicio34() {
 int num = 1, divisor, c;

   while (num > 0 && c != 20) {
      divisor = 1;
      c = 0;
      while (divisor <= 20) {
         if(num % divisor == 0)
            c++;
         divisor++;
      }
      num++;
   }
   printf("O menor número divisivel pelos numero de 1 a 20 é: %d\n", num - 1);
}

void exercicio35() {
    int inicio, fim, soma = 0;

    scanf("%d %d", &inicio, &fim);

    if (inicio < fim) {
        for (int i=inicio; i<=fim; i++)
            if (i % 2 != 0) soma += i;
        printf("A soma dos números impares entre %d e %d é %d\n", inicio, fim, soma);
    } else
        printf("Intervalo de valores inválido. \n");
}

void exercicio36() {
    int somaQuadrado = 0, soma = 0;

    for (int i=1; i<101; i++) {
        somaQuadrado += pow(i, 2);
        soma += i;
    }

    printf("A a diferença da soma dos quadrados dos numeros de 1 a 100 é: %d\n",soma * soma - somaQuadrado);
}

void exercicio37() {
    int num = 0;

    while (num < 1000 || num > 9999) {
        printf("Entre com um numero entre 1000 e 9999: ");
        scanf("%d", &num);
    }
        printf("%d = %d + %d = %d\n%d^2 = %d \n",num, num/100, num%100, (num/100)+(num%100), (num/100)+(num%100), num);
}

void exercicio38() {
    int c;
    for (int a = 1; a <= SOMA/3; a++) {
        for (int b = a + 1; b <= SOMA/2; b++) {
            c = SOMA - a - b;
            if ( a*a+ b*b== c*c ) printf("A = %d, B = %d, C = %d\n",a, b, c);
        }
    }
}

void exercicio39() {
    float base, altura;

    printf("Entre com a base ");
    scanf("%f", &base);

    printf("Entre com a altura: ");
    scanf("%f", &altura);

    printf("\nA area do triangulo é: %.2f", (base * altura) / 2);
}

void exercicio40(){
    int num, maior, menor, c=1;

    printf("Entre com os numeros (digite um numero negativo para sair)\n-> ");
    scanf("%d", &num);

    do{
        if (c == 1){
            maior = num;
            menor = num;
            c++;
        }

        if (num > maior){
            maior = num;
        }
        if (num < menor){
            menor = num;
        }
        printf("-> ");
        scanf("%d", &num);

    } while (num >= 0);

    printf("\nMaior: %d\nMenor: %d\n", maior, menor);
}

void exercicio41(){
    float r1=1, r2=1;

    do{
        printf("Entre com os valores de R1 e R2: (Digite 0 para sair) ");
        scanf("%f %f", &r1, &r2);

        if (r1 != 0 && r2 != 0) printf("-> %.2f\n\n", (r1 * r2) / (r1 + r2));

    } while (r1 != 0 && r2 != 0);
}(){
    float r1=1, r2=1;

    do{
        printf("Entre com os valores de R1 e R2: (Digite 0 para sair) ");
        scanf("%f %f", &r1, &r2);

        if (r1 != 0 && r2 != 0) printf("-> %.2f\n\n", (r1 * r2) / (r1 + r2));

    } while (r1 != 0 && r2 != 0);
}
void exercicio42(){
    float n;

    printf("Entre com um número (digite um numero igual ou menor que 0 para sair): ");
    scanf("%f", &n);

    do {

        printf("Ao quadrado: %.2f\n", pow(n, 2));
        printf("Ao cubo: %.2f\n", pow(n, 3));
        printf("Raiz quadrada: %.2f\n\n", sqrt(n));

    printf("Entre com um número (digite um numero igual ou menor que 0 para sair): ");
    scanf("%f", &n);

    } while (n > 0);
}

void exercicio43() {
    int idade = 1, soma_idade = 0, cont = 0;

    while (idade != 0) {
        printf("Entre com sua idade: ");
        scanf("%d", &idade);
        soma_idade += idade;
        cont ++;
    }

    printf("A média de idade do grupo é de: %d\n", soma_idade / (cont - 1));
}

void exercicio44(){
    int n, t1=0, t2=1, t3=0;

    printf("Entre com um  número: ");
    scanf("%d", &n);

    if (n >= 2){
        printf("%d %d ", t1, t2);

        while (t3 < n){
            t3 = t1 + t2;
            t1 = t2;
            t2 = t3;
            printf("%d ", t3);
        }
    } else {
        printf("%d", t1);
    }
}

void exercicio45() {
    float kmH;

    printf("Quantos KM/H? ");
    scanf("%f", &kmH);

    printf("%.2f km/h corresponde a %.2f m/s\n", kmH, kmH / 3.6);
}

void exercicio46(){
    int tentativas=0, num, numpc;

    numpc = rand() % 1000;
    printf("Tente adivinhar o numero que escolhi!\n");
    printf("Entre com um número: ");
    scanf("%d", &num);

    do {
        tentativas ++;
        if (num > numpc){
            printf("Menos\n");
        } else {
            printf("Mais\n");
        }
        printf("Entre com um numero: ");
        scanf("%d", &num);
    } while (num != numpc);

    printf("\nParabens! você acertou em %d tentativas.\n", tentativas);
}

void PedirNumero(int *n1, int *n2){
    printf("Entre com o primeiro número: ");
    scanf("%d", n1);

    printf("Entre com o segundo numero: ");
    scanf("%d", n2);
}

void void PedirNumero(int *n1, int *n2){
    printf("Entre com o primeiro número: ");
    scanf("%d", n1);

    printf("Entre com o segundo numero: ");
    scanf("%d", n2);
}

void exercicio47() {
    char opc = 'x';
    int num1, num2;

    while (opc != '5') {
        printf("[ 1 ] Adição\n");
        printf("[ 2 ] Subtração\n");
        printf("[ 3 ] Multplicação\n");
        printf("[ 4 ] Divisão\n");
        printf("[ 5 ] Sair");
        printf("Opção: ");
        opc = getche();

        printf("\n\n");


        switch (opc) {
            case '1':
                PedirNumero(&num1, &num2);
                printf("%d + %d = %d\n\n", num1, num2, num1 + num2);
                break;

            case '2':
                PedirNumero(&num1, &num2);
                printf("%d - %d = %d\n\n", num1, num2, num1 - num2);
                break;

            case '3':
                PedirNumero(&num1, &num2);
                printf("%d x %d = %d\n\n", num1, num2, num1 * num2);
                break;

            case '4':
                PedirNumero(&num1, &num2);
                printf("%d / %d = %d\n\n", num1, num2, num1 / num2);
                break;

            case '5':
                printf("Fim do programa\n");
                break;

            default:
                printf("Opção inválida.\n\n");
        }
    }
}() {
    char opc = 'x';
    int num1, num2;

    while (opc != '5') {
        printf("[ 1 ] Adição\n");
        printf("[ 2 ] Subtração\n");
        printf("[ 3 ] Multplicação\n");
        printf("[ 4 ] Divisão\n");
        printf("[ 5 ] Sair");
        printf("Opção: ");
        opc = getche();

        printf("\n\n");


        switch (opc) {
            case '1':
                PedirNumero(&num1, &num2);
                printf("%d + %d = %d\n\n", num1, num2, num1 + num2);
                break;

            case '2':
                PedirNumero(&num1, &num2);
                printf("%d - %d = %d\n\n", num1, num2, num1 - num2);
                break;

            case '3':
                PedirNumero(&num1, &num2);
                printf("%d x %d = %d\n\n", num1, num2, num1 * num2);
                break;

            case '4':
                PedirNumero(&num1, &num2);
                printf("%d / %d = %d\n\n", num1, num2, num1 / num2);
                break;

            case '5':
                printf("Fim do programa\n");
                break;

            default:
                printf("Opção inválida.\n\n");
        }
    }
}

void exercicio48() {
    int  t1=0, t2=1, t3=0;
    int  soma = 2;

    while (t3 < 4000000){
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        soma += t3;
    }

    printf("A soma dos termos é: %d", soma);
}

void exercicio49() {
    float Sal_Joao, Sal_Carlos, Rend_Carlos, Rend_Joao;
    int meses = 0;

    printf("Salário do Carlos: ");
    scanf("%f", &Sal_Carlos);

    Sal_Joao = Sal_Carlos / 3;

    Rend_Carlos = Sal_Carlos / (100 * 0.02);
    Rend_Joao = Sal_Joao / (100 * 0.05);

    while (Rend_Joao < Rend_Carlos) {
        Rend_Carlos *= meses;
        Rend_Joao *= meses;
        meses ++;
        printf("%d", meses);
    }

    printf("Para igualar o valor, João levou %d meses", meses);
}

void exercicio50() {
    float Chico = 1.50, Ze = 1.10;
    int anos = 0;

    while (Chico > Ze) {
        Chico += 0.2;
        Ze += 0.3;
        anos++;
    }

    printf("Levará %d anos para que Zé chegue a altura de Chico.\n", anos);
}

void Exercicio51(){
    float salario_inicial = 2000;
    float taxa_aumento =15;

    for (int ano = 1996; ano <= 2018; ++ano){
        salario_inicial += taxa_aumento/10;
        taxa_aumento += taxa_aumento;
    }

    printf("O salario em 2018 é: %.2f", salario_inicial);
}

// 52
void exercicio52() {
    int A_Sacar, *notas;
 
    notas = (int*) calloc (7, sizeof(int));
 
    printf("Quanto deseja sacar? ");
    scanf("%d", &A_Sacar);
 
    printf("\n");
 
    while (A_Sacar - 100 >= 0) {
            notas[0] ++;
            A_Sacar -= 100;
    }
    if (notas[0] > 0) printf("%d nota(s) de 100\n", notas[0]);
 
    while (A_Sacar - 50 >= 0) {
        notas[1] ++;
        A_Sacar -= 50;
    }
    if (notas[1] > 0) printf("%d nota(s) de 50\n", notas[1]);
 
    while (A_Sacar - 20 >= 0) {
        notas[2] ++;
        A_Sacar -= 20;
    }
    if (notas[2] > 0) printf("%d nota(s) de 20\n", notas[2]);
 
    while (A_Sacar - 10 >= 0) {
        notas[3] ++;
        A_Sacar -= 10;
    }
    if (notas[3] > 0) printf("%d nota(s) de 10\n", notas[3]);
 
    while (A_Sacar - 5 >= 0) {
        notas[4] ++;
        A_Sacar -= 5;
    }
    if (notas[4] > 0) printf("%d nota(s) de 5\n", notas[4]);
 
    while (A_Sacar - 2 >= 0) {
        notas[5] ++;
        A_Sacar -= 2;
    }
    if (notas[5] > 0) printf("%d nota(s) de 2\n", notas[5]);
 
    while (A_Sacar - 1 >= 0) {
        notas[6] ++;
        A_Sacar -= 1;
    }
    if (notas[6] > 0) printf("%d nota(s) de 1\n", notas[6]);
}
 

void exercicio53(){
    int num, cont = 1;
 
    printf("Entre com a quantidade de linhas: ");
    scanf("%d", &num);
 
    for (int i=-1; i<num; i++){
        for (int j=-1; j<i; j++){
            printf("%d ", cont);
            cont ++;
        }
                printf("\n");
    }
}
 
// 54
int exercicio54(int num) {
    int i;
 
    for(i=2;i<num;i++)
        if(num % i == 0 && num != 1) return 0;
            return 1;
}
 
void exercicio55() {
    int num;
 
    while (num <= 0) {
        printf("Entre com um número: ");
        scanf("%d", &num);
    }
    if (primo(num)) printf("É primo\n");
    else printf("Não é primo\n");
}
 
// 55
void exercicio55(){
    int N, soma = 0, cont = 0, i = 1;
 
    printf("Entre com um número: ");
    scanf("%d", &N);
 
    while (cont <= N) {
        if (primo(i)) {
            soma += i;
            cont += 1;
        }
 
        i++;
    }
 
    printf("A soma dos %d primeiros números primos é: %d\n", N, soma -1);
}
 
// 56
 
void exercicio56() {
    unsigned int soma = 0;
 
    printf("\aALERTA! código MUITO lento (muitos números)\n");
 
    for (int i=2; i<2000001; i++)
        if (primo(i)) soma += i;
 
    printf("A soma entre os números primos abaixo de dois milhões é: %d\n", soma);
 
}
 
// 57
void exercicio57() {
    int inicio, fim, Qtd_Primo = 1;
 
    printf("Entre com um número: ");
    scanf("%d", &inicio);
 
    printf("Entre com outro número: ");
    scanf("%d", &fim);
 
    while (inicio > fim) {
        printf("O valor de inicio deve ser maior que o final.\n");
 
        printf("Entre com um número: ");
        scanf("%d", &inicio);
 
        printf("Entre com outro número: ");
        scanf("%d", &fim);
    }
 
    while (inicio != fim) {
        if (primo(inicio)) {
            Qtd_Primo += 1;
        }
        inicio ++;
    }
    printf("Existem %d números primos entre %d e %d\n", Qtd_Primo, inicio, fim);
}
 
// 58
void exercicio58() {
    int inicio, fim, Soma_Primo = 1;
 
    printf("Entre com um número: ");
    scanf("%d", &inicio);
 
    printf("Entre com outro número: ");
    scanf("%d", &fim);
 
    while (inicio > fim) {
        printf("O valor de inicio deve ser maior que o final.\n");
 
        printf("Entre com um número: ");
        scanf("%d", &inicio);
 
        printf("Entre com outro número: ");
        scanf("%d", &fim);
    }
 
    while (inicio != fim) {
        if (primo(inicio)) {
            Soma_Primo += inicio;
        }
        inicio ++;
    }
    printf("A soma dos primos é: %d\n", Soma_Primo);
}
 
// 59
void exercicio59() {
    int qtd_hab, kwh,  *consumo, soma = 0, maior, menor;
    char codigo = 'x';
 
    consumo = (int*) calloc (3, sizeof(int));
 
    printf("Qual a quantidade de habitantes? ");
    scanf("%d", &qtd_hab);
 
    for (int i=0; i<qtd_hab; i++) {
        printf("Entre com o consumo do mês do %dº habitante: ", i+1);
        scanf("%d", &kwh);
 
        soma += kwh;
 
        while (codigo < '1' || codigo > '3') {
            printf("\nEntre com o código: \n");
            printf("[ 1 ] Residencial\n");
            printf("[ 2 ] Comercial\n");
            printf("[ 3 ] Industrial\n");
            codigo = getche();
            printf("\n\n");
        }
 
        if (codigo == '1') consumo[0] += kwh;
        else if (codigo == '2') consumo[1] += kwh;
        else consumo[2] += kwh;
 
        codigo = 'x';
 
        if (i == 1) maior =  menor = kwh;
 
        else if (maior < kwh) maior = kwh;
 
        else if (menor > kwh) menor = kwh;
    }
 
    printf("Maior consumo: %d\n", maior);
    printf("Menor consumo: %d\n", menor);
    printf("Media de consumo: %d\n\n", soma / qtd_hab);
    printf("Total de consumo residencial: %d\n", consumo[0]);
    printf("Total de consumo comercial: %d\n", consumo[1]);
    printf("Total de consumo industrial: %d\n", consumo[2]);
 }
 
// 60
void soma_qtd_med_ma_me_par() {
  int qtd = 0, qtdPar = 0;
  float valor, soma = 0.0, media, mediaPar, maior=0.0, menor=0.0, somaPar;
 
  while (1) {
    printf("Entre com um valor: ");
    scanf("%f", &valor);
    soma += valor;
    qtd++;
    media = soma/qtd;
    if (valor%2==0.0) {
      qtdPar++;
      somaPar+=valor;
      mediaPar = somaPar/qtdPar;
    }
    if (valor > maior) {
      maior = valor;
    } else if (valor < menor) {
      menor = valor;
    }
    if (valor <= 0.0) break;
    printf("Soma: %.2f\nQuantidade de Numeros: %d\nMedia: %.2f\nMaior numero: %.2f\nMenor numero: %.2f\nMedia dos pares: %.2f", soma,qtd,media,maior,menor,mediaPar);
  }
}
// 60
void soma_qtd_med_ma_me_par() {
  int qtd = 0, qtdPar = 0;
  float valor, soma = 0.0, media, mediaPar, maior=0.0, menor=0.0, somaPar;
 
  while (1) {
    printf("Entre com um valor: ");
    scanf("%f", &valor);
    soma += valor;
    qtd++;
    media = soma/qtd;
    if (valor%2==0.0) {
      qtdPar++;
      somaPar+=valor;
      mediaPar = somaPar/qtdPar;
    }
    if (valor > maior) {
      maior = valor;
    } else if (valor < menor) {
      menor = valor;
    }
    if (valor <= 0.0) break;
    printf("Soma: %.2f\nQuantidade de Numeros: %d\nMedia: %.2f\nMaior numero: %.2f\nMenor numero: %.2f\nMedia dos pares: %.2f", soma,qtd,media,maior,menor,mediaPar);
  }
}
// 60
void exercicio60() {
  int qtd = 0, qtdPar = 0;
  float valor, soma = 0.0, media, mediaPar, maior=0.0, menor=0.0, somaPar;
 
  while (1) {
    printf("Entre com um valor: ");
    scanf("%f", &valor);
    soma += valor;
    qtd++;
    media = soma/qtd;
    if (valor%2==0.0) {
      qtdPar++;
      somaPar+=valor;
      mediaPar = somaPar/qtdPar;
    }
    if (valor > maior) {
      maior = valor;
    } else if (valor < menor) {
      menor = valor;
    }
    if (valor <= 0.0) break;
    printf("Soma: %.2f\nQuantidade de Numeros: %d\nMedia: %.2f\nMaior numero: %.2f\nMenor numero: %.2f\nMedia dos pares: %.2f", soma,qtd,media,maior,menor,mediaPar);
  }
}
 
// 61
int VerificaPalindromo (char numeroDigitado[]) {
    char s2[4];
 
    strcpy(s2,numeroDigitado);
    strrev(numeroDigitado);
 
    if(strcmp(numeroDigitado,s2) == 0) return 1;
    return 0;
}
 
void exercicio61() {
    char x[10];
    int aux = 0;
    for (int i=999; i>99; i--) {
        for (int j=999; j>=99; j--) {
            itoa(i * j, x, 10);
            if (VerificaPalindromo(x)) {
                printf("%d x %d = %d\n", i, j, i * j );
                aux = 1;
                break;
            }
        }
    if (aux) break;
    }
 
    system("pause");
}
 
// 62
void exercicio62() {
    char num = 'x';
 
    while (num < '1' || num > '5') {
        printf("Entre com um número (digitos de 1 a 5)");
        scanf("%c", &num);
    }
 
    switch (num) {
        case '1':
            printf("2 letras utilizadas no total. \n");
            break;
        case '2':
            printf("4 letras utilizadas no total.\n");
            break;
        case '3':
            printf("4 letras utilizadas no total.\n");
            break;
        case '4':
            printf("6 letras utilizadas no total.\n");
            break;
        case '5':
            printf("5 letras utilizadas no total.\n");
            break;
    }
 
    system("pause");
}
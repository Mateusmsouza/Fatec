//Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e
//exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um
//valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser
//informado ao usuário e o programa termina.

#include <stdio.h>

int main(){
	float nota_A, nota_B;

	scanf("%f", &nota_A);
	scanf("%f", &nota_B);

	if ((nota_A > 10.00 || nota_A < 00.00) || (nota_B > 10.00 || nota_B < 00.00)){
		printf("Nota invalida! Entre com 0 <= nota <= 10\n");
		return 0;

	}
	printf("Media entre as notas:%.2f\n", ((nota_A+nota_B)/2));


	return 0;
}
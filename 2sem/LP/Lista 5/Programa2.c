#include <stdio.h>
#include <locale.h>

int main(){
	int dia, mes, ano, dias_da_semana[6];
	int A, B, C, D, E, F, G , H, I, J;

	for (int i = 0; i < 7; ++i)
	{
		dias_da_semana[i] = i;
	}


	printf("Entre com dia mes e ano.\n");
	scanf("%d/%d/%d", &dia, &mes, &ano);
	A = ((12 - mes) / 10);
	B = ano - A;
	C = mes + (12*A);
	D = (B / 100);
	E = (D / 4);
	F = 2 - D + E;
	G = (365.25 * B);
	H = (30.6001 * (C + 1));
	I = F + G + H + dia + 5;
	J = (I % 7);

	// 0=SAB 1=DOM 2=SEG 3=TER 4=QUA 5=QUI 6=SEX
	switch(J){
		case 0:printf("Sabado\n");
				break;
		case 1:printf("Domingo\n");
				break;
		case 2:printf("Segunda\n");
				break;
		case 3:printf("Terça\n");
				break;
		case 4:printf("Quarta\n");
				break;
		case 5:printf("Quinta\n");
				break;
		case 6:printf("Sexta\n");
				break;
		default:printf("NAO\n");
				break;
			}
	return 0;
    system("pause");
}
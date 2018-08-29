#include <stdio.h>
#include <locale.h>
char nome[20];
int idade;
float peso;
float altura;

void envelhecer(int anos){
	if (idade < 21){
		altura += ((idade+anos)-21)*0,5;
	}
	idade += anos;
}
void engordar(float kg){
	peso += kg;
}
void emagrecer(float kg){
	peso -= kg;
}
void crescer(){
	altura += 0.5;
}
float imc(float peso, float altura){
	return (peso/(altura*altura));
}


int main(){

	int op = 0;
	int aux = 0;
	float aux2 = 0;

	scanf("%s", nome);
	scanf("%d", &idade);
	scanf("%f", &altura);
	scanf("%f", &peso);

	do{
		printf("Selecione.\n1-Envelhecer.\n2-Engordar\n3-Emagrecer\n4-crescer");
		scanf("%d", &op);

		switch(op){
			case 1:
				printf("Quantos anos?\n");
				scanf("%d", &aux);
				envelhecer(aux);
				break;
			case 2:
				printf("engordar\n");
				printf("Quantos kg?\n");
				scanf("%f", &aux2);
				engordar(aux2);
				break;
			case 3:
				printf("engordar\n");
				printf("Quantos kg?\n");
				scanf("%f", &aux2);
				emagrecer(aux2);
				break;
			case 4:
				crescer();
				break;
			default:
				break;
		}
	}while (op != 666);

	return 0;
    system("pause");
}

#include <stdio.h>
#include <locale.h>

int main(){
	int hora_chegada, minuto_chegada, hora_partida, minuto_partida;
	int varou_noite = 0; 
	float valor;

	int horas_brutas;
	int minutos_brutos;

	printf("Entre hora e minuto chegada.\n");
	scanf("%d", &hora_chegada);
	scanf("%d", &minuto_chegada);

	printf("Entre hora e minuto partida.\n");
	scanf("%d", &hora_partida);
	scanf("%d", &minuto_partida);

	if (hora_chegada >= hora_partida){
		varou_noite = 1;
	}

	if (varou_noite == 0) {
		horas_brutas= hora_partida - hora_chegada;
		minutos_brutos = minuto_partida - minuto_chegada;

		//printf("%d\n", horas_brutas);
		//printf("%d\n", minutos_brutos);
		if (minutos_brutos > 0){
			horas_brutas = horas_brutas + 1;
		}
		

		if (horas_brutas >= 5){
			horas_brutas -= 5;
			valor = 6.8;
		}else if(horas_brutas == 4){
			horas_brutas -= 4;
			valor = 4.8;
		}else if(horas_brutas == 3){
			horas_brutas -= 3;
			valor = 3.4;	
		}else if(horas_brutas == 2){
			horas_brutas -= 2;
			valor = 2;
		}else if(horas_brutas ==1){
			horas_brutas -= 1;
			valor = 1;
		}

		if (horas_brutas != 0){
			valor += horas_brutas * 2;
		}
		
		printf("Valor total a pagar: %.2f\n", valor);
	}else{
		horas_brutas= (24 - hora_partida) + hora_chegada;
		minutos_brutos = minuto_partida - minuto_chegada;
		if (minutos_brutos > 0){
			horas_brutas = horas_brutas + 1;
		}
		

		if (horas_brutas >= 5){
			horas_brutas -= 5;
			valor = 6.8;
		}else if(horas_brutas == 4){
			horas_brutas -= 4;
			valor = 4.8;
		}else if(horas_brutas == 3){
			horas_brutas -= 3;
			valor = 3.4;	
		}else if(horas_brutas == 2){
			horas_brutas -= 2;
			valor = 2;
		}else if(horas_brutas ==1){
			horas_brutas -= 1;
			valor = 1;
		}

		if (horas_brutas != 0){
			valor += horas_brutas * 2;
		}
		printf("Valor total a pagar: %.2f\n", valor);

	}

	// subtrair hora 
	//	subtrair minuto -> Se minuto partida < minuto chegada { 
	//  nao cobra hora extra arredondada
	// } se minuto partida > minuto chegada {
	// cobra  hora extra
	//	}

	return 0;
}
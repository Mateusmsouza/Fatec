#include <stdio.h>
#include <stdlib.h>

int main()
{
        int dia, mes, ano;

    printf("Informe o dia: ");
    scanf("%d", &dia);
    printf("Informe o mes: ");
    scanf("%d", &mes);
    printf("Informe o ano: ");
    scanf("%d", &ano);
    if(mes >= 1 && mes <= 12){
        if(mes == 2){
            if(ano % 400 == 0 || (ano % 4 == 0 && ano & 100 != 0)){
                if(dia >=1 && dia <= 29){
                printf("Data Valida");
            }else printf("Dia em Janeiro Contem 29 dias");
            }else{
                if(dia >=1 && dia <= 28){
                printf("Data Valida");
            }else printf("Dia em Janeiro Contem 28 dias, Ano não é Bissexto");
            }
        }
        else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
            if(dia >=1 && dia <= 31){
                printf("Data Valida");
            }else printf("Dia invalido mes com 31 dias");
        }
        else{
            if(dia >=1 && dia <= 30){
                printf("Data Valida");
            }else printf("Dia invalido mes com 30 dias");
        }
    }else printf("Mes Inválido");

}



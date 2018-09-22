#include <stdio.h>
#include <locale.h>

int main(){
    int ano,mes, dia;

    printf("Entre com ano, mes, dia\n");

    scanf("%d", &ano);
    scanf("%d", &mes);
    scanf("%d", &dia);


    switch(mes){
    case 1:
        if (dia >= 1 && dia <= 31){
            printf("Data válida\n");
        }else{
            printf("Data inválida\n");
        }
        break;
    case 2:
        if (((ano % 400 == 0) || (ano % 4 == 0)) && (ano % 100 != 0)){
            if (dia >=1 && dia <= 29){
                printf("Data válida\n");
            }else{
                printf("Data inválida\n");
            }
        }else{
            if (dia >=1 && dia <= 28){
                printf("Data válida\n");
            }else{
                printf("Data inválida\n");
            }
        }
        break;
    case 3:
        if (dia >= 1 && dia <= 31){
            printf("Data válida\n");
        }else{
            printf("Data inválida\n");
        }
        break;
    case 4:
        if (dia >= 1 && dia <= 30){
            printf("Data válida\n");
        }else{
            printf("Data inválida\n");
        }
        break;
    case 5:
        if (dia >= 1 && dia <= 31){
            printf("Data válida\n");
        }else{
            printf("Data inválida\n");
        }
        break;
    case 6:
        if (dia >= 1 && dia <= 30){
            printf("Data válida\n");
        }else{
            printf("Data inválida\n");
        }
        break;
    case 7:
        if (dia >= 1 && dia <= 31){
            printf("Data válida\n");
        }else{
            printf("Data inválida\n");
        }
        break;
    case 8:
        if (dia >= 1 && dia <= 31){
            printf("Data válida\n");
        }else{
            printf("Data inválida\n");
        }
        break;
    case 9:
        if (dia >= 1 && dia <= 30){
            printf("Data válida\n");
        }else{
            printf("Data inválida\n");
        }
        break;
    case 10:
        if (dia >= 1 && dia <= 31){
            printf("Data válida\n");
        }else{
            printf("Data inválida\n");
        }
        break;
    case 11:
        if (dia >= 1 && dia <= 30){
            printf("Data válida\n");
        }else{
            printf("Data inválida\n");
        }
        break;
    case 12:
        if (dia >= 1 && dia <= 31){
            printf("Data válida\n");
        }else{
            printf("Data inválida\n");
        }
        break;
    default:
        printf("Data invalida.\n");
        break;


    }

    return 0;
}

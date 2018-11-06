#include <stdio.h>
#include <locale.h>

/* Escreva um trecho de codigo para fazer a criacao dos novos tipos de dados conforme solicitado abaixo:
    - horario: composto de hora, minutos e segundos;
    - Data: composto de dia, mês e ano;
    - Compromisso: composto de uma data, horario, e texto que descreve o compromisso. */

typedef struct horario {
    int hora, minuto, segundo;
} Horario;

typedef struct data {
    int dia, mes, ano;
} Data;

struct Compromisso {
    Data data;
    Horario hora;
    char texto[255];
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Compromisso compromisso;

    printf("Entre com o horário (hh:mm:ss): ");
    scanf("%d:%d:%d", &compromisso.hora.hora, &compromisso.hora.minuto, &compromisso.hora.segundo);

    printf("Entre com a data (dd/mm/aaa):  ");
    fflush(stdin);
    scanf("%d/%d/%d", &compromisso.data.dia, &compromisso.data.mes, &compromisso.data.ano);

    printf("Entre com o texto: ");
    fflush(stdin);
    fgets(compromisso.texto, 255, stdin);

    printf("%d/%d/%d, ás ", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
    printf("%d:%d:%dhs\n", compromisso.hora.hora, compromisso.hora.minuto, compromisso.hora.segundo);
    printf("%s\n", compromisso.texto);
}

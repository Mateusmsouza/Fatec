#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int hora, mnt, seg;
 } Hora;

 typedef struct {
    int dia, mes, ano;
 }  Data;

 typedef struct {
    char nomeCrianca[50], nomePai[50], nomeMae[50];
    float massa, altura;
    Hora hora;
    Data data;
} Crianca;

void cadastrar(Crianca *criancas, int *fim);
void imprimir(Crianca *crianca, int indice);
void listarPorData(Crianca *criancas, int qtd);
void listarPorMassaAcima(Crianca *criancas, int qtd);
void listarPorMassaAbaixo(Crianca *criancas, int qtd);


#endif // FUNCOES_H_INCLUDED
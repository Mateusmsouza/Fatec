#include "interface.h"
#include <stdio.h>
#include <stdlib.h>
#define N 15 // tamanho da fila

int FILA[N];
int n, t;

int filavazia(){
	return n==t;
}

int filacheia(){
	return n>=t;
}

int iniciafila(){
	n = t = 0;
}

void inserenafila(int x){
	FILA[t++] = x;
}

void tiradafila(){
	FILA[n++]
}

int comprimentofila(){
	return t - n;
}
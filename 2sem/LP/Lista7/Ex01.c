/*
Fac¸a um programa que entao leia uma string e a imprima
*/

#include <stdio.h>

int main(){
	char text[255];

	printf("Type a string.\n");
	scanf("%s", text);

	printf("Typed: %s\n", text);
	return 0;
}
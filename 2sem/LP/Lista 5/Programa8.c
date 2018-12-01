/*Faça um programa que receba uma frase e imprima-a de maneira invertida, trocando as letras A, se existir, por *. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// reverse function based from https://pt.stackoverflow.com/questions/138315/inverter-string-em-c 
char * reverse( char * s )
{
    int length = strlen(s) ;
    int c, i, j;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }

    return s;
}

int main(){
	char statement[255];
	char statement_aux[255];
	int aux = 0;

	printf("Type a statement\n");
	fgets(statement, 100, stdin);

	printf("%s\n", reverse(statement));
	return 0;
    system("pause");
}
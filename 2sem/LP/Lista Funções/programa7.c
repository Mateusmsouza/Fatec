#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	char S1[21], S2[21];
	char result[42];

    printf("Entre com a primeira string (20C)\n");
	scanf("%s", S1);
    printf("Tamanho da string: %ld\n", strlen(S1));

    printf("Entre com a segunda string (20C)\n");
	scanf("%s", S2);

    strcpy(result, strcat(S1, S2));
    printf("-----------------\nAmbas concatenadas: %s\n-----------------\n", result);
	system("pause");
	return 0;
}

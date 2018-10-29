/*
Fac¸a um programa que conte o numero de 1’s que aparecem em um string. Exemplo: ´
“0011001” -> 3

*/
#include <stdio.h>
#include <string.h>


int main(){
    char string[255];
    int count=0;

    printf("Type essa porra logo\n");
    scanf("%s", string);
    int by = strlen(string);

    for (int i = 0; i < by; ++i){
        if (string[i] == '1'){
            count++;
        }
    }
    printf("Aparece: %d", count);

    return 0;
}

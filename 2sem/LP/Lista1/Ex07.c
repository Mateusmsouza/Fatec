#inclide <stdio.h>
#include <locale.h>

int main(){
    float peso, altura;
    
    printf("Entre com o peso\n");
    scanf("%f", &peso);
    printf("\nEntre com a altura\n");
    scanf("%f", &altura);
    
    printf("\nIMC: %f", (peso/(altura*altura)));
    
    return 0;
}
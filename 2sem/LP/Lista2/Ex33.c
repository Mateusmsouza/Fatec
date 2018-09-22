#include <stdio.h>
#include <locale.h>

int main(){
    float preco;

    printf("Entre com o preço\n");
    scanf("%f", &preco);
    if (preco < 50){
        printf("Passou a custar: %.2f", preco * 1.05);
    }else if(preco >= 50 && preco <= 100){
        printf("Passou a custar: %.2f",preco * 1.10);
    }else if(preco > 100){
        printf("Passou a custar: %.2f", preco * 1.15);
    }

    return 0;
}

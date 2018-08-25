#include <stdio.h>

int main(){
    float lado, area, perim;
    printf("insira o valor:\n");
    scanf("%f", &lado);
    area = lado * lado;
    perim = 4 * lado;
    
    printf("area:\n%.2f",area);
    printf("\nperimetro:%.2f\n",perim);
    
    return 0;
    
}
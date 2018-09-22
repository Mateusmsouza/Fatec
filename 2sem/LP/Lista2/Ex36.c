#include <stdio.h>
#include <locale.h>

int main(){
    int venda;

    scanf("%d", &venda);

    if (venda >= 100000){

        printf("Total: %d\n", 700+(venda * 1.16));
    }else if(venda < 100000 && venda>=80000){
        printf("Total: %d\n", 650+(venda * 1.14));
    }else if(venda < 80000 && venda>=60000){
        printf("Total: %d\n", 600+(venda * 1.14));
    }else if(venda < 60000 && venda>=40000){
        printf("Total: %d\n", 550+(venda * 1.14));
    }else if(venda < 40000 && venda>=20000){
        printf("Total: %d\n", 500+(venda * 1.14));
    }else if(venda < 20000){
        printf("Total: %d\n", 400+(venda * 1.14));
    }

    return 0;
}

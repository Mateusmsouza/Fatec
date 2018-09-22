#include <stdio.h>
#include <locale.h>

int main(){
    float nota;
    int faltas;

    printf("entre com nota e faltas.\n");

    if (nota >= 0.0 && nota <= 3.9){
        printf("Conceito E\n");

    }else if(nota >= 4.0 && nota <= 4.9){
        if (nota <= 20){
            printf("Conceito D\n");
        }else{
            printf("Conceito E\n")
        }
    }else if (nota >= 5.0 && nota <= 7.4){
        if (nota<=20){
            printf("Conceito C\n");
        }else{
            printf("Conceito D\n");
        }
    }else if (nota >= 7.5 && nota <= 8.9){
        if (nota <= 20){
            printf("Conceito B\n");
        }else{
            printf("Conceito C\n");
        }
    }else if(nota >= 9.0 && nota <= 10.0){
        if (nota <= 20){
            printf("Conceito A\n");
        }else{
            printf("Conceito B\n")
        }
    }

    return 0;
}

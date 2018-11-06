#include <stdio.h>
#include <locale.h>

 #define V 5
 #define A 5

/* Faca um programa que controle o fluxo de voos nos aeroportos de um pais. Com V = 5 (voos) e A = 5
(aeroportos) e:
    - Crie e leia um vetor de voos, sendo que cada voo contem um codigo de aeroporto de origem e um
    destino;
    - Crie um vetor de aeroportos, sendo que cada aeroporto contem seu codigo, quantidade de voos que
    saem e quantidade de voos que chegam.
Nota: Cada aeroporto e identificado por um código inteiro entre 0 e (A-1). Não aceite aeroportos de codigo
 inexistente.  */



 typedef struct aeroporto {
     int codigo, qtd_voo_saida, qtd_voo_chegada;
 } AEROPORTO;

 typedef struct voo {
    int codigo_origem, codigo_destino;
 } VOO;

 int main(){
    AEROPORTO aeroporto[V];
    VOO voo[V];

    for (int i=0; i<V; i++) {
        printf("Codigo do aeroporto: ");
        scanf("%d", &aeroporto[i].codigo);

        while(aeroporto[i].codigo < A -1 || aeroporto[i].codigo > A -1) {
            printf("Código inexistente. ");

            printf("Codigo do aeroporto: ");
            scanf("%d", &aeroporto[i].codigo);
        }

        printf("Quantidade de voos que partiram: ");
        scanf("%d", &aeroporto[i].qtd_voo_saida);

        printf("Quantidade de voos que chegaram: ");
        scanf("%d", &aeroporto[i].qtd_voo_chegada);

        printf("\n\n");
    }

    for (int i=0; i<V; i++) {
        printf("Voo %d \n", i+1);

        printf("Codigo origem: ");
        scanf("%d", &voo[i].codigo_origem);

        printf("Codigo destino: ");
        scanf("%d", &voo[i].codigo_destino);

        printf("\n\n");
    }
 }


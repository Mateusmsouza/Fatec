#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>


int conta_vogais (char s[255]){
    int tamanho_char = strlen(s)/sizeof(char), count = 0;
    for (int i = 0; i < tamanho_char; ++i){
    	if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u') || (s[i] == 'A') || (s[i] == 'E') || (s[i] == 'I') || (s[i] == 'O') || (s[i] == 'U') ){
    		count++;
    	}
    }
    return count;
}

void substitui_vogais_por_asterisco(char s[255]){
    int tamanho_char = strlen(s)/sizeof(char);
    char retorno[255];
    for (int i = 0; i < tamanho_char; ++i){
    	if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u') || (s[i] == 'A') || (s[i] == 'E') || (s[i] == 'I') || (s[i] == 'O') || (s[i] == 'U') ){
    		retorno[i] = '*';
    	}else{
    		retorno[i] = s[i];
    	}
    }
    printf("Substituida: %s\n", retorno);
}
// b,c,d,f,g,h,j,k,l,m,n,s,p,q,r,s,t,v,w,x,z
void conta_consoante(char s[]){
    int tamanho_char = strlen(s)/sizeof(char), count = 0;
    for (int i = 0; i < tamanho_char; ++i){

    	if((s[i] >= 'B' && s[i <= 'Z']) || (s[i] >= 'b' && s[i <= 'z'])){
	    	if ( (s[i] != 'a') && (s[i] != 'e') && (s[i] != 'i') && (s[i] != 'o') && (s[i] != 'u') && (s[i] != 'A') && (s[i] != 'E') && (s[i] != 'I') && (s[i] != 'O') && (s[i] != 'U') ){
	    		count++;
	    	}
    	}
    }
    printf("Consta consoantes:%d\n", count);
}


int main(){
    int menu;
    char string[255];

    printf("Entre com uma opção.\n1-Consta Vogais.\n2-Substitui vogal por *\n");
    scanf("%d", &menu);

    switch(menu){
        case 1:printf("Entre com uma string\n");
        	scanf("%s", string);
        	printf("Quantas são vogais: %d\n", conta_vogais(string));
        	break;
    	case 2:printf("Entre com uma string\n");
    		scanf("%s", string);
        	substitui_vogais_por_asterisco(string);
        	break;
        case 3:printf("Entre com uma string\n");
    		scanf("%s", string);
    		conta_consoante(string);
        }
    system("pause");
}

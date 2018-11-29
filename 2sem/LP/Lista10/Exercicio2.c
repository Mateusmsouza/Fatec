#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct
{
    char nome[40];
    int rg;
    int ano_nascimento;
}pessoa;

pessoa p[200];
int i=0;

void cadastro()
{
    printf("\n\nDigite o nome: ");
    scanf("%s",&p[i].nome);
    printf("\n\nDigite o RG(somente numeros): ");
    scanf("%d",&p[i].rg);
    printf("\n\nAno nascimento: ");
    scanf("%d",&p[i].ano_nascimento);
    printf("\n\n\ncadastro realizado, numero do cadastro: %d\n\n",i);
    i++;
}

int calculo(int numcadast)
{
    int cal=0;
    cal = (2018)-(p[numcadast].ano_nascimento);
    return cal;
}

void anosuperior(ano_input)
{
    int x;
    for(x=0;x<i;x++)
    {
        if((p[x].ano_nascimento)>(ano_input))
        {
            printf("%s \n",p[x].nome);
        }
    }
}

void anoinferior(int ano_input)
{
    int x;
    for(x=0;x<i;x++)
    {
        if((p[x].ano_nascimento)<(ano_input))
        {
            printf("%s \n",p[x].nome);
        }
    }
}
int main()
{
    char opcao;
    int numcadast,ano_input,procurar_rg;
    do
    {
    printf("\n (a)- Cadastrar uma pessoa");
    printf("\n (b)- Calcular a idade de uma pessoa selecionada pelo usuario");
    printf("\n (l)- Listar pessoas que nasceram a partir de um determinado ano");
    printf("\n (d)- Listar pessoas que nasceram antes de um determinado ano");
    printf("\n (e)- Encontrar o nome de uma pessoa com determinado RG");
    printf("\n (f)- Sair.\n");
    printf("\n Escolha uma opcao:");
    opcao = getche();

    switch (opcao)
    {
        case 'a': cadastro();
        break;
        case 'b':
            printf("\n\n ha %d pessoas cadastradas",i);
            printf("\n\n Digite o numero do cadastrado: ");
            scanf("%d",&numcadast);
            printf("\nIdade:%d anos\n\n",calculo(numcadast));
            break;
        case 'l':
            printf("\n\n Digite o ano: ");
            scanf("%d",&ano_input);
            anosuperior(ano_input);
            break;
        case 'd':
            printf("\n\n Digite o ano: ");
            scanf("%d",&ano_input);
            anoinferior(ano_input);
            break;
        case 'e':
            printf("\n\nDigite o RG(somente numeros): ");
            scanf("%d",&procurar_rg);
            for(int x=0;x<i;x++)
            {
            if(procurar_rg==p[x].rg)
            {
                printf("Nome: %s",p[x].nome);
            }
            }
            break;
    }
    }while(opcao != 'f');
    system("pause");
    return 0;
}

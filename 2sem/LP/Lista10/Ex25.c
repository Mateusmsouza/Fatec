/*
Fac¸a um programa gerenciar uma agenda de contatos. Para cada contato armazene o
nome, o telefone e o aniversario (dia e m ´ es). O programa deve permitir ˆ
(a) inserir contato
(b) remover contato
(c) pesquisar um contato pelo nome
(d) listar todos os contatos
(e) listar os contatos cujo nome inicia com uma dada letra
(f) imprimir os aniversariantes do mes.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função gravar contato
void adicionarContato(FILE *banco, char name[], char telefone[], char aniversario[]){
	banco = fopen("database.txt", "a");
	fseek(banco,0, SEEK_END);
	fprintf(banco, "%s %s %s\n",name, telefone, aniversario );
	printf("Contato Gravado com sucesso.\n");
	system("clear");
	fclose(banco);
}

// Função para remover contato
void removerContato(FILE *banco, char name[]){
	char lineFile[255];
	char *palavraArquivo;

	banco = fopen("database.txt", "a");



	while(fgets(lineFile, 255, banco) != NULL){
		palavraArquivo = strtok(lineFile," ");

		while(palavraArquivo != NULL){

			if (1 == strcmp(palavraArquivo,name)){
				fprintf(banco, "\0");
			}
			palavraArquivo = strtok(NULL, " ");
		}
	}
	printf("Removido\n");
	fclose(banco);
}

// Listar Arquivo
void listarArquivo(FILE *banco){
    char lineFile[255];
    banco = fopen("database.txt", "r");

    while(fgets(lineFile, 255, banco) != NULL){
        printf("%s", lineFile);
    }
    fclose(banco);
}

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL,"portuguese");

	FILE *banco;
	int decisao;
	char nome[255];
	char telefone[20];
	char aniversario[20];

	printf("Funções:\nAdiciona novo contato:1\nLista Arquivos: 4\n");
	scanf("%d", &decisao);

	switch(decisao){
		case 1:
			printf("Entre com: Nome, Telefone, Aniversiao [dd/mm/aa]\n");
			scanf("%s", nome);
			scanf("%s", telefone);
			scanf("%s", aniversario);
			adicionarContato(banco, nome, telefone, aniversario);
			break;

		case 2:
			printf("Entre com: Nome, Telefone, Aniversiao [dd/mm/aa]\n");
			scanf("%s", nome);
			removerContato(banco, nome);

			break;
        case 4:
            listarArquivo(banco);
            break;


		default:
			printf("Opção inválida\n");
	}
	return 0;
}

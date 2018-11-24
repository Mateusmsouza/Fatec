/*
Fac�a um programa gerenciar uma agenda de contatos. Para cada contato armazene o
nome, o telefone e o aniversario (dia e m � es). O programa deve permitir �
(a) inserir contato
(b) remover contato
(c) pesquisar um contato pelo nome
(d) listar todos os contatos
(e) listar os contatos cujo nome inicia com uma dada letra
(f) imprimir os aniversariantes do mes.
*/

// Verificando de o OS host � Windows ou Linux
#ifdef __unix__
#define ISWINDOWS 0
#elif defined(_WIN32) || defined(WIN32)
#define ISWINDOWS 1
#endif // __unix__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Fun��o gravar contato
void adicionarContato(FILE *banco, char name[], char telefone[], char aniversario[]){
	banco = fopen("database.txt", "a");
	fseek(banco,0, SEEK_END);
	fprintf(banco, "%s %s %s\n",name, telefone, aniversario );
	printf("Contato Gravado com sucesso.\n");
    // Limpando a tela
	#ifdef ISWINDOWS
        system("cls");
    #else
        system("clear");
	#endif // ISWINDOWS
	fclose(banco);
}

// Fun��o para remover contato, falta terminar
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

// Função que busca o contato pelo nome
void buscarContatoNome(FILE *banco, char name[]){
  char lineFile[255];
	char *palavraArquivo;
  char fodase[255];
  banco = fopen("database.txt", "r");

	while(fgets(lineFile, 255, banco) != NULL){
        if (strstr(lineFile, name)){
          printf("Encontrado: %s", lineFile);
        }
  }
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

// Listar Pessoas com primeira letra do nome igual ao caractere passado
void listarArquivoNome(FILE *banco, char letra){
    char lineFile[255];
    banco = fopen("database.txt", "r");
    
    while(fgets(lineFile, 255, banco) != NULL){
        if (lineFile[0] == letra){
            printf("%s", lineFile);
        }
    }
    fclose(banco);
}

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL,"portuguese");

	FILE *banco;
	int decisao;
	char aux;
	char nome[255];
	char telefone[20];
	char aniversario[20];

	printf("1-Fun��es:\nAdiciona novo contato:1\n2-Remover contato pelo nome\n3-Buscar contato pelo nome\n4-Lista Arquivos\n5-Lista Nomes come�ados por uma letra\n");
	scanf("%d", &decisao);

	switch(decisao){
		case 1:
			printf("Entre com: Nome, Telefone, Aniversiao [dd/mm/aa]\n");
			scanf("%s", nome);
			scanf("%s", telefone);
			scanf("%s", aniversario);
			adicionarContato(banco, nome, telefone, aniversario);
			break;

    // Falta implementar
		case 2:
			printf("Entre com: Nome");
			scanf("%s", nome);
			removerContato(banco, nome);

     break;

    case 3:
        printf("Entre com o nome a ser buscado\n");
        scanf("%s",nome);
        buscarContatoNome(banco, nome);
        break;
    case 4:
        listarArquivo(banco);
        break;
    case 5:
        printf("Insira uma letra\n");
        fflush(stdin);
        scanf("%c", &aux);
        listarArquivoNome(banco, aux);
        break;

		default:
			printf("Op��o inv�lida\n");
	}
	return 0;
}

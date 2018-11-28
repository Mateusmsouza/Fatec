/*
Fac¸a um programa gerenciar uma agenda de contatos. Para cada contato armazene o
nome, o telefone e o aniversario (dia e m ´ es). O programa deve permitir ˆ
(a) inserir contato
(b) remover contato
(c) pesquisar um contato pelo nome # falta este
(d) listar todos os contatos
(e) listar os contatos cujo nome inicia com uma dada letra # falta este
(f) imprimir os aniversariantes do mes.
*/

// Verificando de o OS host é Windows ou Linux
#ifdef __unix__
#define ISWINDOWS 0
#elif defined(_WIN32) || defined(WIN32)
#define ISWINDOWS 1
#endif // __unix__

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função gravar contato
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

void buscarContatoNome(FILE *banco, char name[]){
    char lineFile[255];
	char *palavraArquivo;

	banco = fopen("database.txt", "a");

	while(fgets(lineFile, 255, banco) != NULL){
        printf(("-------"));
		palavraArquivo = strtok(lineFile," ");
//
		while(palavraArquivo != NULL){
		    printf("%s", lineFile);
            if (strcmp(palavraArquivo,name)==1){

                printf("%s", lineFile);
            }
// escreve a logica da procura aqui
            palavraArquivo = strtok(NULL, " ");
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
void listarArquivoNome(FILE *banco, char name[]){
    char lineFile[255];
    banco = fopen("database.txt", "r");

    while(fgets(lineFile, 255, banco) != NULL){
        if (lineFile[0] == name){
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

	printf("Funções:\nAdiciona novo contato:1\nLista Arquivos: 4\nLista Nomes começados por ...:5\n");
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
        case 3: // deu bosta
            printf("Entre com o nome a ser buscado\n");
            scanf("%s", nome);
            buscarContatoNome(banco,nome);
            break;
        case 4:
            listarArquivo(banco);
            break;

        case 5:
            printf("Insira um nome\n");
            fflush(stdin);
            scanf("%c", &aux);
            listarArquivoNome(banco, aux);
            break;

		default:
			printf("Opção inválida\n");
	}
	return 0;
}

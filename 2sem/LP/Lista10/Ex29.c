/*29.  Codifique um programa que manipule um arquivo contendo registros descritos pelos se-
guintes campos: codigo_vendedor, nome_vendedor, valor_da_venda e mes.

A manipulacao do arquivo em quest̃aóe feita atrav́es da execuc ̧̃ao das operac ̧̃oes dispo-nibilizadas pelo seguinte menu:

•Criar o arquivo de dados; FEITO
•Incluir um determinado registro no arquivo; FEITO
•Excluir um determinado vendedor no arquivo;
•Alterar o valor de uma venda no arquivo;
•Imprimir os registros na sáıda padr̃ao; FEITO
•Excluir o arquivo de dados;
•Finalizar o programa.

Os registros devem estar ordenados no arquivo, de forma crescente, de acordo com asinformac ̧̃oes contidas 
nos campos codigovendedor e mes. Ñao deve existir mais de umregistro no arquivo com mesmos valores nos 
campos codigovendedor e mˆes..*/

#define VALUE 1
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

void limpaTela(){
  #if ISWINDOWS == VALUE
        system("cls");
  #else
        system("clear");
	#endif // ISWINDOWS
}

// Funções do menu
void criaDatabase(){
  FILE *database;
  database = fopen("database.dat", "w");
  fclose(database);
  printf("Database criado com sucesso!\n");
  printf("-----------------------------\n\n");
  getchar();
}

// Incluir um registro no arquivo.
void incluiNovoRegistro(){
  //var
  char codigoVendedor[4], nomeVendedor[255], valorDaVenda[10], mesVenda[10];
  FILE *database;
  
  printf("Entre com:\nCodigo Vendedor, Nome Vendedor, Valor da Venda, Mes da Venda(numerico)\n");
  scanf("%s", codigoVendedor);
  scanf("%s", nomeVendedor);
  scanf("%s", valorDaVenda);
  scanf("%s", mesVenda);

  // falta implementar validação para código e mês não repetirem
  database = fopen("database.dat","a");
  fprintf(database, "codigo_vendedor:%s nome_vendedor:%s valor_da_venda:%s mes:%s", codigoVendedor,nomeVendedor,valorDaVenda, mesVenda);
  fclose(database);
}

// Listar o database
void listarDatabase(){
  char lineFile[255];
  FILE* database;

  database = fopen("database.dat","r");
  while(fgets(lineFile, 255, database)!=NULL){
    printf("%s\n", lineFile);
  }
  printf("--------------------------------------");
  getchar();
}
int main(){
  int finaliza = 1;

  do{
    printf("Selecione uma opção:\n0-Finalizar o programa \n1-Criar novo database [Falta implementar]\n2-Incluir novo registro no database\n3-Excluir um determinado vendedor no arquivo\n4-Alterar o valor de uma venda no arquivo\n5-Imprimir o database\n6-Excluir o arquivo de dados\n");
    scanf("%d", &finaliza);
    switch(finaliza){
      case 1:
        limpaTela();
        printf("Criando novo database....\n");
        criaDatabase();
        break;
      case 2:
        limpaTela();
        printf("Inserir novo registro no database...\n");
        incluiNovoRegistro();
        break;
      case 5:
        limpaTela();
        printf("Listar os registros do database...\n");
        listarDatabase();
      default:
        break;
    }
  }while(finaliza!=0);

  return 0;
}
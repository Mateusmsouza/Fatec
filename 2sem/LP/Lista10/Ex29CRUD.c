/*29.  Codifique um programa que manipule um arquivo contendo registros descritos pelos se-
guintes campos: codigo_vendedor, nome_vendedor, valor_da_venda e mes.

A manipulacao do arquivo em quest̃aóe feita atrav́es da execuc ̧̃ao das operac ̧̃oes dispo-nibilizadas pelo seguinte menu:

•Criar o arquivo de dados; FEITO
•Incluir um determinado registro no arquivo; FEITO
•Excluir um determinado vendedor no arquivo; FEITO
•Alterar o valor de uma venda no arquivo; 
•Imprimir os registros na sáıda padr̃ao; FEITO
•Excluir o arquivo de dados; 
•Finalizar o programa. FEITO

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

// auxvar
int compare = 0;
char codigo[4];
char mes[10];
/////

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

  // Passando as variaveis para a função listarDatabase validar
  compare = 1;
  strcpy(codigo, codigoVendedor);
  strcpy(mes, mesVenda);
  if (listarDatabase()==1){
    database = fopen("database.dat","a");
    fprintf(database, "codigo_vendedor:%s nome_vendedor:%s valor_da_venda:%s mes:%s", codigoVendedor,nomeVendedor,valorDaVenda, mesVenda);
    fclose(database);
  }else{
    printf("WARNING:\n");
    printf("Já existe um vendedor com este código e mês. O registro não será criado.\n");
  }

}

void ExcluirRegistro(char cod[], char mes[]){
  char lineFile[255];
	FILE *databasetemp;
  FILE *database;

	database = fopen("database.dat", "r");
  databasetemp = fopen("databasetemp.dat", "w");
  // Criando um novo arquivo sem o contato que será excluído
	while(fgets(lineFile, 255, database) != NULL){
      if (!strstr(lineFile, cod) && !strstr(lineFile, mes)){
        fprintf(databasetemp, lineFile);
      }else{
        printf("Registro a ser removido:%s\n", lineFile);  
      }
		}
  printf("Gravando alterações no banco...\n");
  // Código abaixo irá remover o arquivo original e renomear o arquivo temporário gravado sem o contato excluído
  if (remove("database.dat")==0 && rename("databasetemp.dat","database.dat")==0){
    printf("Mudanças gravadas com sucesso.\n");
  }else{
    printf("Algo de errado ocorreu na gravação!\n");
  }
	fclose(database);
  fclose(databasetemp);
  listarDatabase();
}

void AlteraValorVenda(char cod[], char mes[], char novoValor[]){
char lineFile[255];
	FILE *databasetemp;
  FILE *database;
  char *pointer;

	database = fopen("database.dat", "r");
  databasetemp = fopen("databasetemp.dat", "w");
  // Criando um novo arquivo sem o contato que será excluído
	while(fgets(lineFile, 255, database) != NULL){
      if (!strstr(lineFile, cod) && !strstr(lineFile, mes) && !strstr(lineFile, novoValor)){
        fprintf(databasetemp, lineFile);
      }else{
        printf("Registro a ser alterado:%s\n", lineFile);  // Arrranjar uma maneira de colocar o novo valor no meio da string original
        pointer = strtok(lineFile," ");
        while(pointer != NULL){

          printf("%s", *pointer);
          pointer = strtok(NULL, " ");
        }
      }
		}
  printf("Gravando alterações no banco...\n");
  // Código abaixo irá remover o arquivo original e renomear o arquivo temporário gravado sem o contato excluído
  if (remove("database.dat")==0 && rename("databasetemp.dat","database.dat")==0){
    printf("Mudanças gravadas com sucesso.\n");
  }else{
    printf("Algo de errado ocorreu na gravação!\n");
  }
	fclose(database);
  fclose(databasetemp);
  listarDatabase();
}
// Listar o database
int listarDatabase(){
  char lineFile[255];
  FILE* database;
  int isValid = 1;

  database = fopen("database.dat","r");
  while(fgets(lineFile, 255, database)!=NULL){
    printf("%s\n", lineFile);
    
    if(compare = 1){
      if (strstr(lineFile, codigo) && strstr(lineFile,mes)){
        isValid = 0;
      }
    }
  }
  printf("--------------------------------------\n");
  getchar();
  compare = 0;
  return isValid;
}

void deletaDatabase(){

  remove("database.dat");
  printf("database removido.\n");
}
int main(){
  int finaliza = 1;
  char cod_aux[4];
  char mes_venda[10];
  char novo_valor_venda[10];

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
      case 3:
        limpaTela();
        printf("Excluir um registro. Insira o código e o mês.\n");
        scanf("%s",cod_aux);
        scanf("%s",mes_venda);
        ExcluirRegistro(cod_aux, mes_venda);
        break;
      case 4:
        printf("Alterar valor de uma venda. Insira o código, mês e novo valor.\n");
        scanf("%s",cod_aux);
        scanf("%s",mes_venda);
        scanf("%s", novo_valor_venda);
        AlteraValorVenda(cod_aux, mes_venda, novo_valor_venda);
      case 5:
        limpaTela();
        printf("Listar os registros do database...\n");
        listarDatabase();
      case 6:
        printf("Remover database\n");
        deletaDatabase();
      default:
        break;
    }
  }while(finaliza!=0);

  return 0;
}
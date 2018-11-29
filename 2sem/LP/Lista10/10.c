#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE* req;
  FILE* res;
  char linhas[60][60], cidades[60][40], popString[60][15], aux, maiorCidade[40];
  int countLine = 0, countChar = 0, popInt[60], maiorPop = -1;;

  req = fopen("cidades.txt", "r");
  if (req == 0) {
    printf("Erro ao ler arquivo\n");
    exit(1);
  }

  while ((aux = fgetc(req)) != EOF) {
    if (aux == '\n') {

      int positionEqual = -1;
      for (int i = 0; i < countChar; i++) {
          if (linhas[countLine][i] == '=') {
            positionEqual = i;
          }
          if (i >= positionEqual && positionEqual != -1) {
            popString[countLine][i-positionEqual] = linhas[countLine][i+1];
          } else {
            cidades[countLine][i] = linhas[countLine][i];
          }
      }

      popInt[countLine] = atoi(popString[countLine]);

      if (popInt[countLine] > maiorPop) {
        maiorPop = popInt[countLine];
        strcpy(maiorCidade, cidades[countLine]);
      }

      countChar = 0;
      countLine++;

    } else {
      linhas[countLine][countChar] = aux;
      countChar++;
    }
  }
  fclose(req);

  res = fopen("maiorcidade.txt", "w");
  fprintf(res, "%s = %d", maiorCidade, maiorPop);
  fclose(res);

  return 0;
}

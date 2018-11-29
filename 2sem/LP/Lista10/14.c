#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int main() {
  FILE* req;
  FILE* res;

  char names[60][30], datas[60][20], aux;
  int idades[60];

  req = fopen("nome_nasc.txt", "r");
  if (req == 0) {
    printf("Erro ao ler arquivo\n");
    exit(1);
  }
  int pipeFounded = 0;
  int lineCount = 0;
  int charCount = 0;

  while ((aux = fgetc(req)) != EOF) {
    if (aux == '\n') {
      lineCount++;
      pipeFounded = 0;
      charCount = 0;
    } else if (aux == '|') {
      pipeFounded = 1;
      charCount = 0;
    } else if (pipeFounded) {
      datas[lineCount][charCount] = aux;
    } else {
      names[lineCount][charCount] = aux;
    }

    charCount++;
  }
  
  fclose(req);
  res = fopen("nome_nasc_resp.txt", "w");
  for (int i = 0; i < lineCount; i++) {
    if (i != 0) names[i][0] = ' ';
    datas[i][0] = ' ';

    char datas;
    fprintf(res, "%s (%s)", names[i], datas[i]);
  }
  fclose(res);


  return 0;
}

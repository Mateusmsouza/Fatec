#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char letras[27] = "abcdefghijklmnopqrstuvwxyz";
struct alfabeto {
  int vezes[26];
};
typedef struct alfabeto ALFABETO;

int pegarIndex(char letra) {
  for (int i = 0; i < 26; i++) {
    if (letra == letras[i]) {
      return i;
    }
  }
}

int jaExiste(char letra, ALFABETO* alfabeto) {
  if (alfabeto->vezes[pegarIndex(letra)] > 0)
    return 1;
  return 0;
}

int main() {
  FILE* f;
  ALFABETO alfabeto;
  char aux;

  f = fopen("lorem.txt", "r");
  if (f==0) {
    printf("Falha ao ler arquivo\n");
    exit(1);
  }

  while ((aux = fgetc(f)) != EOF) {
    if (aux != ' ') {
      alfabeto.vezes[pegarIndex(tolower(aux))] += 1;
    }
  }

  fclose(f);

  for (int i = 0; i < 26; i++) {
    printf("%c: %d\n", letras[i], alfabeto.vezes[i]);
  }

  return 0;
}

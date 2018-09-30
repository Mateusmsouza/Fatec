#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char string[30], c, d;
  fgets(string, 30, stdin);
  string[strlen(string)-1] = '\0';
  scanf(" %c", &c);
  scanf(" %c", &d);
  for (int i = 0; string[i] != '\0'; i++) {
    if (string[i] == c)
      string[i] = d;
  }
  printf("%s\n", string);

  return 0;
}
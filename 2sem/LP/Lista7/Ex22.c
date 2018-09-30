#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char string[20];
  float value, value_;

  fgets(string, 20, stdin);
  string[strlen(string)-1] = '\0';


  scanf("%f", &value);

  printf("%s:\n Preco total: %.2f\n Preco a vista: %.2f", string, value, value - (value*0.1));

  return 0;
}
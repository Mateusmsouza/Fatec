#include <stdio.h>
#include <locale.h>


int main(){
  int gap = 5;
  while(gap > 0 ){
    printf("Gap %d\n", gap);
    gap = gap / 2;
  }
}
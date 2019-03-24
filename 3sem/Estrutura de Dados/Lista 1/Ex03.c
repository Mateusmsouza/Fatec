#include <stdio.h>

int *reverse(int v[], int n){
  if (n == 50 ) return v;
  int sakaue = v[100-n];
  v[100-1] = v[n-1];
  v[n-1] = sakaue;
  return reverse(v, n-1);
}
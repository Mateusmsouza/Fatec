#include <stdlib.h>
#include <stdio.h>

int binarySearch(int v[], int x){
  int left = 0;
  int right = sizeof(v)/sizeof(int);

  while (left <= right){
    int middle = (left+right)/2;
    
    if (v[middle] == x){
      return middle;
    }
    else if(v[middle] > x){
      left--;
    }
    right++;
  }
  return -1;
}

int main(){
  int v[] = {1,2,3,4,5,6};

  printf("Procurando pelo 3: %d\n", binarySearch(v,0));
  return 0;
}
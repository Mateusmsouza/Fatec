#include <stdio.h>

int *reverse(int v[], int n){
    if (n==0){
        return v[0];
    }
    //printf("v[n-1]: %d\n", v[n-1]);
    v[n-1] = reverse(v, n-1);
}

int main(){
    int v[3];
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;

    int *a = reverse(v,3);

    for(int i = 0; i = 3; i++){
        printf("a %d\n", *a);
    }
    return 0;
}

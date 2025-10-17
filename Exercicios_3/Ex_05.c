#include <stdio.h>

int main(){
    int x = 99;
    int *p = &x;
    int **pp = &p;

    **pp = 123;

    printf("%d\n", x);

    return 0;
}
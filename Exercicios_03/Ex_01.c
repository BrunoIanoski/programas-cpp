#include <stdio.h>

int main() {
    int var = 15;
    int *p;
    p = &var;
    printf("%d\n", var);
    printf("%p\n", &var);
    printf("%p\n", p);
    printf("%d\n", *p);

    return 0;
}

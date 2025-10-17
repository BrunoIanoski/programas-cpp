#include <stdio.h>

int main() {
    int numeros[5];
    int *p = numeros;
    int var = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero [%d]: ", i);
        scanf("%d", &var);
        *(p + i) = var;
    }

    for (int i = 0; i < 5; i++) {
        printf("numeros[%d] = %d | via ponteiro: %d\n", i, numeros[i], (p + i));
    }

    return 0;   
}
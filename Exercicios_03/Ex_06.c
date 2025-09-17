#include <stdio.h>
#include <stdlib.h>

int maior (int valores[], int n) {
    int maior = 0;
    for (int i = 0; i < n; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }

    return maior;
}


int main(){
    int n = 0;
    int *ptr;

    while (n <= 0) {
        printf("\nQuantas valores deseja registrar? (> 0): ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Digite um numero valido!");
        }
    }

    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Erro na alocação de memória!\n");
        return 1; 
    }

    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &ptr[i]);
        while (ptr[i] <= 0) {
            printf("Digite um valor maior que zero!: ");
            scanf("%d", &ptr[i]);
        }
    }

    printf("O maior valor e: %d\n", maior(ptr, n));

    free(ptr);

    return 0;
}
#include <stdio.h>


int soma (int vetor[],int n){
    int i;
    int resultado = 0;

    for (i = 0; i < n; i++){
        resultado += vetor[i];
    }

    return(resultado);
}


int main(){
    int i;
    int n = 3;
    int vetor[n];

    for (i = 0; i < n; i++) {
        printf("Digite o valor para o vetor: ");
        scanf("%d", &vetor[i]);
    }

    printf("%d\n", soma(vetor,n));

    return 0;
}
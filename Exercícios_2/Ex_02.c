#include <stdio.h>


float maior (float vetor[], int n){
    int i;
    float x = 0;

    for (i = 0; i < n; i++){
        if (vetor[i] > x){
            x = vetor[i];
        }
    }

    return(x);

}


int main(){
    int i;
    int n = 10;
    float vetor[n];

    for (i = 0; i < n; i++) {
        printf("Digite o valor para o vetor: ");
        scanf("%f", &vetor[i]);
    }

    printf("%.2f\n", maior(vetor,n));

    return 0;
}
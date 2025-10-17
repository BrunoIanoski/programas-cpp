#include <stdio.h>

void leitura (int vetor[], int n){
    printf("Insira os valores do vetor: \n");
    for (int i = 0; i < 3; i++){
        scanf("%d", &vetor[i]);
    }
}

int mediaArit(int vetor[], int n){
    int soma = 0;
    int mediaValores;

    for (int i = 0; i < 3; i++){
        soma += vetor[i];
    }
    mediaValores = soma/3;

    return mediaValores;
}

void acimaMedia(int mediaValores, const MEDIA){
    if (mediaValores >= MEDIA){
        printf("\nO valor %d esta acima da media.", mediaValores);
    }
    else { 
        printf("\nO valor %d nao esta acima da media.", mediaValores);
    }
}

int main(){
    const MEDIA = 7;
    int n = 3;
    int vetor[n];

    leitura(vetor, n);
    printf("\n");

    acimaMedia(mediaArit(vetor,n),MEDIA);

    return 0;
}
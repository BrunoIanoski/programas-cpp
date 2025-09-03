#include <stdio.h>

int soma_diagonal(int matriz[4][4]){
    int soma = 0;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (i == j){
                soma += matriz[i][j];
            }
        }
    }

    return soma;
}

int main(){
    int matriz[4][4];

    for (int i = 0; i < 4; i++){
    printf("\n");
    for (int j = 0; j < 4; j++){
      printf("Digite o elemento [%d][%d]: ", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }

    printf("\nMatriz:\n\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

    printf("\n%d\n", soma_diagonal(matriz));


    return 0;
}
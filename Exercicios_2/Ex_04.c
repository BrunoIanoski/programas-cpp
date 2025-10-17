#include <stdio.h>

int soma_matriz(int matriz[3][3]){
  int i, j, soma = 0;
  for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
      soma += matriz[i][j];
    }
  }

  return soma;
}


int main(){
  int i, j;
  int matriz[3][3];

  for (i = 0; i < 3; i++){
    printf("\n");
    for (j = 0; j < 3; j++){
      printf("Digite o elemento [%d][%d]: ", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("\nMatriz:\n\n");
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("\n%d\n", soma_matriz(matriz));

  return 0;
}
#include <stdio.h>

void procedimento (int matriz[3][3]){
    int matriz2[3][3];
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            matriz2[j][i] = matriz[i][j];
        }
    }



    printf("\nMatriz Transposta:\n\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
        printf("%d ", matriz2[i][j]);
    }
    printf("\n");
  }

}


int main(){
    int matriz[3][3];

    for (int i = 0; i < 3; i++){
    printf("\n");
    for (int j = 0; j < 3; j++){
      printf("Digite o elemento [%d][%d]: ", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("\nMatriz:\n\n");
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

    procedimento(matriz);


    return 0;
}
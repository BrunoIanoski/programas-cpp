#include <stdio.h>

int main(){
  // 01)
  int x, i;
  printf("Insira um numero inteiro: ");
  scanf("%d", &x);
  for (i = 0; i < x; i++){
    printf("%d ", i);
  }

  // 05)
  int j = 0, soma = 0, numero = 2;
  while (j < 50){
    soma += numero;
    numero += 2;
    j++;
  }
  printf("%d", soma);

  // 14)
  int k, y, fib, a = 0, b = 1;
  printf("Insira um numero inteiro: ");
  scanf("%d", &y);
  if (y == 0) {
    fib = 0;
  } else if (y == 1) {
    fib = 1;
  } 
  else {
    for (k = 2; k <= y; k++) {
      fib = a + b;
      a = b;
      b = fib;
    }
  } 
  printf("%d", fib);

  // 17)
  int linha, coluna, num = 1;
  for (linha = 1; linha < 8; linha++){
    for (coluna = 1; coluna < linha; coluna++){
      printf("%d ", num);
      num++;
    }
    printf("\n");
  }


  return 0;
}
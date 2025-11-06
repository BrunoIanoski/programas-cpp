// Bruno Manika Ianoski - Exercício 14 Cap.5

#include <stdio.h>

int main () {
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

  return 0;
}
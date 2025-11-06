// Bruno Manika Ianoski - Exercício 01 Cap.9.4.1

#include <stdio.h>

int maior (int valor1, int valor2) {
  if (valor1 > valor2) {
    return valor1;
  }
  else {
    return valor2;
  }
}

int main() {
  int valor1, valor2;

  printf("Insira dois valores inteiros: ");
  scanf("%d %d", &valor1, &valor2);
  
  printf("O maior numero entre eles : %d", maior(valor1, valor2));

  return 0;
}
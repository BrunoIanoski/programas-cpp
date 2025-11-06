// Bruno Manika Ianoski - Exercício 14 Cap.3

#include <stdio.h>

int main () {
  char maiuscula;
  char minuscula;

  printf("Insira a letra maiuscula: ");
  scanf("%c", &maiuscula);

  minuscula = maiuscula + 32;

  printf("A letra minuscula e: [%c]", minuscula);

  return 0;
}
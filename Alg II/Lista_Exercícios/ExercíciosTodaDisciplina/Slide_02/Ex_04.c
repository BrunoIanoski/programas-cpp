// Bruno Manika Ianoski - Exercício 04 Cap.3

#include <stdio.h>

int main() {
  float valores = 0, media;
  int i;

  for (i = 0; i < 4; i++) {
    printf("Digite o valor [%d]: ", i);
    scanf("%f", &valores);
    media += valores;
  }

  printf("A media aritmetica dos valores: %.2f", media/4);

  return 0;
}
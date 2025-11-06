// Bruno Manika Ianoski - Exercício 10 Cap.3

#include <stdio.h>

int main() {
  const float premio = 780000;
  float primeiro = 0, segundo = 0, terceiro = 0;

  primeiro += (0.46 * premio);
  segundo += (0.32 * premio);
  terceiro += (premio - primeiro - segundo);

  printf("O primeiro recebera [%.2f]; o segundo recebera [%.2f]; o terceiro recebera [%.2f].", primeiro, segundo, terceiro);

  return 0;
}
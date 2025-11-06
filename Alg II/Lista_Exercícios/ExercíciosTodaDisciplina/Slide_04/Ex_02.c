// Bruno Manika Ianoski - Exercício 01 Cap.9.4.2

#include <stdio.h>

void separar(float num, int *parteInteira, float *parteFracionaria) {
  *parteInteira = (int) num;               
  *parteFracionaria = num - *parteInteira; 
}

int main() {
  float numero, fracao;
  int inteiro;

  printf("Insira um numero real: ");
  scanf("%f", &numero);

  separar(numero, &inteiro, &fracao);

  printf("Parte inteira: %d\n", inteiro);
  printf("Parte fracionaria: %.2f\n", fracao);

  return 0;
}

// Bruno Manika Ianoski - Exercício 05 Cap.5

#include <stdio.h>

int main (){
  int j = 0, soma = 0, numero = 2;

  while (j < 50){
    soma += numero;
    numero += 2;
    j++;
  }

  printf("A soma e: %d", soma);

  return 0;
}
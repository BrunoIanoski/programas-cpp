// Bruno Manika Ianoski - Exercício 01 Cap.9.4.3

#include <stdio.h>

int somaRecursiva(int valor) {
  if (valor > 0) {
    return (valor * valor * valor) + somaRecursiva(valor - 1);
  } 
  else {
    return 0;
  }
}

int main() {
  int valor = 5;

  printf("A soma dos primeiros 5 cubos e: %d", somaRecursiva(valor));

  return 0;
}
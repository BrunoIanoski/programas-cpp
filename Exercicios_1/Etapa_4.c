#include <stdio.h>

int main(){
  // 4.10
  int i;
  printf("\n");
  for (i = 1; i <= 100; i++){ // for (inicialização; condição; incremento)
    printf("%d ", i);
  }
  printf("\n");

  // 4.11
  int constante = 1;
  int var = 1;
  for (constante = 1; constante <= 10; constante++){
    printf("\n");
    for (var = 1; var <= 10; var++){
      printf("%d x %d = %d\n", constante, var, constante * var);
    }
  }

  // 4.12
  int num = 0;
  int num2;
  do {
    printf("Digite um numero inteiro: ");
    scanf("%d", &num2);
    num += num2;
  } while (num2 != 0);
  printf("A soma dos numeros digitados e: %d", num);
  
  return 0;
}
#include <stdio.h>

int main(){
  // 5.13
  float num1, num2;
  char op, validar;

  do {
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &num1);
    printf("\nDigite o operador (+ - * /): ");
    scanf("%s", &op);
    printf("\nDigite o segundo numero: ");
    scanf("%f", &num2);

    if (op == '+'){
      printf("\n%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    }
    else if (op == '-'){
      printf("\n%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    }
    else if (op == '*'){
      printf("\n%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    }
    else {
      printf("\n%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    }

    printf("\nDeseja continuar?(s/n): ");
    scanf("%s", &validar);

  } while (validar == 's');

  // 5.14
  float temp;
  int unidade;
  char validar2;

  do {
    printf("\n\nInsira a temperatura: ");
    scanf("%f", &temp);
    printf("Deseja converter para qual unidade de temperatura?\n\t1 > Fahrenheit \n\t2 > Celsius\n\t");
    scanf("%d", &unidade);

    if (unidade == 1){
      float conversao = (temp * 1.8) + 32;
      printf("%.2f C em Fahrenheit e %.2f F.", temp, conversao);
    }
    else if (unidade == 2){
      float conversao = (temp - 32)/1.8;
      printf("%.2f F em Celsius e %.2f C.", temp, conversao);
    }
    else {
      printf("Escolha invalida!");
    }

    printf("\nDeseja continuar?(s/n): ");
    scanf("%s", &validar2);

  } while (validar2 == 's');

  printf("\nAte mais!\n\n");

  return 0;
}
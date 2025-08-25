#include <stdio.h>
#include <math.h>

int main(){
  // 1)

  int x;
  printf("\nEscreva um numero inteiro: ");
  scanf("%d", &x);
  printf("Seu sucessor e %d e seu antecessor e %d", x+1, x-1);

  // 3)

  int a, b, c;
  printf("\nInsira tres numeros inteiros: \n");
  scanf(" %d %d %d", &a, &b, &c);
  printf("\nA soma dos numeros e: %d", a+b+c);

  // 5)

  const int ANO_ATUAL = 2025;
  int idade;
  printf("\nDigite sua idade (anos completos): ");
  scanf("%d", &idade);
  printf("\nVoce nasceu no ano de %d", ANO_ATUAL - idade);

  // 7)

  float real, dolar;
  printf("\nInsira a cotacao do dolar, e em seguida, o valor em reais: \n");
  scanf(" %f %f", &dolar, &real);
  printf("\nO valor R$%.2f em dolares e: $%.2f", real, real/dolar);

  // 9)

  const float PI = 3.141592;
  float graus;
  printf("\nInsira o valor em graus: ");
  scanf("%f", &graus);
  printf("\nO valor em graus converido para radianos e: %.3f", graus * (PI/180));

  // 11)

  float raio;
  printf("\nInsira o raio do circulo: ");
  scanf("%f", &raio);
  printf("\nA area do circulo e %.2f", PI*(raio*raio));
 
  // 13)

  float m, n;
  printf("\nInsira os valores dos catetos: \n");
  scanf("%f %f", &m, &n);
  printf("\nA hipotenusa e: %.2f", sqrt((m*m)+(n*n)));

  // 15)

  int numero, invertido;
  printf("\nDigite um numero de 3 digitos: ");
  scanf("%d", &numero);
  invertido = (numero % 10) * 100 + ((numero / 10) % 10) * 10 + (numero / 100);
  printf("\nNumero invertido: %d\n", invertido);

  // 17)

  int bit;
  printf("\nInsira um numero inteiro: ");
  scanf("%d", &bit);
  printf("\nO numero original %d e o bit a bit: %d", bit, ~bit);

  // 19)

  int sam, nig;
  printf("\nInsira dois numeros inteiros: \n");
  scanf("%d %d", &sam, &nig);
  int ou_exclusivo = sam ^ nig;
  int ou_bit = sam | nig;
  int e_bit = sam & nig;
  printf("ou exclusivo: %d - ou bit a bit: %d - e bit a bit: %d",  ou_exclusivo, ou_bit, e_bit);

  return 0; 
}
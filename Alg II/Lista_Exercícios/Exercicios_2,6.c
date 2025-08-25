#include <stdio.h>

#define CONSTANTE 8.7

int main(){
  // 1)
  printf("\nInicio do programa.\nFim.\n");

  // 2), 3)
  int x;
  printf("\nInsira um numero inteiro: ");
  scanf("%d", &x);
  printf("\nValor lido: %d\n", x);

  // 4) 5) Apenas testes;

  // 6)

  double y;
  printf("\nInsira um numero 'Double': ");
  scanf("%lf", &y);
  printf("\nValor em notacao cientifica > %0.2e\n", y);

  // 7)

  char z;
  printf("\nInsira um caractere: ");
  scanf("%s", &z);
  printf("\n%d", z); 

  // 8) 

  int a, b;
  printf("\nInsira o primeiro numero: ");
  scanf("%d", &a);
  printf("\nInsira o segundo numero: ");
  scanf("%d", &b);
  printf("\nValores lidos: %d , %d", b, a);

  // 9)

  float c, d;
  printf("\nInsira dois valores 'float': \n");
  scanf("%f %f", &c, &d);
  printf("\nValores lidos: %.2f , %.2f", d, c);

  // 10)

  int e, f, g;
  printf("\nInsira o Dia Mes e Ano, nessa ordem: \n");
  scanf("%d %d %d", &e, &f, &g);
  printf("\nData: %d/%d/%d", e, f, g);

  // 11)

  printf("\nValor do define: %.2f\n", CONSTANTE);

  // 12)

  const int h = 8;
  printf("\nValor da constante: %d", h);

  // 13)

  char i;
  printf("\nInsira uma letra: ");
  scanf(" %c", &i);
  printf("\nLetra lida: \"%c\"", i);

  // 14)

  char j, k, l;
  printf("\nInsira 3 letras: \n");
  scanf(" %c %c %c", &j, &k, &l);
  printf("As letras insiridas sao: \n%c\n%c\n%c", j, k, l);

  // 15) 

  char m;
  int n;
  float o;
  printf("\nInsira uma letra, um inteiro, e um 'float', nessa ordem: \n");
  scanf(" %c %d %f", &m, &n, &o);
  printf("variaveis separadas por um espaco: %c  %d  %.2f\n", m, n, o);
  printf("variaveis em tabulacao horizontal: %c\t%d\t%.2f\n", m, n, o);
  printf("variaveis em cada linha: \n%c\n%d\n%.2f", m, n, o);

  return 0;
}


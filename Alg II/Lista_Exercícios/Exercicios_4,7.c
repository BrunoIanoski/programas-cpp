#include <stdio.h>

int main(){
  // 2)
  float a, b;
  printf("Insira o primeiro e o segundo numero: \n");
  scanf("%f\n%f", &a, &b);
  if (a > b){
    printf("%.2f e maior que %.2f.", a, b);
  }
  else if (b > a){
    printf("%.2f e maior que %.2f.", b, a);
  }
  else{
    printf("Os numeros sao iguais.");
  }
  
  // 4)
  float c, d;
  printf("\nInsira o seu salario em R$: ");
  scanf("%f", &c);
  printf("\nInsira o valor da prestacao em R$: ");
  scanf("%f", &d);
  if (d > (0.2 * c)){
    printf("Emprestimo nao concedido.");
  }
  else{
    printf("Emprestimo concedido.");
  }

  // 6)
  float e;
  char f;
  printf("\nInsira sua altura em metros e seu sexo(H/M): \n");
  scanf("%f\n%c", &e, &f);
  if (f == 'h' || f == 'H'){
    printf("Seu peso ideal e: %.2f", (72.7*e)-58);
  }
  else if (f == 'm' || f == 'M'){
    printf("Seu peso ideal e: %.2f", (62.1*e)-44.7);
  }

  // 8)
  int g;
  printf("\nInsira sua idade: ");
  scanf(" %d", &g);
  if (g >= 5 && g <= 7){
    printf("Categoria: Infantil A");
  }
  else if (g >= 8 && g <= 10){
    printf("Categoria: Infantil B");
  }
  else if (g >= 11 && g <= 13){
    printf("Categoria: Juvenil A");
  }
  else if (g >= 14 && g <= 17){
    printf("Categoria: Juvenil B");
  }
  else if (g >= 18) {
    printf("Categoria: Senior");
  }
  else {
    printf("Sem categoria.");
  }

  // 10)
  int h, i, j, k;
  printf("\nInsira os tres numeros para realizar a media: \n");
  scanf("%d\n%d\n%d", &h, &i, &j);
  printf("Insira o tipo de media: \n\t1-Geometrica \n\t2-Ponderada \n\t3-Harmonica \n\t4-Aritmetica\n");
  scanf("%d", &k);
  if (k == 1){
    printf("A media geometrica e: %d", h*i*j);
  }
  else if (k == 2){
    printf("A media ponderada e: %d", (h+(2*i)+(3*j))/6);
  }
  else if (k == 3){
    printf("A media harmonica e: %d", 1/((1/h)+(1/i)+(1/j)));
  }
  else if (k == 4){
    printf("A media aritmetica e: %d", (h+i+j)/3);
  }
  else {
    printf("Escolha invalida");
  }

  // 12)
  int l;
  printf("\nInsira o dia da semana em numero: ");
  scanf("%d", &l);
  switch (l) {
  case 1:
    printf("Domingo");
    break;
  case 2:
    printf("Segunda-feira");
    break;
  case 3:
    printf("Terça-feira");
    break;
  case 4:
    printf("Quarta-feira");
    break;
  case 5:
    printf("Quinta-feira");
    break;
  case 6:
    printf("Sexta-feira");
    break;
  case 7:
    printf("Sabado");
    break;
  default:
    printf("Numero invalido");
    break;
  }

  // 14)
  int m;
  printf("\nInsira um numero inteiro: ");
  scanf("%d", &m);
  if (m % 3 == 0 || m % 5 == 0){
    if (m % 3 == 0 && m % 5 == 0 ){
      printf("O numero e divisil por 3 E 5 simultaneamente.");
    }
    else {
      printf("O numero e divisil por 3 OU 5.");
    }
  }
  else {
    printf("O numero nao e divisil por 3 ou 5.");
  }

  return 0;
}
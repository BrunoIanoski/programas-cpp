/**
 * char str1[30]
 * char str2[25]
 * 
 * zerar cada posição das strings
 * mostrar o conteúdo vazio delas
 * pegar via terminal, o nome completo (str1) e nome da cidade (str2)
 * mostrar o tamanho de cada string
 * 
 */

#include <stdio.h>
#include <string.h>

int main(){
  char str1[30];
  char str2[25];
  int i;
  
  // Zerando as posições
  for (i = 0; i < 30; i++){
    str1[i] = 0;
  }
  for (i = 0; i <25; i++){
    str2[i] = 0;
  }
  // Mostrando o conteúdo vazio
  for (i = 0; i < 30; i++){
    printf("%d ", str1[i]);
  }
  printf("\n");
  for (i = 0; i < 25; i++){
    printf("%d ", str2[i]);
  }
  // Entrada de nome e cidade
  printf("\nDigite seu nome completo: ");
  fgets(str1, sizeof(str1), stdin);
  printf("\nDigite o nome da sua cidade: ");
  fgets(str2, sizeof(str2), stdin);
  str1[strcspn(str1, "\n")] = '\0';
  str2[strcspn(str2, "\n")] = '\0';
  printf("\n%s", str1);
  printf("\n%s", str2);
  // Mostrando o tamanho de cada string
  printf("\nA string nome tem %d caracteres, contanto espacos.", strlen(str1));
  printf("\nA string cidade tem %d caracteres, contanto espacos.", strlen(str2));

  return 0;
}
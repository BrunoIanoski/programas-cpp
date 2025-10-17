#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int valor;
  struct Node* proximo;
} Node;

typedef struct {
  Node* inicio;
  Node* fim;
} Fila;

int main() {
  Fila* fila = (Fila*)malloc(sizeof(Fila));
  fila->inicio = NULL;
  fila->fim = NULL;

  int i = 1;
  int valor;
  for (i = 1; i < 6; i++) {
    Node* novoNode = (Node*)malloc(sizeof(Node));
    printf("\n > Digite o valor [%d]: ", i);
    scanf("%d", &valor);
    novoNode->valor = valor;
    novoNode->proximo = NULL;
    if (fila->fim == NULL) {
      fila->inicio = novoNode;
      fila->fim = novoNode;
    }
    else {
      fila->fim->proximo = novoNode;
      fila->fim = novoNode;
    }
  }

  Node* atual = fila->inicio;
  printf("\n > Elementos inseridos na fila: \n\n\t");
  while (atual != NULL) {
    printf(" -> %d", atual->valor);
    atual = atual->proximo;
  }

  return 0;
}
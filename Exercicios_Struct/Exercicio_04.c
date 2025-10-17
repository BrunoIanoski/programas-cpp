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

void inserir(Fila* fila, int valor);
void visualizar(Fila* fila);

int main() {
  Fila* fila = (Fila*)malloc(sizeof(Fila));
  fila->inicio = NULL;
  fila->fim = NULL;
  
  int valor, escolha;

  do {
    printf("\n Escolha uma opcao: \n\t1 - Inserir\n\t2 - Visualizar\n\t3 - Sair\n");
    scanf("%d", &escolha);
    switch (escolha) {
    case 1:
      printf("\n > Digite um valor para inserir: ");
      scanf("%d", &valor);
      inserir(fila, valor);
      break;
    case 2:
      visualizar(fila);
      break;
    case 3:
      printf("\n > Saindo...\n\n");
      break;
    default:
      printf("\n > Opcao invalida! Tente novamente.\n");
      break;
    }
  } while (escolha != 3);
    
  return 0;
}

void inserir(Fila* fila, int valor) {
  Node* novoNode = (Node*)malloc(sizeof(Node));
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

void visualizar(Fila* fila) {
  if (fila->inicio == NULL) {
    printf("\n > Fila vazia!\n");
  }
  else {
    Node* atual = fila->inicio;
    printf("\n > Elementos inseridos na fila: \n\n\t");
    while (atual != NULL) {
      printf(" -> %d", atual->valor);
      atual = atual->proximo;
    }
  }
}
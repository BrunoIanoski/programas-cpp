// Bruno Manika Ianoski - Exercícios Pilha;

#include <stdio.h>
#include <stdlib.h>

typedef enum {
  COMUM,
  SUPERVISOR,
  GERENTE
} Funcionario;

typedef struct No {
    float salario;
    Funcionario tipo;
    float taxaSeguro;
    struct No* proximo;
} No;

typedef struct {
    No* topo;
} Pilha;

// ----- INÍCIO DA ÁREA DE DECLARAÇÃO DAS FUNÇÕES ----- //
Pilha* criarPilha();
void empilhar(Pilha* pilha);
int desempilhar(Pilha* pilha);
void visualizar(Pilha* pilha);
void liberarPilha(Pilha* pilha);
int mostrarMenu();
void esperarEnter();
// ----- FIM DA ÁREA DE DECLARAÇÃO DAS FUNÇÕES ----- //


// ===== INÍCIO DO PROGRAMA PRINCIPAL ===== //
int main() {
    Pilha* minhaPilha = criarPilha();
    int escolha;

    do {
        escolha = mostrarMenu();
        switch (escolha) {
            case 1:
                empilhar(minhaPilha);
                break;
            case 2:
                desempilhar(minhaPilha);
                break;
            case 3:
                visualizar(minhaPilha);
                break;
            case 4:
                liberarPilha(minhaPilha);
                free(minhaPilha);
                printf("\n > Saindo...\n\n");
                break;
            default:
                printf("\n > Opção inválida! Tente novamente.\n");
                esperarEnter();
                break;
        }
    } while (escolha != 4);

    return 0;
}
// ===== FIM DO PROGRAMA PRINCIPAL ===== //


// ----- INÍCIO DA ÁREA DE DEFINÇÃO DAS FUNÇÕES ----- //
/**
 * @brief Função para criar a variável que faz a gerência da pilha.
 * 
 * @return Pilha*: retorna um ponteiro do tipo Pilha com o endereço de memória alocado.
 */
Pilha* criarPilha() {
    Pilha* pilha = (Pilha*)malloc(sizeof(Pilha));
    pilha->topo = NULL;
    return pilha;
}

/**
 * @brief Função para empilhar (inserir / push) um nó na pilha.
 * 
 * @param pilha: deve conter o endereço de memória do tipo Pilha já alocado.
 * @param valor: deve conter um valor do tipo inteiro.  
 */
void empilhar(Pilha* pilha) {
    No* novoNo = (No*)malloc(sizeof(No));

    printf("\n > Digite o salário: ");
    scanf("%f", &novoNo->salario);
    printf("\n > Tipo (0-Comum, 1-Supervisor, 2-Gerente): ");
    scanf("%d", (int*)&novoNo->tipo);
    printf("\n > Taxa do seguro: ");
    scanf("%f", &novoNo->taxaSeguro);

    novoNo->proximo = pilha->topo;
    pilha->topo = novoNo;
}

/**
 * @brief Função para desempilhar/remover/pop um nó da pilha.
 * 
 * @param pilha: deve conter o endereço de memória do tipo Pilha já alocado.
 * @return int: retorna o valor inteiro da informação removida.
 */
int desempilhar(Pilha* pilha) {
    if (pilha->topo == NULL) {
        printf("\n > Pilha vazia! Não é possível desempilhar.\n");
        return -1;
    }
    No* temp = pilha->topo;
    printf("\n > Desempilhado:\n");
    printf("\tSalário: %.2f\n", temp->salario);
    printf("\tTipo: %d\n", temp->tipo);
    printf("\tTaxa Seguro: %.2f\n", temp->taxaSeguro);

    free(temp);
    esperarEnter();
    return 0;
}

/**
 * @brief Função para visualizar os elementos da pilha.
 * 
 * @param pilha: deve conter o endereço de memória do tipo Pilha já alocado.
 * @return void: sem retorno.
 */
void visualizar(Pilha* pilha) {
    if (pilha->topo == NULL) {
        printf("\n > Pilha vazia!\n");
    }else{
        No* atual = pilha->topo;
        printf("\n > Elementos na pilha: \n\n >");
        while (atual != NULL) {
          printf("\nSalário: %.2f | Tipo: %d | Seguro: %.2f",
          atual->salario, atual->tipo, atual->taxaSeguro);
          atual = atual->proximo;
        }
      printf("\n");
    }
    esperarEnter();
}

/**
 * @brief Função para liberar toda a memória alocada para a pilha e seus nós.
 * 
 * @param pilha: deve conter o endereço de memória do tipo Pilha já alocado.
 * @return void: sem retorno.
 */
void liberarPilha(Pilha* pilha) {
  No* atual = pilha->topo;
  No* proximo;
  while (atual != NULL) {
      proximo = atual->proximo;
      free(atual); // Libera o nó atual
      atual = proximo;
  }
  pilha->topo = NULL;
}

/**
 * @brief Função para mostrar o menu e obter a escolha do usuário.
 * 
 * @return int: retorna um inteiro contendo a opção escolhida pelo usuário
 */
int mostrarMenu() {
    int escolha;
    system("clear || cls");
    printf("\n### PILHA ###\n");
    printf("\n### Menu de Opções ###\n\n");
    printf("\t1. Empilhar\n");
    printf("\t2. Desempilhar\n");
    printf("\t3. Visualizar a pilha\n");
    printf("\t4. Sair\n\n");
    printf("\t# Escolha uma opção: ");
    scanf("%d", &escolha);
    return escolha;
}

/**
 * @brief Função para limpar '\n' indesejados e parar o programa até que
 * o usuário tecle 'enter' para continuar.
 *
 * return void: sem retorno.
 */
void esperarEnter() {
    while (getchar() != '\n'); // limpa buffer
    printf("\n\n Tecle [enter] para continuar...");
    getchar();
}
// ----- FIM DA ÁREA DE DEFINÇÃO DAS FUNÇÕES ----- //
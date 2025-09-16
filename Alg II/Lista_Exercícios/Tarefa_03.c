/**
    Este exercício visa desenvolver habilidades essenciais em C, 
    como manipulação de ponteiros, alocação dinâmica de memória, 
    validação de entradas e lógica de algoritmos simples, além de 
    compreender o endereçamento de memória. Esses conceitos são 
    fundamentais para a construção de sistemas complexos e aplicações 
    de alto desempenho. 

    Portanto, desenvolva um programa em linguagem C que simule o 
    controle de mensalidades de um curso. O programa deverá USAR FUNÇÕES
    e conter os seguintes itens principais:

    1. Perguntar ao usuário quantas mensalidades deseja registrar, 
       garantindo que o valor informado seja maior que zero.
       Caso contrário, o programa deve repetir a pergunta até que um 
       valor válido seja informado;
    2. Utilizar alocação dinâmica de memória com ponteiros para armazenar 
       os valores das mensalidades;
    3. Solicitar ao usuário que insira os valores de cada mensalidade, 
       também validando que cada valor seja maior que zero;
    4. Calcular a média dos valores das mensalidades;
    5. Exibir como resultado final:
            Todos os valores das mensalidades;
            O endereço de memória de cada valor armazenado;
            O valor da média calculada.
            Ex.: Parcela 01: R$ 425.50 [0xFAB12444]
                 ...
                 Parcela  n: R$ 585.50 [0xFAB124BB]
                 
                 Média das parcelas: R$ 597.74
 */

// A seguir tem-se um programa base para que vocês ajustem de acordo 
// o pedido anteriormente

#include <stdio.h>
#include <stdlib.h>

float media(float *mensalidade, int n){
    float somaMensalidade = 0;
    int i;

    for (i = 0; i < n; i++) {
        somaMensalidade += mensalidade[i];
    }

    float media = somaMensalidade/n;

    return media;
}

int main() {
    int n = 0, i;
    float *mensalidade;

    // ajustar e validar a quantidade informada
    while (n <= 0) {
        printf("\nQuantas mensalidades deseja registrar?: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Digite um numero valido!");
        }
    }

    // Usar a função calloc
    mensalidade = (float*) calloc(n, sizeof(float));
    if (mensalidade == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Preencher os valores das mensalidades
    for (i = 0; i < n; i++) {
        printf("Mensalidade %d: ", i+1);
        scanf("%f", &mensalidade[i]);
        while (mensalidade[i] <= 0) {
            printf("Digite um valor maior que zero!: ");
            scanf("%f", &mensalidade[i]);
        }
    }

    // Calcular média
    for (i = 0; i < n; i++){
        printf("Parcela %d: R$ %.2f [%p]\n", i + 1, mensalidade[i], &mensalidade[i]);
    }
    printf("Media das parcelas: R$ %.2f", media(mensalidade,n));

    // Libere a memória da área alocada
    free(mensalidade);

    return 0;
}

/**
 * Criar um programa capaz de receber 3 valores de mensalidade de um usuário;
 * Solicitar ao usuário informar se haverá ou não incidência de taxa(* 1.27);
 * 
 * Resultados (saída do terminal):
 *  Mostrar o nome do usuário;
 *  Mostrar a média dos valores da mensalidade sem taxa;
 *  Mostrar a média dos valores com taxa aplicada;
 */

#include <stdio.h>

int main(){
    float mensalidade, mensalidade2, mensalidade3;
    const float TAXA = 1.27;
    char nome[100];
    char validar;

    printf("\nInsira seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("\nInsira o valor da primeira mensalidade: ");
    scanf("%f", &mensalidade);
    getchar();
    
    printf("\nInsira o valor da segunda mensalidade: ");
    scanf("%f", &mensalidade2);
    getchar();
    
    printf("\nInsira o valor da terceira mensalidade: ");
    scanf("%f", &mensalidade3);
    getchar();

    printf("\n\tDeseja aplicar a TAXA?(s/n): ");
    scanf("%c", &validar);
    getchar();


    printf("\n\n\tNOME: %s", nome);

    if (validar == 's'){
        printf("\n\tMEDIA DOS VALORES COM TAXA APLICADA: %.2f", ((mensalidade*TAXA) + (mensalidade2*TAXA) + (mensalidade3*TAXA))/3);
    }
    else {
        printf("\n\tMEDIA DOS VALORES(SEM TAXA): %.2f", (mensalidade + mensalidade2 + mensalidade3)/3);
    }

    return 0;
}
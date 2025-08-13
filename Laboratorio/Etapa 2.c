#include <stdio.h>

int main(){
    int numero1;
    int numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    
    int soma = numero1 + numero2;
    printf("\nSOMA = %d", soma);
    
    int subtracao = numero1 - numero2;
    printf("\nSUBTRACAO = %d", subtracao);

    int multi = numero1 * numero2;
    printf("\nMULTIPLICACAO = %d", multi);

    float divisao = numero1 / numero2;
    printf("\nDIVISAO = %f", divisao);

    float resto = numero1 % numero2;
    printf("\nRESTO = %f\n", resto);

    float pi = 3.14;
    float raio;
    
    printf("\nDigite o raio do circulo: ");
    scanf("%f", &raio);

    float area = pi*(raio * raio);
    printf("\nA area do circulo e: %.2f\n", area);

    int idade;

    printf("\nInsira sua idade: ");
    scanf("%d", &idade);

    int tempo = idade*365;
    printf("Voce ja viveu %d dias.\n", tempo);

    

    return 0;
}

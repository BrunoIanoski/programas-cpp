#include <stdio.h>

int main(){
    // 3.7
    float numero;
 
    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero > 0){
        printf("%.2f e positivo!\n", numero);
    }
    else if (numero == 0){
        printf("%.2f e zero!\n", numero);
    }
    else {
        printf("%.2f e negativo!\n", numero);
    }   

    // 3.8
    float x , y;

    printf("Digite o primeiro numero: ");
    scanf("%f", &x);
    printf("Digite o segundo numero: ");
    scanf("%f", &y);

    if (x > y){
        printf("%.2f e maior que %.2f!\n", x, y);
    }
    else if (x == y){
        printf("%.2f e igual a %.2f!\n", x, y);
    }
    else {
        printf("%.2f e menor que %.2f!\n", x, y);
    }

    // 3.9
    int cont = 1; // em laços como WHILE, lembrar de usar o contador se necessário.
    float nota;
    float soma;

    do {
        printf("Digite a nota da prova %d (0 para sair): ", cont);
        scanf("%f", &soma);
        nota += soma;
        ++cont;
    }   while (soma != 0);
    cont -= 2;
    float media = nota / cont;
    printf("\nA media do aluno e %.2f.\n\n", media);

    if (media >= 7){
        printf("O aluno esta aprovado!\n");
    }
    else if (media >= 5 && media < 7){ // && AND
        printf("O aluno esta de recuperacao.\n");
    }
    else {
        printf("O aluno esta reprovado :(\n");
    }
    
    return 0;
}
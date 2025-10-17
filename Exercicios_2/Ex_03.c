#include <stdio.h>


void procedimento(int vetor[], int n, int valor){
    int i;
    printf("Os elementos do vetor sao:\n");
    for (i = 0; i < n; i++) {
        vetor[i] = valor;
        printf("[%d]", vetor[i]);
    }
    printf("\n");

}


int main(){
    int n = 5;  
    int vetor[5];
    int valor;

    printf("Digite o numero que deseja preencher: ");
    scanf("%d", &valor);

    procedimento(vetor,n, valor);

    return 0;
}
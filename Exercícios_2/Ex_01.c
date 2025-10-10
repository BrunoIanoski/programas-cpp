#include <stdio.h>


int soma (int vetor[],int n){
    int i;
    int resultado = 0;

    for (i = 0; i < n; i++){
        resultado += vetor[i];
    }

    return(resultado);
}

void test_soma_basico() {
    int vetor[] = {2, 3, 5};  // Soma = 10
    int n = 3;
    int resultado = soma(vetor, n);
    if (resultado == 10) {
        printf("✅ Teste soma_basico passou!\n");
    } else {
        printf("❌ Teste soma_basico falhou! Esperado 10, obtido %d\n", resultado);
    }
}


int main(){
    test_soma_basico();
    
    int i;
    int n = 3;
    int vetor[n];

    for (i = 0; i < n; i++) {
        printf("Digite o valor para o vetor: ");
        scanf("%d", &vetor[i]);
    }

    printf("%d\n", soma(vetor,n));

    return 0;
}
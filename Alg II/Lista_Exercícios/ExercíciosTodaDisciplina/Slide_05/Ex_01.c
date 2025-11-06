// Bruno Manika Ianoski - Exercício 01 do slide modificado em sala, adição e ajuste da variável transferido como boolean no corpo do struct.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct 
{
    char modelo[51];
    char marca[51];
    int ano;
    bool transferido;
} carro;


int main(void) {
    carro car[5];
    int tamVetor = sizeof(car) / sizeof(car[0]);
    int i, j = 0;

    for (i = 0; i < tamVetor; i++) {   
        for (j = 0; j < sizeof(car[i].marca); j++) 
        {
            car[i].marca[j] = '\0';
            car[i].modelo[j] = '\0';
        }
        car[i].ano = 0;
        car[i].transferido = false;
    }

    i = 0;
    while (i < tamVetor) 
    {
        printf("\nInforme o modelo: ");
        fgets(car[i].modelo, sizeof(car[i].modelo), stdin);
        
        printf("Informe a marca: ");
        fgets(car[i].marca, sizeof(car[i].marca), stdin);
        
        printf("Informe o ano: ");
        scanf("%i", &car[i].ano);
        getchar();

        char opcao;
        printf("O carro foi transferido? (S/N): ");
        scanf("%c", &opcao);
        getchar();

        if (opcao == 'S' || opcao == 's')
            car[i].transferido = true;
        else
            car[i].transferido = false;
        
        i++;
    }

    printf("\n ---- Carros cadastrados ----\n");
    for (i = 0; i < tamVetor; i++)
    {   
        printf("\n### Carro %d ###\n", i + 1);
        printf(" Modelo: %s\n Marca: %s\n Ano: %i\n Transferido: %s", 
                car[i].modelo, 
                car[i].marca, 
                car[i].ano,
                car[i].transferido ? "Sim" : "Nao");
        printf("\n###############\n");
    }

    return 0;
}

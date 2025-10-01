#include <stdio.h>

int main() {

    typedef struct {
       char nome[50];
       int matricula;
       float nota; 
    } Aluno;
    
    Aluno al[3];
    int tamVetor = sizeof(al) / sizeof(al[0]);

    for (int i = 0; i < tamVetor; i++) 
    {   
        for (int j = 0; j < sizeof(al[i].nome); j++) 
        {
            al[i].nome[j] = '\0';
        }
        al[i].matricula = 0;
        al[i].nota = 0;
    }

    int i = 0;
    while (i < tamVetor) 
    {
        printf("\nInforme o nome: ");
        fgets(al[i].nome, sizeof(al[i].nome), stdin);
        
        printf("Informe a matricula: ");
        scanf("%d", &al[i].matricula);

        printf("Informe a nota: ");
        scanf("%f", &al[i].nota);

        getchar();
        i++;
    }

    printf("\n ---- Alunos cadastrados ----\n");
    for (i = 0; i < tamVetor; i++)
    {   
        printf("\n--- Aluno %d ---\n", i + 1);
        printf(" Nome: %s Matricula: %d\n Nota: %.2f", 
                al[i].nome, 
                al[i].matricula, 
                al[i].nota);
        printf("\n---------------\n");
    }


    return 0;
}
#include <stdio.h>

int main() {

    typedef struct {
       char nome[50];
       int matricula;
       float nota; 
    } Aluno;
    
    // Um vetor do struct
    Aluno al[10];
    int tamVetor = sizeof(al) / sizeof(al[0]);

    // Zerar cada posição das variáveis no struct
    for (int i = 0; i < tamVetor; i++) 
    {   
        for (int j = 0; j < sizeof(al[i].nome); j++) 
        {
            al[i].nome[j] = '\0';
        }
        al[i].matricula = 0;
        al[i].nota = 0;
    }

    // preenchimento dos dados no struct
    int i = 0;
    char validar;

    printf("\nBem vindo, deseja cadastrar os alunos?(s/n): ");
    scanf("%c", &validar);
    getchar();

    while (validar != 'n' || validar != 'N') 
    {
        if (validar == 's' || validar == 'S') {
            printf("\nInforme o nome: ");
            fgets(al[i].nome, sizeof(al[i].nome), stdin);
            
            printf("Informe a matricula: ");
            scanf("%d", &al[i].matricula);

            printf("Informe a nota: ");
            scanf("%f", &al[i].nota);

            getchar();
            i++;

            printf("Deseja continuar?(s/n): ");
            scanf("%c", &validar);
            getchar();
        }
        else if (validar == 'n' || validar == 'N') {
            break;
        }
    }

    // Saída dos dados
    printf("\n ---- Alunos cadastrados ----\n");
    for (i = 0; i < tamVetor; i++) {
        if (al[i].matricula == 0) {
            break;
        }   
        printf("\n--- Aluno %d ---\n", i + 1);
        printf(" Nome: %s Matricula: %d\n Nota: %.2f", 
                al[i].nome, 
                al[i].matricula, 
                al[i].nota);
        printf("\n---------------\n");
    }

    return 0;
}
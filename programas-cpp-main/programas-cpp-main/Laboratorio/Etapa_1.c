#include <stdio.h>

int main(void){
    // 1.1
    printf("\nBruno Manika Ianoski\n");
    printf("19 anos\n");
    printf("Licenciatura em Computacao\n\n");
    
    // 1.2
    printf("Nao sei dizer, o que mudou\nmas nada esta igual\nquando a noite estranha\na gente se estranha e fica mal\nvoce tenta provar\nque tudo em nos morreu\nborboletas sempre voltam\ne o seu jardim sou eu.\n\n");

    // 1.3
    int i = 1;
    int CONSTANTE = 2;
    do { // laço de repetição (será executado pelo menos UMA vez).
        printf("%d x %d = %d\n", CONSTANTE, i, CONSTANTE * i);
        ++i;
    }   while (i <= 10);
    
    return 0;
}


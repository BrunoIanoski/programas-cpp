#include <stdio.h>
#include <ctype.h>

int main(){
    // 6.15
    char vetor[10];
    int i = 10;

    printf("insira a palavra: ");
    scanf("%9s", vetor);
    printf("%s\n", vetor);

    for (i = 10; i >= 0; --i){
        if (isalnum(vetor[i])){
            printf("%c", vetor[i]);
        }
    }
    printf("\n");
    

    // 6.16
    int x , y;

    printf("\t  0 1 2 3 4 5 6 7");
    for (x = 0; x <= 7; x++){
        printf("\n\t%d ", x);
        for (y = 0; y <= 7; y++){
            if ((x + y) % 2 == 0){
                printf("X ");
            }
            else{
                printf("O ");
            }
        }
    }

    return 0;
}
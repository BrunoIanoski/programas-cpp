#include <stdio.h>
#include <ctype.h>

int main(){
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

    return 0;
}
#include <stdio.h>


int main () {
    char string[50];
    char *ponteiro = string;
    int vogais = 0;

    printf("Digite uma string: ");
    scanf("%49[^\n]", string);


    for (int i = 0; *(string + i) != '\0'; i++) {
        if (*(string + i) == 'a' || *(string + i) == 'e' || *(string + i) == 'i' || *(string + i) == 'o' || *(string + i) == 'u') {
            vogais++;
        }
    }

    printf("\n%s\n", string);

    printf("%d\n", vogais);

    return 0;
}
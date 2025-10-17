#include <stdio.h>

int trocar(int *num1, int *num2){
    int num3 = *num1;
    *num1 = *num2;
    *num2 = num3;
}


int main(){
    int num1, num2;

    printf("Insira o primeiro e o segundo numero: \n");
    scanf("%d %d", &num1, &num2);

    trocar(&num1,&num2);

    printf("\n%d %d\n", num1, num2);

    return 0;
}
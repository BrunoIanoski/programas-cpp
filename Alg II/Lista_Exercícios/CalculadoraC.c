#include <stdio.h>
#include <math.h>

float raizCubica(double x) {
    x = cbrt(x);
    return x;
}

float potencia(double x, double y) {
    x = pow(x,y);
    return x;
}

float raizQuadrada(double x) {
    x = sqrt(x);
    return x;
}

float seno(double x) {
    x = sin(x);
    return x;
}

int main(){
    double x, y;
    int menu;
    char verificar;

    printf("\n-------------\n  BEM VINDO \n-------------\n");

    do {
        do {
            printf("\nInsira qual operacao voce deseja: \n");
            printf("\t1 - Raiz Cubica\n\t2 - Potencia\n\t3 - Raiz quadrada\n\t4 - Seno\n\t");
            scanf("%d", &menu);
            if (menu != 1 && menu != 2 && menu != 3 && menu != 4) {
                printf("\n>>>>>Insira um numero valido<<<<<\n");
            }
        }   while (menu != 1 && menu != 2 && menu != 3 && menu != 4);

        if (menu == 1) {
            printf("\nInsira o valor de x: ");
            scanf("%lf", &x);
            printf("\nA raiz cubica de %.2lf e: %.2lf", x, raizCubica(x));
        }

        else if (menu == 2) {
            printf("\nInsira o valor de x: ");
            scanf("%lf", &x);
            printf("\nInsira o valor de y: ");
            scanf("%lf", &y);
            printf("\n%.2lf elevado a %.2lf e: %.2lf", x, y, potencia(x,y));
        }
        
        else if (menu == 3) {
            printf("\nInsira o valor de x: ");
            scanf("%lf", &x);
            printf("\nA raiz quadrada de %.2lf e: %.2lf", x, raizQuadrada(x));
        }

        else if (menu == 4) {
            printf("\nInsira o valor de x: ");
            scanf("%lf", &x);
            double radiano = x * (3.14/180);
            printf("\nO seno de %.2lf e: %.2lf", x, seno(radiano));
        }

        printf("\n\nDeseja continuar? (s/n): ");
        scanf(" %c", &verificar);
        if (verificar == 's' || verificar == 'N'){
            continue;
        }
        else {
            printf("-------\nFIM.... \n-------");
            break;
        }

    }  while (verificar != 'n' || verificar != 'N');

    return 0;
}

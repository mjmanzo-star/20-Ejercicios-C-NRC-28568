#include <iostream>
#include <stdio.h>
#include <conio.h>
int main() {
    int op;
    int *p = &op;
    printf("1. Suma de dos numeros\n");
    printf("2. Mayor de dos numeros\n");
    printf("3. Suma de positivos (centinela -1)\n");
    printf("4. Salir\n");
    printf("Opcion: ");
    scanf("%d", p);
    switch (*p) {
        case 1: {
            float a, b;
            printf("Ingrese dos numeros: ");
            scanf("%f %f", &a, &b);
            printf("Suma: %.2f\n", a + b);
            break;
        }
        case 2: {
            float a, b;
            printf("Ingrese dos numeros: ");
            scanf("%f %f", &a, &b);
            if (a > b)
                printf("Mayor: %.2f\n", a);
            else
                printf("Mayor: %.2f\n", b);
            break;
        }
        case 3: {
            float n, suma = 0;
            printf("Ingrese numeros positivos (-1 para terminar):\n");
            scanf("%f", &n);
            while (n != -1) {
                if (n > 0)
                    suma += n;
                scanf("%f", &n);
            }
            printf("Suma de positivos: %.2f\n", suma);
            break;
        }
        case 4:
            printf("Saliendo\n");
            break;
        default:
            printf("Opcion invalida\n");
    }

    return 0;
}

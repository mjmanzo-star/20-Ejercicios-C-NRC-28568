#include <iostream>
#include <stdio.h>
#include <conio.h>
int main() {

    int n, i, j, mitad;
    int *p = &n;

    do {

        printf("Ingrese un numero impar de lineas (1-19): ");
        scanf("%d", p);

    } while (*p % 2 == 0 || *p < 1 || *p > 19);

    mitad = *p / 2;

    for (i = 0; i <= mitad; i++) {

        for (j = 0; j < mitad - i; j++)
            printf(" ");

        for (j = 0; j < 2 * i + 1; j++)
            printf("*");

        printf("\n");

    }

    for (i = mitad - 1; i >= 0; i--) {

        for (j = 0; j < mitad - i; j++)
            printf(" ");

        for (j = 0; j < 2 * i + 1; j++)
            printf("*");

        printf("\n");

    }

    return 0;
}

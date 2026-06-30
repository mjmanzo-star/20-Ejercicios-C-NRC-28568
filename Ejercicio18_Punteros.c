#include <iostream>
#include <stdio.h>
#include <conio.h>
int main() {
    float ventas;
    float *p = &ventas;
    printf("Ingrese las ventas (-1 para terminar): ");
    scanf("%f", p);
    while (*p != -1) {
        if (*p < 0) {
            printf("Error. Ingrese solo valores positivos o -1 para salir.\n");
        } else {
            printf("Salario: %.0f dolares\n", 200 + (*p * 0.09));
        }
        printf("Ingrese las ventas (-1 para terminar): ");
        scanf("%f", p);
    }
    printf("Programa finalizado.\n");
    return 0;
}

#include <iostream>
#include <stdio.h>
#include <conio.h>
int main() {
    int cuenta;
    int *p = &cuenta;
    float saldoInicial, creditos, limite, nuevoSaldo;
    printf("Ingrese el numero de cuenta: ");
    scanf("%d", p);
    while (*p != -1) {
        printf("Saldo inicial: ");
        scanf("%f", &saldoInicial);
        printf("Total de creditos: ");
        scanf("%f", &creditos);
        printf("Limite de credito: ");
        scanf("%f", &limite);
        if (saldoInicial < 0 || creditos < 0 || limite < 0) {
            printf("\nError. Los valores deben ser positivos.\n");
        } else {
            nuevoSaldo = saldoInicial + creditos;
            if (nuevoSaldo > limite) {
                printf("\nCuenta: %d\n", *p);
                printf("Limite de credito: %.2f\n", limite);
                printf("Nuevo saldo: %.2f\n", nuevoSaldo);
                printf("LIMITE DE CREDITO EXCEDIDO\n");
            } else {
                printf("\nLa cuenta esta dentro del limite de credito.\n");
            }
        }

        printf("\nIngrese el numero de cuenta: ");
        scanf("%d", p);
    }
    printf("\nPrograma finalizado.\n");

    return 0;
}

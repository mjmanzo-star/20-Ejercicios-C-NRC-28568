#include <iostream>
#include <stdio.h>
#include <stdlib.h>
int main() {

    long binario, temporal, decimal = 0, base = 1, digito;
    long *p = &binario;

    int valido = 1;

    printf("Ingrese un numero binario (solo 0 y 1): ");
    scanf("%ld", p);

    temporal = *p;

    while (temporal > 0) {

        digito = temporal % 10;

        if (digito != 0 && digito != 1) {
            valido = 0;
            break;
        }

        decimal += digito * base;
        base *= 2;
        temporal /= 10;
    }

    if (valido)
        printf("\nDecimal de %ld = %ld\n", *p, decimal);
    else
        printf("\nNumero binario invalido.\n");

    return 0;
}

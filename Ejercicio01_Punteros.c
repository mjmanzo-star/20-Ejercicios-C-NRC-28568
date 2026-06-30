#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {

    int tope;
    int *pTope = &tope;

    printf("Ingrese el numero tope: ");
    scanf("%d", pTope);

    printf("\n");
    printf("%-10s %-12s %-10s\n", "Numero", "Cuadrado", "Cubo");
    printf("\n");

    int i;
    int *pI = &i;

    for (*pI = 1; *pI <= *pTope; (*pI)++) {

        printf("%-10d %-12d %-10d\n",
               *pI,
               (*pI) * (*pI),
               (*pI) * (*pI) * (*pI));
    }

    return 0;
}

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
int main() {

    int numero;
    int *p = &numero;

    int primero, segundo, tercero, cuarto, quinto;

    printf("Ingrese un entero de 5 digitos: ");
    scanf("%d", p);

    primero = *p / 10000;
    segundo = (*p / 1000) % 10;
    tercero = (*p / 100) % 10;
    cuarto = (*p / 10) % 10;
    quinto = *p % 10;

    if (primero == quinto && segundo == cuarto)
        printf("\n%d ES un numero palindromo.\n", *p);
    else
        printf("\n%d NO es un numero palindromo.\n", *p);

    return 0;
}

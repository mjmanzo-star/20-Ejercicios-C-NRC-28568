#include <iostream>
#include <conio.h>
#include <stdlib.h>


int main() {

    int numero, suma = 0, cantidad = 0, menor;
    int *p = &numero;

    printf("Ingrese numeros (9999 para terminar): ");
    scanf("%d", p);

    if (*p != 9999)
        menor = *p;

    while (*p != 9999) {

        suma += *p;
        cantidad++;

        if (*p < menor)
            menor = *p;

        scanf("%d", p);
    }

    if (cantidad > 0) {

        printf("\nPromedio: %.2f\n", (float)suma / cantidad);
        printf("Menor numero: %d\n", menor);

    } else {

        printf("\nNo se ingresaron datos.\n");

    }

    return 0;
}

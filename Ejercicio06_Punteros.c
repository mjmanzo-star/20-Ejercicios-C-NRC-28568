#include <iostream>
#include <stdio.h>
#include <conio.h>
int main() {

    int numero, i, suma = 0;
    int *p = &numero;

    do {

        printf("Ingrese un numero positivo: ");
        scanf("%d", p);

    } while (*p <= 0);

    for (i = 1; i <= *p; i += 2) {

        suma += i;

    }

    printf("\nLa suma de los numeros impares del 1 al %d es: %d\n", *p, suma);

    return 0;
}

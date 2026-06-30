#include <iostream>
#include <stdio.h>
#include <string.h>

int main() {

    char texto[100];
    char *p = texto;

    int caracteres = 0;
    int palabras = 1;
    int lineas = 1;

    printf("Ingrese una palabra o texto sin espacios: ");
    scanf("%s", p);

    while (*p != '\0') {
        caracteres++;
        p++;
    }

    printf("\nCaracteres: %d", caracteres);
    printf("\nPalabras: %d", palabras);
    printf("\nLineas: %d", lineas);

    return 0;
}

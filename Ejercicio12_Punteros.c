#include <iostream>
#include <stdio.h>
#include <conio.h>
int main() {

    int n, i, temp;
    int d[4], cifrado[4];
    int *p = &n;

    printf("Ingrese un entero de 4 digitos: ");
    scanf("%d", p);

    temp = *p;

    for (i = 3; i >= 0; i--) {

        d[i] = temp % 10;
        temp /= 10;

    }

    for (i = 0; i < 4; i++) {

        cifrado[i] = (d[i] + 7) % 10;

    }

    temp = cifrado[0];
    cifrado[0] = cifrado[2];
    cifrado[2] = temp;

    temp = cifrado[1];
    cifrado[1] = cifrado[3];
    cifrado[3] = temp;

    printf("\nCifrado: ");

    for (i = 0; i < 4; i++)
        printf("%d", cifrado[i]);

    temp = cifrado[0];
    cifrado[0] = cifrado[2];
    cifrado[2] = temp;

    temp = cifrado[1];
    cifrado[1] = cifrado[3];
    cifrado[3] = temp;

    for (i = 0; i < 4; i++) {

        d[i] = (cifrado[i] + 3) % 10;
    }
    printf("\nDescifrado: ");

    for (i = 0; i < 4; i++)
        printf("%d", d[i]);

    printf("\n");

    return 0;
}

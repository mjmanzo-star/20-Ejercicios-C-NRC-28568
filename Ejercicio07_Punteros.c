#include <iostream>
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, mayor, x, y;
    float *p = &a;
    printf("Ingrese los tres lados: ");
    scanf("%f %f %f", p, &b, &c);

    if (*p > 0 && b > 0 && c > 0 &&
        *p + b > c &&
        *p + c > b &&
        b + c > *p) {
        printf("SI forman un triangulo.\n");
        mayor = (*p > b) ((*p > c) ? *p : c)
                     : ((b > c) ? b : c);
        if (mayor == *p) {
            x = b;
            y = c;
        } else if (mayor == b) {
            x = *p;
            y = c;
        } else {
            x = *p;
            y = b;
        }
        if (fabs(mayor * mayor - (x * x + y * y)) < 0.001)
            printf("Y es un triangulo rectangulo.\n");
        else
            printf("No es un triangulo rectangulo.\n");
    } else {
        printf("NO forman un triangulo.\n");
    }

    return 0;
}

#include <iostream>
#include <stdio.h>
#include <conio.h>
int main() {

    int n, i, j;
    int *p = &n;

    printf("Lado del cuadrado (1-20): ");
    scanf("%d", p);

    for (i = 1; i <= *p; i++) {

        for (j = 1; j <= *p; j++) {

            if (i == 1 || i == *p || j == 1 || j == *p)
                printf("*");
            else
                printf(" ");

        }

        printf("\n");

    }

    return 0;
}

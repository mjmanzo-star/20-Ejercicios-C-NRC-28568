#include <iostream>
#include <stdio.h>
#include <conio.h>
int main() {

    int n = 10, i, j;
    int *p = &n;

    printf("Patron A\n");

    for (i = 1; i <= *p; i++) {

        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    printf("\nPatron B\n");

    for (i = *p; i >= 1; i--) {

        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    printf("\nPatron C\n");

    for (i = *p; i >= 1; i--) {

        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    printf("\nPatron D\n");

    for (i = 1; i <= *p; i++) {

        for (j = 1; j <= *p - i; j++)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}

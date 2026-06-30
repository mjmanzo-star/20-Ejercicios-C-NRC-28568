#include <iostream>
#include <stdio.h>
#include <conio.h>
int main() {
    int n, i, j, d;
    int *p = &n;
    printf("Numero de lineas (>0): ");
    scanf("%d", p);
    for (i = 1; i <= *p; i++) {
        for (j = i; j < *p; j++)
            printf(" ");
        d = i % 10;
        for (j = i; j >= 1; j--)
            printf("%d", j % 10);
        for (j = 2; j <= i; j++)
            printf("%d", j % 10);
        printf("\n");
    }
    return 0;
}

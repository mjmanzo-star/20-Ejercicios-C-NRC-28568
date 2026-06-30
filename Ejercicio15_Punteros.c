#include <iostream>
#include <stdio.h>
#include <conio.h>
void decimal_a_romano(int n) {
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *simbolos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i;
    for (i = 0; i < 13; i++) {
    }
        while (n >= valores[i]) {
            printf("%s", simbolos[i]);
            n -= valores[i];
        }
    }
}
int main() {
    int n, i;
    int *p = &n;
    printf("Ingrese n: ");
    scanf("%d", p);
    for (i = 1; i <= *p; i++) {
        printf("%4d = ", i);
        decimal_a_romano(i);
        printf("\n");
    }
    return 0;
}

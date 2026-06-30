#include <iostream>
#include <stdio.h>
#include <conio.h>
int bisiesto(int a) {
    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
        return 1;
    else
        return 0;
}
int dias_mes(int mes, int anio) {
    int dias[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (mes == 2 && bisiesto(anio))
        return 29;
    return dias[mes];
}
int main() {
    int dd, mm, aa;
    int dias = 0, mes, anio;
    int *p = &aa;
    printf("Ingrese la fecha (dd-mm-aa): ");
    scanf("%d-%d-%d", &dd, &mm, p);
    *p += 1900;
    for (anio = 1960; anio < *p; anio++) {
        dias += 365;
        if (bisiesto(anio))
            dias++;
    }
    for (mes = 1; mes < mm; mes++) {
        dias += dias_mes(mes, *p);
    }
    dias += dd;
    printf("\nDias desde el 01-01-1960: %d\n", dias);

    return 0;
}

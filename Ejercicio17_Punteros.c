#include <iostream>
#include <stdio.h>
#include <conio.h>
int main() {
    float galones, kilometros, kmGalon;
    float totalGalones = 0, totalKilometros = 0;
    float *p = &galones;

    printf("Ingrese galones (-1 para terminar): ");
    scanf("%f", p);

    while (*p >= 0) {

        printf("Ingrese kilometros recorridos: ");
        scanf("%f", &kilometros);

        kmGalon = kilometros / *p;
        totalGalones += *p;
        totalKilometros += kilometros;
        printf("Km/galon de este tanque: %.1f\n", kmGalon);
        printf("Ingrese galones (-1 para terminar): ");
        scanf("%f", p);
    }
    if (totalGalones > 0) {
        printf("\nPromedio total de km/galon: %.3f\n",
               totalKilometros / totalGalones);
    }

    return 0;
}

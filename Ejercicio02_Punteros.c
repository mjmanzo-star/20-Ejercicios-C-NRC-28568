#include <iostream>
#include <stdio.h>
int main() {

    int inicio, fin;
    int *pInicio = &inicio;
    int *pFin = &fin;

    float celsius;
    float *pCelsius = &celsius;

    printf("Ingrese la temperatura inicial en Fahrenheit: ");
    scanf("%d", pInicio);

    printf("Ingrese la temperatura final en Fahrenheit: ");
    scanf("%d", pFin);

    printf("\n");
    printf("%-15s %-15s\n", "Fahrenheit", "Celsius");
    printf("\n");

    int fahrenheit;
    int *pFahrenheit = &fahrenheit;

    for (*pFahrenheit = *pInicio; *pFahrenheit <= *pFin; (*pFahrenheit) += 10) {

        *pCelsius = ((*pFahrenheit) - 32) * 5.0 / 9.0;

        printf("%-15d %-15.2f\n", *pFahrenheit, *pCelsius);
    }

    return 0;
}

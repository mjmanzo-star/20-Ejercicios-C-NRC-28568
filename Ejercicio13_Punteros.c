#include <iostream>
#include <stdio.h>
#include <conio.h>
int main() {
    int op;
    int *p = &op;
    do {
        printf("\n1. Suma de secuencia");
        printf("\n2. Suma pares");
        printf("\n3. Producto impares");
        printf("\n0. Salir");
        printf("\nOpcion: ");
        scanf("%d", p);}
        switch (*p) {
            case 1: {
                int n, i, valor, suma = 0;
                printf("Cuantos numeros va a ingresar: ");
                scanf("%d", &n);
                printf("Ingrese los numeros:\n");
                for (i = 0; i < n; i++) {
                    scanf("%d", &valor);
                    suma += valor;
                }
                printf("Suma: %d\n", suma);
                break;
            }
            case 2: {
                int n, i, suma = 0;
                printf("Ingrese n: ");
                scanf("%d", &n);
                for (i = 2; i <= n; i += 2)
                    suma += i;
                printf("Suma de pares del 2 al %d = %d\n", n, suma);
                break;
            }
            case 3: {
                int m, i;
                long producto = 1;
                printf("Ingrese m: ");
                scanf("%d", &m);
                for (i = 1; i <= m; i += 2)
                    producto *= i;
                printf("Producto de impares del 1 al %d = %ld\n", m, producto);
                break;
            }
            case 0:
                printf("Saliendo\n");
                break;
            default:
                printf("Opcion invalida.\n");
        }
    } while (*p != 0);

    return 0;
}

#include <stdio.h>
int maximo(int a, int b); /* prototipo de funcion */

main() {
    int x, y;
    int max;
    printf("Introduzca dos numeros: ");
    scanf("%d %d", &x, &y);
    max = maximo(x, y); /* llamada a la funcion */
    printf("El maximo es %d\n", max);
}

int maximo(int a, int b) /* definicion de la funcion */ {
    int max;
    if (a > b)
        max = a;
    else
        max = b;
    return max; /* devuelve el valor maximo */
}
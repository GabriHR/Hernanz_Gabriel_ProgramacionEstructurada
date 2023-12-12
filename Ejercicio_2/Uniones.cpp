#include <stdio.h>

union TipoDato {
    int entero;
    float flotante;
    char cadena[50];
};

int main() {
    union TipoDato miUnion;

    miUnion.entero = 4;
    printf("Valor como entero: %d\n", miUnion.entero);

    miUnion.flotante = 3.14;
    printf("Valor como decimal: %.2f\n", miUnion.flotante);

    union TipoDato miUnionCadena = {.cadena = "Hola, Mundo!"};
    printf("Valor como cadena: %s\n", miUnionCadena.cadena);

    return 0;
}
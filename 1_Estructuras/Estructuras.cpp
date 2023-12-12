#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

struct Nodo {
    struct Estudiante datos;
    struct Nodo* siguiente;
};

void agregarEstudiante(struct Nodo** lista, struct Estudiante nuevoEstudiante) {
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevoNodo->datos = nuevoEstudiante;
    nuevoNodo->siguiente = *lista;
    *lista = nuevoNodo;
}

void imprimirLista(struct Nodo* lista) {
    while (lista != NULL) {
        printf("Nombre: %s, edad: %d, promedio: %.2f\n", lista->datos.nombre, lista->datos.edad, lista->datos.promedio);
        lista = lista->siguiente;
    }
}

void eliminarEstudiante(struct Nodo** lista, char nombreEliminar[50]) {
    struct Nodo* actual = *lista;
    struct Nodo* anterior = NULL;

    while (actual != NULL) {
        if (strcmp(actual->datos.nombre, nombreEliminar) == 0) {
            if (anterior == NULL) {
                *lista = actual->siguiente;
            } else {
                anterior->siguiente = actual->siguiente;
            }
            free(actual);
            return;
        }
        anterior = actual;
        actual = actual->siguiente;
    }

    printf("Estudiante con nombre %s no encontrado.\n", nombreEliminar);
}

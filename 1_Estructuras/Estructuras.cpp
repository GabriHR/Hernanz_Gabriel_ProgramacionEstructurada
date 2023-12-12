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

int main() {
    struct Estudiante estudiante1 = {"Gabriel", 18, 90.0};

    struct Estudiante* estudiante2 = (struct Estudiante*)malloc(sizeof(struct Estudiante));
    strcpy(estudiante2->nombre, "TheGrefg");
    estudiante2->edad = 25;
    estudiante2->promedio = 7.75;

    struct Estudiante* estudiante3 = NULL;
    estudiante3 = (struct Estudiante*)malloc(sizeof(struct Estudiante));
    strcpy(estudiante3->nombre, "Nerea");
    estudiante3->edad = 17;
    estudiante3->promedio = 88.5;

    struct Nodo* listaEstudiantes = NULL;

    agregarEstudiante(&listaEstudiantes, estudiante1);
    agregarEstudiante(&listaEstudiantes, *estudiante2);
    agregarEstudiante(&listaEstudiantes, *estudiante3);

    printf("Lista de estudiantes:\n");
    imprimirLista(listaEstudiantes);

    char nombreEliminar[50] = "Maria";
    eliminarEstudiante(&listaEstudiantes, nombreEliminar);

    printf("\nLista de estudiantes despues de eliminar a %s:\n", nombreEliminar);
    imprimirLista(listaEstudiantes);

    free(estudiante2);
    free(estudiante3);

    struct Nodo* actual = listaEstudiantes;
    struct Nodo* siguiente = NULL;
    while (actual != NULL) {
        siguiente = actual->siguiente;
        free(actual);
        actual = siguiente;
    }

    return 0;
}

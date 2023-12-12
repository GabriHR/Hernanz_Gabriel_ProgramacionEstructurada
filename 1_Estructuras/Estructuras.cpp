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



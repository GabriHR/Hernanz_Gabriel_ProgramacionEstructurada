#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

void imprimirEstudiante(Estudiante& estudiante) {
    cout << "Nombre: " << estudiante.nombre << ", edad: " << estudiante.edad << ", promedio: " << estudiante.promedio << endl;
}


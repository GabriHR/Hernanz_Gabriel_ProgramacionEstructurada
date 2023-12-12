#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

void imprimirEstudiante(const Estudiante* estudiante) {
    if (estudiante != nullptr) {
        cout << "Nombre: " << estudiante->nombre << ", edad: " << estudiante->edad << ", promedio: " << estudiante->promedio << endl;
    } else {
        cerr << "Error: Puntero nulo proporcionado." << endl;
    }
}


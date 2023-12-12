#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

void imprimirEstudiante(const Estudiante& estudiante) {
    cout << "Nombre: " << estudiante.nombre << ", edad: " << estudiante.edad << ", promedio: " << estudiante.promedio << endl;
}

int main() {
    Estudiante estudiante1 = {"Gabriel", 19, 67.5};
    imprimirEstudiante(estudiante1);

    return 0;
}

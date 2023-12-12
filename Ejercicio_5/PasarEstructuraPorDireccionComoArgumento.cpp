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

int main() {
    Estudiante estudiante1 = {"Juan", 20, 85.5};
    imprimirEstudiante(&estudiante1);

    return 0;
}

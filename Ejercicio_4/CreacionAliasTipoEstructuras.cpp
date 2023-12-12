#include <iostream>
#include <string>
using namespace std;
struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

typedef Estudiante EstudianteAlias;
EstudianteAlias copiarEstudiante(const EstudianteAlias& original) {
    EstudianteAlias copia;
    copia.nombre = original.nombre;
    copia.edad = original.edad;
    copia.promedio = original.promedio;

    return copia;
}

int main() {
    EstudianteAlias estudianteOriginal = {"Gabriel", 4, 70.0};
    EstudianteAlias estudianteCopia = copiarEstudiante(estudianteOriginal);
    cout << "Estudiante Original:\n";
    cout << "Nombre: " << estudianteOriginal.nombre << ", edad: " << estudianteOriginal.edad << ", promedio: " << estudianteOriginal.promedio << endl;
    cout << "\nEstudiante Copiado:\n";
    cout << "Nombre: " << estudianteCopia.nombre << ", edad: " << estudianteCopia.edad << ", promedio: " << estudianteCopia.promedio << endl;

    return 0;
}

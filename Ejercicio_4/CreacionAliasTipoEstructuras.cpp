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

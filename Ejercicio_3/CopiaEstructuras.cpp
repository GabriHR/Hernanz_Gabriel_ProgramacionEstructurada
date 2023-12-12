#include <stdio.h>
#include <string.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};


struct Estudiante copiarEstudiante(struct Estudiante original) {
    struct Estudiante copia;
    strcpy(copia.nombre, original.nombre);
    copia.edad = original.edad;
    copia.promedio = original.promedio;

    return copia;
}

int main() {
    struct Estudiante estudianteOriginal = {"Gabriel", 18, 85};
    struct Estudiante estudianteCopia = copiarEstudiante(estudianteOriginal);

    printf("Estudiante Original:\n");
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudianteOriginal.nombre, estudianteOriginal.edad, estudianteOriginal.promedio);

    printf("\nEstudiante Copiado:\n");
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudianteCopia.nombre, estudianteCopia.edad, estudianteCopia.promedio);

    return 0;
}

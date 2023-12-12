#include <iostream>
#include <cstring>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

Estudiante copiarEstudiante(const Estudiante& original) {
    Estudiante copia;

    strcpy(copia.nombre, original.nombre);
    copia.edad = original.edad;
    copia.promedio = original.promedio;

    return copia;
}


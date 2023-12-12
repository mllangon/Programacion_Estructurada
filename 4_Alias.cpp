#include <iostream>
#include <cstring>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

typedef struct Estudiante EstudianteAlias;

EstudianteAlias obtenerCopiaYMostrarAlias(const Estudiante& estudiante) {

    std::cout << "Estudiante Original:" << std::endl;
    std::cout << "Nombre: " << estudiante.nombre << std::endl;
    std::cout << "Edad: " << estudiante.edad << std::endl;
    std::cout << "Promedio: " << estudiante.promedio << std::endl;


    EstudianteAlias copiaEstudiante;

    strcpy(copiaEstudiante.nombre, estudiante.nombre);
    copiaEstudiante.edad = estudiante.edad;
    copiaEstudiante.promedio = estudiante.promedio;

    std::cout << "\nAlias del Estudiante:" << std::endl;
    std::cout << "Nombre: " << copiaEstudiante.nombre << std::endl;
    std::cout << "Edad: " << copiaEstudiante.edad << std::endl;
    std::cout << "Promedio: " << copiaEstudiante.promedio << std::endl;

    return copiaEstudiante;
}

int main() {
    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;
    obtenerCopiaYMostrarAlias(estudiante1);

    return 0;
}
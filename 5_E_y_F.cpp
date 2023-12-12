#include <iostream>
#include <cstring>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

void imprimirEstudiantePorValor(Estudiante estudiante) {
    std::cout << "Nombre: " << estudiante.nombre << std::endl;
    std::cout << "Edad: " << estudiante.edad << std::endl;
    std::cout << "Promedio: " << estudiante.promedio << std::endl;
}

void imprimirEstudiantePorReferencia(const Estudiante& estudiante) {
    std::cout << "Nombre: " << estudiante.nombre << std::endl;
    std::cout << "Edad: " << estudiante.edad << std::endl;
    std::cout << "Promedio: " << estudiante.promedio << std::endl;
}

void imprimirEstudiantePorDireccion(const Estudiante* estudiante) {
    std::cout << "Nombre: " << estudiante->nombre << std::endl;
    std::cout << "Edad: " << estudiante->edad << std::endl;
    std::cout << "Promedio: " << estudiante->promedio << std::endl;
}

int main() {
    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;

    imprimirEstudiantePorValor(estudiante1);
    imprimirEstudiantePorReferencia(estudiante1);
    imprimirEstudiantePorDireccion(&estudiante1);

    return 0;
}
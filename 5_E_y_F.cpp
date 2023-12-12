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


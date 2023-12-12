#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Estudiante{
    char nombre[20];
    int edad;
    float promedio;
};

int main(){
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Mario");
    estudiante1.edad = 18;
    estudiante1.promedio = 8.3;

    struct Estudiante* estudiantePtr

}
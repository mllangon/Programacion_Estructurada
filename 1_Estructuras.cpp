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

    struct Estudiante* estudiante2;
    estudiante2 = (struct Estudiante*) malloc (sizeof(struct Estudiante));
    strcpy(estudiante2->nombre, "Sergio");
    estudiante2->edad = 19;
    estudiante2->promedio = 5.3;






}
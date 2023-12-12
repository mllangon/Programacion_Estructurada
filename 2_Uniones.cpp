#include<stdio.h>
#include<string.h>

union Datos{
    int Entero;
    float Flotante;
    char Caracter[30];
};

int main(){
    union Datos uni;

    uni.Entero = 33;
    printf("Entero: %d\n", uni.Entero);

    uni.Flotante = 3.1416;
    printf("Flotante: %.2f\n", uni.Flotante);

    strcpy(uni.Caracter, "Hola buenos dias");
    printf("Caracter: %s\n", uni.Caracter);

    return 0;
}
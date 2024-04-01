#include <stdio.h>
int main(){
    printf("Hola Mundo.\n");
    int variable=30;
    int *apuntado=&variable;
    //* 1) contenido del puntero
    printf("contenido del puntero: %d\n", *apuntado);
    //* 2) direccion de memoria almacenada por el puntero.
    printf("Direccion de memoria almacenada del puntero %p\n", apuntado);
    //* 3) Dirección de memoria de la variable
    printf("Direccion de memoria de la variable %p\n", &variable);
    //* 4) Dirección de memoria del puntero
    printf("Direccion de memoria del puntero %p\n", &apuntado);
    //* 5) Tamaño de memoria utilizado por la variable usando sizeof()
     printf("Tamanio de memoria utilizado por la variable: %lu bytes\n",sizeof(variable));
    return 0;
}
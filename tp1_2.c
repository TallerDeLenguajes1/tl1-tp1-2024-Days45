#include <stdio.h>
//*a) Haga una función que devuelva el cuadrado de un número
int cuadrado(int num);
//*b) Haga la función anterior, pero devolviendo un tipo void
void imprimirCuadrado(int num);
//*c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
void direccion_contenido(int *p);
//*Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
void invertir(int *a, int *b);
//*Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor.
void ordenar(int *a, int *b);
//*Utilice las funciones anteriores para leer pares de valores e imprimirlos por pantalla.
int main()
{
     int a, b;
    printf("introduce el primer numero: ");
    scanf("%d", &a);
    printf("introduce el segundo numero: ");
    scanf("%d", &b);
    printf("\nLos numeros son a = %d y b = %d.\n\n", a, b);
    printf("El cuadrado de %d es %d.\n", a, cuadrado(a));
    imprimirCuadrado(b);
    direccion_contenido(&a);
    direccion_contenido(&b);
    printf("antes de invertir,a = %d y b = %d.\n", a, b);
    invertir(&a, &b);
    printf("Ahora, a = %d y b = %d.\n", a, b);
    ordenar(&a, &b);
    printf("Despues de ordenar, a = %d, b = %d\n", a, b);
    return 0;
}
int cuadrado(int num)
{
    return num * num;
}
void imprimirCuadrado(int num)
{
    printf("El cuadrado de %d es %d\n", num, num * num);
}
void direccion_contenido(int *p){
    printf("Direccion de la variable: %p\n", p);
    printf("Contenido de la variable: %d\n", *p);
}
void invertir(int *a, int *b){
    int aux=*a;
    *a=*b;
    *b=aux;
}
void ordenar(int *a, int *b){
    if (*a>*b)
    {
        invertir(a, b);
    }
}
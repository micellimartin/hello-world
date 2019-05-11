#include <stdio.h>
#include <stdlib.h>

int sumar1(int, int); // prototipo de la funcion

int main()
{
    int x;
    int y;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d", &x);

     printf("Ingrese otro numero: ");
    scanf("%d", &y);

    resultado = sumar1(x, y);

    printf("La suma de los numeros es %d\n\n", resultado);

    return 0;
}

// Desarrollo de la funcion
int sumar1(int numero1, int numero2){

    int suma;

    suma = numero1 + numero2;

    return suma;

}

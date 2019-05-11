#include <stdio.h>
#include <stdlib.h>

void sumar2(int, int); // prototipo de la funcion

int main()
{
    int x;
    int y;


    printf("Ingrese un numero: ");
    scanf("%d", &x);

     printf("Ingrese otro numero: ");
    scanf("%d", &y);

     sumar2(x, y);

    return 0;
}

// Desarrollo de la funcion
void sumar2(int numero1, int numero2){

    int suma;

    suma = numero1 + numero2;

    printf("La suma de los numeros es %d\n\n", suma);

}

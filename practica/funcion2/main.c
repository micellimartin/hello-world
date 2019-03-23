#include <stdio.h>
#include <stdlib.h>

void sumar2(int, int);//void significa que la funcion no devuelve nada, si no devuelve nada no termina con return la function

int main()
{
    int x;
    int y;

//llamada de la funcion, aca no hay var resultado
    printf("Ingrese un numero");
    scanf("%d",&x);

    printf("Ingrese otro numero");
    scanf("%d",&y);

    sumar2(x, y);
    return 0;
}

void sumar2(int numero1, int numero2) // como sumar no devuelve nada, el resultado lo muestra la funcion por printf
{
    int suma;

    suma = numero1 + numero2;

    printf("La suma de los numeros es %d\n\n",suma);
}

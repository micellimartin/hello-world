#include <stdio.h>
#include <stdlib.h>

int sumar1(int, int);
//hago prototipo de function, la firma de la funcion, asi la puedo usar despues 1era parte de la function,
//es un resumen de lo que tiene la funcion, se fija que coincida el prototipo con la funcion

int main()
{
    int x;
    int y;
    int resultado;

//llamada de la funcion
    printf("Ingrese un numero");
    scanf("%d",&x);

    printf("Ingrese otro numero");
    scanf("%d",&y);

    resultado = sumar1(x, y);

    printf("La suma de los numeros es %d\n\n",resultado);
    return 0;
}

int sumar1(int numero1, int numero2) //lo que devuelve (int) nombre funcion y lo que recibe (num1 y num2)
{
    int suma ;
//desarollo de la funcion
    suma = numero1 + numero2;

    return suma; //asi devuelve la suma, que es suma, un int, por eso al principio pusimos int
}

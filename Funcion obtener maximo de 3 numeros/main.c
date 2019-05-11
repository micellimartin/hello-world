#include <stdio.h>
#include <stdlib.h>
#include "micelli.h"

int main()
{
    int resultado;
    int a;
    int b;
    int c;

    printf("Ingrese el primer numero.\n");
    scanf("%d",&a);

    printf("Ingrese el segundo numero.\n");
    scanf("%d",&b);

    printf("Ingrese el tercer numero.\n");
    scanf("%d",&c);


    resultado = obtenerMaximo(a,b,c);
    printf("El maximo es %d\n",resultado);
    return 0;
}

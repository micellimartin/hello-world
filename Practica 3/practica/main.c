#include <stdio.h>
#include <stdlib.h>

long factorial (int);

int main()
{
    int resultado;
    int num;

    printf("Ingrese un numero\n");
    scanf("%d",&num);
    resultado = factorial(num);
    printf("El resultado es: %d",resultado);
    return 0;
}

long factorial(int n)
{
    long rta;

    if(n<1)
    {
        rta = 1;
    }
    else
    {
        rta = n*factorial(n-1);
    }

    return rta;
}

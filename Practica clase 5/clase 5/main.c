#include <stdio.h>
#include <stdlib.h>

int contarPares (int vec [], int tam);

int main()
{
    int numeros [] = {1,2,3,4,5} ;

     int resultado = contarPares (numeros, 5);
     printf("La cantidad de pares es %d",resultado);

    return 0;
}

int contarPares (int vec [], int tam)
{
    int cantPares = 0;
    int i;

    for(i = 0 ; i < tam ; i++)
    {
        if(vec[i]%2==0)
        {
            cantPares++;
        }
    }

    return cantPares;
}

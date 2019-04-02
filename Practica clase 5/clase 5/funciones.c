#include "funciones.h"

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


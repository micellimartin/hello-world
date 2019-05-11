#include "micelli.h"

int obtenerMaximo (int x, int y, int z)
{
    int maximo;

    if(x>y && x>z)
    {
        maximo = x;
    }
    else
    {
        if(y>=x && y>z)
        {
        maximo = y;
        }
        else
        {
            maximo = z;
        }
    }

    return maximo;
}

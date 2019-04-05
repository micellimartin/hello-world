#include <stdio.h>
#include <stdlib.h>

void arrayX2 (int vec []);

int main()
{
    int arrayDeNumeros[] = {1,2,3,4,5};

    arrayX2(arrayDeNumeros);

    return 0;
}

void arrayX2 (int vec [])
{
    int indiceArray;

    printf("INDICE - VALOR\n\n");
    for(indiceArray = 0 ; indiceArray < 5 ; indiceArray++ )
    {
        printf("  %d    -   %d \n",indiceArray,vec[indiceArray]*2);
    }
}


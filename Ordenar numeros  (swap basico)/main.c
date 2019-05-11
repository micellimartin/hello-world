#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int vec [] = {15,22,3,44,112} ;

    int i;
    int j;
    int aux;
    int m;

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(vec[i]<vec[j])
            {
                aux = vec[i];
                vec[i] = vec[j];
                vec [j] = aux;
            }
        }
    }

    for(m=0;m<5;m++)
    {
        printf("%d\n",vec[m]);
    }

    return 0;
}

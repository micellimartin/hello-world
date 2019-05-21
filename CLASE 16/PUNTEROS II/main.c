#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* int* pnum;

    pnum = (int*)malloc(sizeof(int));

    //pnum = NULL;

    if(pnum==NULL)
    {
        printf("No se consiguio memoria.\n");
        system("pause");
        exit(1);
    }

    *pnum = 5;

    printf("El valor de pnum es: %d\n", *pnum);

    free(pnum); */

    int* numeros;//ejercicio con memoria dinamica

    int k;
    int l;

    numeros = (int*)malloc(sizeof(int)*5);

    if(numeros==NULL)
        {
            printf("No se consiguio memoria.\n");
            system("pause");
            exit(1);
        }

    for(k=0;k<5;k++)
    {
        printf("Ingrese un numero\n");
        scanf("%d", numeros+k);
    }

    for(l=0;l<5;l++)
    {
        printf("%d", *(numeros+l));
    }

    free(numeros);

    return 0;
}

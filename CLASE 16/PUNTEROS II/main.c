#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pnum;

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

    free(pnum);

    return 0;
}

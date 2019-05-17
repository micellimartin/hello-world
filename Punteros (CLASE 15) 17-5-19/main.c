#include <stdio.h>
#include <stdlib.h>

void modificar(int* a);

void f1(int x[], int tam);
void f2(int x[], int tam);
void f3(int* x, int tam);
void f4(int* x, int tam);

int main()
{
    /*int x = 10;

    printf("El valor de x es: %d\n", x);

    modificar(&x);

    printf("\nEl nuevo valor de x es: %d", x);*/

    int vec[] = {3,2,6,4,5};

    f1(vec, 5);
    f2(vec, 5);
    f3(vec, 5);
    f4(vec, 5);

    return 0;
}

void modificar(int* a)
{
    int b;

    printf("Ingrese un numero entero.\n");
    scanf("%d",&b);

    *a = b;
}

void f1(int x[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("%d\n", x[i]);
    }

    printf("\n");

}

void f2(int x[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("%d\n", *(x+i));
    }

    printf("\n");
}

void f3(int* x, int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("%d\n", x[i]);
    }

    printf("\n");
}

void f4(int* x, int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("%d\n", *(x+i));
    }

    printf("\n");
}


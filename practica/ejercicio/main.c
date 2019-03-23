#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char seguir;
    int flag = 1;
    int aux;
    int acumulador = 0;
    int i = 0;
    float promedio;
    int pares = 0;
    int max;
    int min;

    do
    {
        printf("Ingrese un numero positivo :\n");
        scanf("%d",&aux);

        while(!(aux>0 && isdigit(aux) != 0))
        {
            printf("El numero ingesado no es valido. Ingrese un numero positivo :\n");
            scanf("%d",&aux);
        }

        i++;
        acumulador = acumulador + aux;

        if(flag == 1)
        {
            max = aux;
            min = aux;
            flag = 0;
        }

        if(aux>max)
        {
            max = aux;
        }

        if(aux<min)
        {
            min = aux;
        }

        if(aux%2==0)
        {
            pares++;
        }

        printf("Desea continuar?\n");
        fflush(stdin);
        scanf("%c",&seguir);

    }while(seguir=='s');

    promedio = (float)acumulador/i;

    printf("La cantidad de numeros pares es :%d\n",pares);
    printf("El promedio de los numeros es :%f\n",promedio);
    printf("La suma de los numeros es :%d\n",acumulador);
    printf("El numero maximo es :%d\n",max);
    printf("El numero minimo es :%d\n",min);

    return 0;
}

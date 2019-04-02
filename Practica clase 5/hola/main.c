#include <stdio.h>
#include <stdlib.h>

int main()
{
    int legajos[5];
    int notas1[5];
    int notas2[5];
    float promedios[5];
    char sexos[5];

    int i;

    for(i=0;i<5;i++)
    {
        printf("Ingrese numero de legajo.\n");
        scanf("%d",&legajos[i]);

        printf("Ingrese la primera nota.\n");
        scanf("%d",&notas1[i]);

        printf("Ingrese la segunda nota.\n");
        scanf("%d",&notas2[i]);

        printf("Ingrese sexo del alumno.\n");
        fflush(stdin);
        scanf("%c",&sexos[i]);

        promedios[i] = (float) notas1[i] + notas2[i]/2;

    }

    for(i=0 ; i<5 ; i++ )
    {
        printf("%d %d %d %f %c ", legajos[i], );
    }

    return 0;
}

//1*pedimos datos
//2*mostramos

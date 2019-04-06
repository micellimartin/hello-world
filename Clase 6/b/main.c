#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nom [20];
    char ape [15];
    char nombreCompleto [40];

    printf("Ingrese el nombre: \n");
    scanf("%s", nom);

    printf("Ingrese el apellido: \n");
    scanf("%s", ape);

    strcpy(nombreCompleto,ape);
    strcat(nombreCompleto, ",");
    strcat(nombreCompleto, " ");
    strcat(nombreCompleto,nom);
    strupr(nombreCompleto[1]);
    puts(nombreCompleto);



    return 0;
}

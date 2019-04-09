#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VACIO 0
#define OCUPADO 1


typedef struct{

char nombre [20];
int legajo;
char sexo;
float sueldo;
int estado;

}Eempleado;

void mostrarEmpleado (Eempleado, int unEmpleado);

int main()
{
    /*Eempleado Eemp1;
    char auxCad [100];

    printf("Ingrese el nombre: \n");
    fflush(stdin);
    gets(auxCad);

    while(strlen(auxCad)>19)
    {
        printf("Nombre demsiado largo. Vuelva a ingresarlo.\n");
        fflush(stdin);
        gets(auxCad);
    }

    strcpy(Eemp1.nombre, auxCad);

    printf("Ingrese numero de legajo: \n");
    scanf("%d", &Eemp1.legajo);

    printf("Ingrese sexo: \n");
    fflush(stdin);
    scanf("%c", &Eemp1.sexo);

    printf("Ingrese sueldo: \n");
    scanf("%f", &Eemp1.sueldo);

    printf("\n");

    printf("%s\n", Eemp1.nombre);
    printf("%d\n", Eemp1.legajo);
    printf("%c\n", Eemp1.sexo);
    printf("%.3f\n", Eemp1.sueldo);
    */

    Eempleado nomima[3] = {{"Martin",1111,'m',30000},{"Ana",2222,'f',40000},{"Jose",3333,'m',50000}};


    return 0;
}

/*void mostrarEmpleado (Eempleado, int unEempleado)
{
    printf("Nombre: %s Legajo: %d Sexo: %c Sueldo: %.3f\n", unEempleado.nombre, unEempleado.legajo, unEempleado.sexo, unEempleado.sueldo);
}
*/

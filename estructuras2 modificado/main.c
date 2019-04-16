#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

#define TAM 10

typedef struct
{
    int dia;
    int mes;
    int anio;

}fecha;

typedef struct
{

    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    int ocupado;
    fecha fechaIngreso;


} eEmpleado;

int menu();

void inicializarEmpleados(eEmpleado vec[], int tam);

int buscarLibre(eEmpleado vec[], int tam);

int buscarEmpleado(eEmpleado vec[], int tam, int legajo);

void mostrarEmpleado(eEmpleado emp);

void mostrarEmpleados(eEmpleado vec[], int tam);

void altaEmpleado(eEmpleado vec[], int tam);

void bajaEmpleado(eEmpleado vec[], int tam);

void ModificacionEmpleado(eEmpleado vec[], int tam);

void hardcorearEmpleados(eEmpleado vec[], int tam);

void empleadosPorAnio(eEmpleado vec[], int tam, int anio);

int main()
{
    char seguir = 's';
    char confirma;
    eEmpleado lista[TAM];
    inicializarEmpleados(lista, TAM); // llamada
    hardcorearEmpleados(lista, 5);

    do
    {
        switch(menu())
        {

        case 1:
            // printf("\nAlta empleado\n\n");
            altaEmpleado(lista, TAM);
            system("pause");
            break;

        case 2:
            //printf("\nBaja empleado\n\n");
            bajaEmpleado(lista, TAM);
            system("pause");
            break;

        case 3:
            //printf("\nModificacion empleado\n\n");
            ModificacionEmpleado(lista,TAM);
            system("pause");
            break;

        case 4:
            printf("\nOrdenar empleados\n\n");
            system("pause");
            break;

        case 5:
            //printf("\nListar empleados\n\n");
            mostrarEmpleados(lista, TAM);
            system("pause");
            break;

        case 6:
            printf("\nConfirma salida s/n?: ");
            fflush(stdin);
            confirma = getche();

            if( tolower(confirma) == 's')
            {
                seguir = 'n';
            }
            break;

        default:
            printf("\n Opcion invalida\n\n");
            system("break");
        }
    }
    while(seguir == 's');

    return 0;
}

void inicializarEmpleados(eEmpleado vec[], int tam)
{
    int i;

    for(i=0; i < tam; i++)
    {
        vec[i].ocupado = 0;
    }
}

int menu()
{
    int opcion;

    system("cls");
    printf("  *** ABM Empleados ***\n\n");
    printf("1- Alta Empleado\n");
    printf("2- Baja Empleado\n");
    printf("3- Modificacion Empleado\n");
    printf("4- Ordenar Empleados\n");
    printf("5- Listar Empleados\n");
    printf("6- Salir\n\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

int buscarLibre(eEmpleado vec[], int tam)
{

    int indice = -1;
    int i;

    for(i=0; i < tam; i++)
    {
        if(vec[i].ocupado == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

int buscarEmpleado(eEmpleado vec[], int tam, int legajo)
{

    int indice = -1;
    int i;

    for(i=0; i < tam; i++)
    {
        if( vec[i].legajo == legajo && vec[i].ocupado == 1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

void mostrarEmpleado(eEmpleado emp)
{

    printf("  %d   %s   %c    %.2f   %d/%d/%d \n", emp.legajo, emp.nombre, emp.sexo, emp.sueldo, emp.fechaIngreso.dia, emp.fechaIngreso.mes, emp.fechaIngreso.anio);

}

void mostrarEmpleados(eEmpleado vec[], int tam)
{
    int cont= 0;
    int i;

    for(i=0; i < tam; i++)
    {
        if(vec[i].ocupado == 1)
        {

            mostrarEmpleado(vec[i]);
            cont++;
        }
    }
    if(cont == 0)
    {
        printf("No hay empleados que mostrar\n\n");
    }
}

void altaEmpleado(eEmpleado vec[], int tam)
{
    int indice;
    int legajo;
    int esta;

    indice = buscarLibre(vec, tam);

    if(indice == -1)
    {
        printf("No hay lugar");
    }
    else
    {

        printf("Ingrese legajo: ");
        scanf("%d", &legajo);

        esta = buscarEmpleado(vec, tam, legajo);

        if( esta == -1)
        {
            vec[indice].legajo = legajo;

            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(vec[indice].nombre);

            printf("Ingrese sexo: ");
            fflush(stdin);
            scanf("%c", &vec[indice].sexo);

            printf("Ingrese sueldo: ");
            scanf("%f", &vec[indice].sueldo);

            printf("Ingrese dia de ingreso: ");
            scanf("%d", &vec[indice].fechaIngreso.dia);

            printf("Ingrese mes de ingreso: ");
            scanf("%d", &vec[indice].fechaIngreso.mes);

            printf("Ingrese anio de ingreso: ");
            scanf("%d", &vec[indice].fechaIngreso.anio);

            vec[indice].ocupado = 1;

            printf("\nEl empleado ha sido registrado con exito!!!\n\n");

        }
        else
        {

            printf("Ya existe un empleado con el legajo %d\n", legajo);

            mostrarEmpleado(vec[esta]);
        }
    }
}

void bajaEmpleado(eEmpleado vec[], int tam){

    int legajo;
    char confirma;
    int esta;

    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    esta = buscarEmpleado(vec, tam, legajo);

    if( esta == -1){

        printf("\nEl legajo %d no esta registrado en el sistema\n", legajo);
    }
    else{
        mostrarEmpleado(vec[esta]);

        printf("\nConfirma la eliminacion? s/n");
        fflush(stdin);
        confirma = tolower(getche());

        if(confirma == 's'){
            vec[esta].ocupado = 0;
        }
        else{
            printf("\nLa eliminacion ha sido cancelada\n");
        }

    }





}

void ModificacionEmpleado(eEmpleado vec[], int tam){

    int legajo;
    char confirma;
    float nuevoSueldo;
    int esta;

    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    esta = buscarEmpleado(vec, tam, legajo);

    if( esta == -1){

        printf("\nEl legajo %d no esta registrado en el sistema\n", legajo);
    }
    else{
        mostrarEmpleado(vec[esta]);

        printf("\nQuiere cambiar el sueldo? s/n");
        fflush(stdin);
        confirma = tolower(getche());

        if(confirma == 's'){
            printf("\nIngrese nuevo sueldo: ");
            scanf("%f", &nuevoSueldo);
            //valido sueldo
            vec[esta].sueldo = nuevoSueldo;
        }
        else{
            printf("\nNo se ha modificado el sueldo\n");
        }

    }

void hardcorearEmpleados(eEmpleado vec[], int tam)
{
    int i;

    eEmpleado empleados [6] ={{1234, "Julian", 'm', 50000, 1, {1, 4, 2000}},
                               {1229, "Maria", 'f', 60000, 1, {2, 8, 1995}},
                               {6012, "Ariel", 'm', 20000, 1, {17, 5, 2006}},
                               {3456, "Ayelen", 'f', 15000, 1, {22, 9, 2010}},
                               {8334, "Susana", 'f', 70000, 1, {11, 10, 2002}}};

    for(i=0;i<tam;i++)
    {
        vec[i] = empleados[i];
    }
}

void empleadosPorAnio(eEmpleado vec[], int tam, int anio)
{
    int cont= 0;
    int i;

    for(i=0; i < tam; i++)
    {
        if(vec[i].ocupado == 1 && eEmpleado.fechaIngreso.anio == anio)
        {

            mostrarEmpleado(vec[i]);
            cont++;
        }
    }
    if(cont == 0)
    {
        printf("No hay empleados que mostrar\n\n");
    }
}




}

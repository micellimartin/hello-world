#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

#define TAMAUTOS 100
#define TAMMARCAS 5
#define TAMCOLORES 5
#define TAMSERVICIOS 4
#define TAMTRABAJOS 100

typedef struct
{
    int dia;
    int mes;
    int anio;

} eFecha;

typedef struct
{
    int id;
    char descripcion [21];

} eMarca;

typedef struct
{
    int id;
    char nombreColor [21];

} eColor;

typedef struct
{
    int id;
    char patente [7];
    int idMarca;
    int idColor;
    int modelo;

} eAuto;

typedef struct
{
    int id;
    char descripcion [26];
    int precio;

} eServicio;

typedef struct
{
    int id;
    char patente[7];
    int idServicio;
    eFecha fecha;

} eTrabajo;

int menu();

void listarMarcas(eMarca marcas [], int tam);

void listarColores(eColor colores [], int tam);

void listarServicios(eServicio servicios [], int tam);

void inicializarAutos(eAuto autos[], int tam);

void inicializarTrabajos(eTrabajo trabajos[], int tam);

int buscarLibre(eAuto autos[], int tam);

int buscarLibreTrabajo(eTrabajo trabajos[], int tam);

void altaAuto(eAuto autos[], int tam, eMarca marcas[], int tamMarcas, eColor colores[], int tamColores);

void altaTrabajo(eTrabajo trabajos[], int tam, eServicio servicios[], int tamServicios);

int buscarAutoPorPatente(eAuto autos[], int tam, char patente[]);

int obtenerMarca(eMarca marcas[], int tamMarcas, int idMarca, char desc[]);

int obtenerColor(eColor colores[], int tamColores, int idColor, char desc[]);

int obtenerServicio(eServicio servicios[], int tamServicios, int idServicio, char desc[]);

void modificarAuto(eAuto autos[], int tam, eMarca marcas[], int tamMarcas, eColor colores[], int tamColores);

void bajaAuto(eAuto autos[], int tam, eMarca marcas[], int tamMarcas, eColor colores[], int tamColores);

void ordenarAutos(eAuto autos[], int tam);

void listarAutos(eAuto autos[], int tam, eMarca marcas[], int tamMarcas, eColor colores[], int tamColores);

void listarTrabajos(eTrabajo trabajos[], int tam, eServicio servicios[], int tamServicios);

int main()
{
    eMarca marcas [TAMMARCAS] = {
                        {1000, "Renault"},
                        {1001, "Fiat"},
                        {1002, "Ford"},
                        {1003, "Chevrolet"},
                        {1004, "Peugeot"},
                       };

    eColor Colores [TAMCOLORES] = {
                        {5000, "Negro"},
                        {5001, "Blanco"},
                        {5002, "Gris"},
                        {5003, "Rojo"},
                        {5004, "Azul"},
                        };

    eServicio Servicios [TAMSERVICIOS] = {
                             {20000, "Lavado", 250},
                             {20001, "Pulido", 300},
                             {20002, "Encerado", 400},
                             {20003, "Completo", 600},
                             };

    eAuto autos [TAMAUTOS] = {
                             {1, "PWR123", 1000, 5000, 2000},
                             {2, "YHJ556", 1001, 5001, 2010},
                             {3, "VBN148", 1002, 5002, 2005},
                             {4, "VJK789", 1003, 5003, 2002},
                             {5, "ZSG102", 1004, 5004, 2001},
                             {6, "QWE996", 1001, 5000, 2011},
                             {7, "NNM410", 1002, 5001, 2015},
                             {8, "PLO917", 1003, 5002, 2009},
                             };

    eTrabajo trabajos [TAMTRABAJOS] = {
                             {1, "PWR123", 20000,{1, 4, 2019}},
                             {2, "YHJ556", 20001,{4, 4, 2019}},
                             {3, "VBN148", 20002,{7, 4, 2019}},
                             {4, "VJK789", 20003,{12, 4, 2019}},
                             {5, "ZSG102", 20000,{15, 4, 2019}},
                             {6, "QWE996", 20001,{22, 4, 2019}},
                             {7, "NNM410", 20002,{23, 4, 2019}},
                             {8, "PLO917", 20003,{27, 4, 2019}},
                             };


    char seguir = 's';
    char confirma;
    //eAuto autos [TAMAUTOS];
    //inicializarAutos(autos, TAMAUTOS);
    //eTrabajo trabajos[TAMTRABAJOS];
    //inicializarTrabajos(trabajos, TAMTRABAJOS);

    do{

        switch(menu())
        {
        case 1:

            altaAuto(autos, TAMAUTOS, marcas, TAMMARCAS, Colores, TAMCOLORES);
            system("pause");
            break;

        case 2:

            modificarAuto(autos, TAMAUTOS, marcas, TAMMARCAS, Colores, TAMCOLORES);
            system("pause");
            break;

        case 3:

            bajaAuto(autos, TAMAUTOS, marcas, TAMMARCAS, Colores, TAMCOLORES);
            system("pause");
            break;

        case 4:

            ordenarAutos(autos, TAMAUTOS);
            listarAutos(autos, TAMAUTOS, marcas, TAMMARCAS, Colores, TAMCOLORES);
            system("pause");
            break;

        case 5:

            listarMarcas(marcas, 5);
            system("pause");
            break;

        case 6:

            listarColores(Colores, 5);
            system("pause");
            break;

        case 7:

            listarServicios(Servicios, 4);
            system("pause");
            break;

        case 8:

            altaTrabajo(trabajos, TAMTRABAJOS, Servicios, TAMSERVICIOS);
            system("pause");
            break;

        case 9:

            listarTrabajos(trabajos, TAMTRABAJOS, Servicios, TAMSERVICIOS);
            system("pause");
            break;

        case 10:

            printf("\nConfirma salida? s/n: \n");
            fflush(stdin);
            confirma = getche();

            if( tolower(confirma) == 's')
            {
                seguir = 'n';
            }
            break;

        default:

            printf("Opcion invalida\n");
            fflush(stdin);
            system ("pause");
            break;
        }

    }while(seguir == 's');

    return 0;
}

int menu()
{
    int opcion;

    system("cls");
    printf("  *** LAVADERO DE AUTOS ***\n\n");
    printf("1-  ALTA AUTO\n");
    printf("2-  MODIFICAR AUTO\n");
    printf("3-  BAJA AUTO\n");
    printf("4-  LISTAR AUTOS\n");
    printf("5-  LISTAR MARCAS\n");
    printf("6-  LISTAR COLORES\n");
    printf("7-  LISTAR SERVICIOS\n");
    printf("8-  ALTA TRABAJO\n");
    printf("9-  LISTAR TRABAJOS\n");
    printf("10- SALIR\n\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

void inicializarAutos(eAuto autos[], int tam)
{

    for(int i=0; i < tam; i++)
    {
        autos[i].id = 0;
    }
}

void inicializarTrabajos(eTrabajo trabajos[], int tam)
{

    for(int i=0; i < tam; i++)
    {
        trabajos[i].id = 0;
    }
}

int buscarLibre(eAuto autos[], int tam)
{

    int indice = -1;

    for(int i=0; i < tam; i++)
    {
        if(autos[i].id == 0)
        {
            indice = i;
            break;
        }
    }

    return indice;
}

int buscarLibreTrabajo(eTrabajo trabajos[], int tam)
{

    int indice = -1;

    for(int i=0; i < tam; i++)
    {
        if(trabajos[i].id == 0)
        {
            indice = i;
            break;
        }
    }

    return indice;
}

void listarMarcas(eMarca marcas [], int tam)
{
    int i;

    printf("\n ID                MARCA\n");
    printf(" --                -----\n");

    for(i=0; i<tam; i++)
    {
        printf("\n %d              %s\n\n", marcas[i].id, marcas[i].descripcion);
    }
}

void listarColores(eColor colores [], int tam)
{
    int i;

    printf("\n ID                COLORES\n");
    printf(" --                -------\n");

    for(i=0; i<tam; i++)
    {
        printf("\n %d              %s\n\n", colores[i].id, colores[i].nombreColor);
    }
}

void listarServicios(eServicio servicios [], int tam)
{
    int i;

    printf("\n ID                   SERVICIO            PRECIO\n");
    printf(" --                   --------            ------\n");

    for(i=0; i<tam; i++)
    {
        printf("\n %5d              %10s           %5d\n\n", servicios[i].id, servicios[i].descripcion, servicios[i].precio);
    }
}


void altaAuto(eAuto autos[], int tam, eMarca marcas[], int tamMarcas, eColor colores[], int tamColores)
{

    int indice;

    indice = buscarLibre(autos, tam);

    if( indice == -1)
    {

        printf("\nNo hay lugar en el sistema\n");
    }
    else
    {
        autos[indice].id = indice + 1;

        printf("\n*** ALTA DE AUTO ***\n\n");

        printf("Ingrese patente :\n\n");
        fflush(stdin);
        gets(autos[indice].patente);

        listarMarcas(marcas, tamMarcas);

        printf("Ingrese ID de la marca: \n\n");
        fflush(stdin);
        scanf("%d", &autos[indice].idMarca);

        listarColores(colores, tamColores);

        printf("Ingrese ID del color: \n\n");
        fflush(stdin);
        scanf("%d", &autos[indice].idColor );

        printf("\nIngrese modelo (Anio de fabricacion): \n\n");
        fflush(stdin);
        scanf("%d", &autos[indice].modelo);

        printf("\nAlta de auto exitosa!\n\n");

    }
}

int buscarAutoPorPatente(eAuto autos[], int tam, char patente[])
{
    int indice = -1;
    int i;

    for(i=0; i<tam; i++)
    {
        if( stricmp(autos[i].patente, patente) == 0 && autos[i].id != 0 )
        {
            indice = i;
            break;
        }
    }

    return indice;
}

int obtenerMarca(eMarca marcas[], int tamMarcas, int idMarca, char desc[])
{
    int todoOk = 0;

    for(int i=0; i < tamMarcas; i++)
    {
        if(idMarca == marcas[i].id)
        {

            strcpy(desc, marcas[i].descripcion);
            break;
        }
    }

    return todoOk;
}

int obtenerColor(eColor colores[], int tamColores, int idColor, char desc[])
{
    int todoOk = 0;

    for(int i=0; i < tamColores; i++)
    {
        if(idColor == colores[i].id)
        {
            strcpy(desc, colores[i].nombreColor);
            todoOk = 1;
            break;
        }
    }

    return todoOk;
}

int obtenerServicio(eServicio servicios[], int tamServicios, int idServicio, char desc[])
{
    int todoOk = 0;

    for(int i=0; i < tamServicios; i++)
    {
        if(idServicio == servicios[i].id)
        {
            strcpy(desc, servicios[i].descripcion);
            break;
        }
    }

    return todoOk;
}

void modificarAuto(eAuto autos[], int tam, eMarca marcas[], int tamMarcas, eColor colores[], int tamColores)
{
    char patente [21];
    int esta;
    int opcion;
    int seguir = 's';
    char nombreMarca[21];
    char nombreColor[21];

    printf("\n*** MODIFICAR AUTO ***\n\n");

    printf("Ingrese patente :\n\n");
    fflush(stdin);
    gets(patente);

    esta = buscarAutoPorPatente(autos, tam, patente);

    if(esta == -1)
    {
        printf("\nLa patente %s no esta registrada en el sistema\n\n", patente);
    }
    else
    {
        obtenerMarca(marcas, tamMarcas, autos[esta].idMarca, nombreMarca);

       do
       {

        obtenerColor(colores, tamColores, autos[esta].idColor, nombreColor);

        system("cls");

        printf("\n*** MODIFICAR AUTO ***\n\n");
        printf("ID :          %d\n",autos[esta].id);
        printf("PATENTE:      %s\n",autos[esta].patente);
        printf("MARCA:        %s\n",nombreMarca);
        printf("COLOR:        %s\n",nombreColor);
        printf("MODELO:       %d\n",autos[esta].modelo);

        printf("\nIngrese la opcion a modificiar: \n");
        printf("\n1-COLOR\n");
        printf("2-MODELO\n");
        printf("3-VOLVER AL MENU PRINCIPAL\n");
        printf("\nIngrese opcion: \n");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
                listarColores(colores, tamColores);

                printf("Ingrese ID del color: \n\n");
                fflush(stdin);
                scanf("%d", &autos[esta].idColor );
                break;

        case 2:
                printf("\nIngrese modelo (Anio de fabricacion): \n\n");
                fflush(stdin);
                scanf("%d", &autos[esta].modelo);
                break;

        case 3:
                printf("Fin modificacion\n");
                seguir = 'n';
                break;

        default:

            printf("Opcion invalida\n");
            fflush(stdin);
            system ("pause");
            break;
        }

       } while(seguir == 's');
    }
}

void bajaAuto(eAuto autos[], int tam, eMarca marcas[], int tamMarcas, eColor colores[], int tamColores)
{
    char confirma;
    int esta;
    char patente[21];
    char nombreMarca[21];
    char nombreColor[21];

    printf("\n*** BAJA AUTO ***\n\n");

    printf("Ingrese patente :\n\n");
    fflush(stdin);
    gets(patente);

    esta = buscarAutoPorPatente(autos, tam, patente);

    if(esta == -1)
    {
        printf("\nLa patente %s no esta registrada en el sistema.\n\n", patente);
    }
    else
    {
        obtenerMarca(marcas, tamMarcas, autos[esta].idMarca, nombreMarca);
        obtenerColor(colores, tamColores, autos[esta].idColor, nombreColor);

        printf("\nID :          %d\n",autos[esta].id);
        printf("PATENTE:      %s\n",autos[esta].patente);
        printf("MARCA:        %s\n",nombreMarca);
        printf("COLOR:        %s\n",nombreColor);
        printf("MODELO:       %d\n\n",autos[esta].modelo);

        printf("Confirma eliminacion? s/n\n");
        fflush(stdin);
        confirma = tolower(getche());

        if(confirma == 's')
        {
            autos[esta].id = 0;
            printf("\n\nEliminacion exitosa.\n");
        }
        else
        {
            printf("\n\nEliminacion cancelada.\n");
        }
    }
}

void ordenarAutos(eAuto autos[], int tam)
{
    int i;
    int j;

    eAuto aux;

    for(i=0; i<tam - 1; i++)
    {
        if(autos[i].id == 0)
        {
            continue;
        }

        for(j=i+1; j<tam; j++)
        {
            if(autos[j].id == 0)
            {
                continue;
            }
            else
            {
                if(autos[i].idMarca > autos[j].idMarca)
                {
                    aux = autos[j];
                    autos[j] = autos[i];
                    autos[i] = aux;
                }
                else if(autos[i].idMarca == autos[j].idMarca && stricmp(autos[i].patente, autos[j].patente)>0)
                {
                    aux = autos[j];
                    autos[j] = autos[i];
                    autos[i] = aux;
                }
            }
        }
    }
}

void listarAutos(eAuto autos[], int tam, eMarca marcas[], int tamMarcas, eColor colores[], int tamColores)
{
    int contador = 0;
    char nombreMarca[21];
    char nombreColor[21];

    system("cls");

    printf(" ID      PATENTE          MARCA          COLOR      MODELO\n");
    printf(" --      -------          -----          -----      ------\n");

    for(int i=0; i < tam; i++)
    {
        if(autos[i].id != 0)
        {
            obtenerMarca(marcas, tamMarcas, autos[i].idMarca, nombreMarca);
            obtenerColor(colores, tamColores, autos[i].idColor, nombreColor);

             printf(" %2d   %10s     %10s     %10s     %7d\n", autos[i].id, autos[i].patente, nombreMarca, nombreColor, autos[i].modelo);
            contador++;
        }
    }
    printf("\n\n");

    if( contador == 0)
    {
        printf("\nNo hay autos que mostrar\n");
    }
}

void altaTrabajo(eTrabajo trabajos[], int tam, eServicio servicios[], int tamServicios)
{

    int indice;

    indice = buscarLibreTrabajo(trabajos, tam);

    if( indice == -1)
    {

        printf("\nNo hay lugar en el sistema\n");
    }
    else
    {
        trabajos[indice].id = indice + 1;

        printf("\n*** ALTA DE TRABAJO ***\n\n");

        printf("Ingrese patente :\n\n");
        fflush(stdin);
        gets(trabajos[indice].patente);

        listarServicios(servicios, tamServicios);

        printf("Ingrese ID del servicio: \n\n");
        fflush(stdin);
        scanf("%d", &trabajos[indice].idServicio);

        printf("\nIngrese fecha dd/mm/aaaa: \n");
        scanf("%d %d %d", &trabajos[indice].fecha.dia, &trabajos[indice].fecha.mes, &trabajos[indice].fecha.anio);

        printf("\nAlta de trabajo exitosa!\n\n");
    }
}

void listarTrabajos(eTrabajo trabajos[], int tam, eServicio servicios[], int tamServicios)
{
    int contador = 0;
    char nombreServicio[21];

    system("cls");

    printf(" ID      PATENTE       SERVICIO         FECHA\n");
    printf(" --      -------       --------         -----\n");

    for(int i=0; i < tam; i++)
    {
        if(trabajos[i].id != 0)
        {
            obtenerServicio(servicios, tamServicios, trabajos[i].idServicio, nombreServicio);

             printf(" %2d   %10s     %10s     %02d   %02d   %4d\n", trabajos[i].id, trabajos[i].patente, nombreServicio, trabajos[i].fecha.dia, trabajos[i].fecha.mes, trabajos[i].fecha.anio);
            contador++;
        }
    }
    printf("\n\n");

    if( contador == 0)
    {
        printf("\nNo hay trabajos que mostrar\n");
    }
}


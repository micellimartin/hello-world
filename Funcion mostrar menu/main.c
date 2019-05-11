#include <stdio.h>
#include <stdlib.h>

int mostrarMenu();

int main()
{
    char seguir = 's';
    do{
        switch(mostrarMenu())
        {
            case 1:
                {
                printf("Opcion Alta\n");
                break;
                }
            case 2:
                {
                printf("Opcion Baja\n");
                break;
                }
            case 3:
                {
                printf("Opcion Modificacion\n");
                break;
                }
            case 4:
                {
                printf("Opcion Informes\n");
                break;
                }
            case 5:
                {
                printf("Opcion Salir\n");
                seguir = 'n';
                break;
                }
            default:
                {
                printf("Opcion invalida\n");
                break;
                }

                system("pause");
        }
    }while(seguir == 's');

    return 0;
}

int mostrarMenu()
{
    int opcion;

    system("cls");
    printf("*** Menu de opciones ***\n");
    printf("1- Alta\n");
    printf("2- Baja\n");
    printf("3- Modificacion\n");
    printf("4- Informes\n");
    printf("5- Salir\n");
    printf("\nIngrese opcion: ");//validaciones
    scanf("%d",&opcion);

    return opcion;
}

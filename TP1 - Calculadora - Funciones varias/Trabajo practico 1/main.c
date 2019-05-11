#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir = 's';

    int a;
    int b;
    int opcion;

    int flagA = 0;
    int flagB = 0;
    int flagCalculos = 0;

    int resultadoSuma;
    int resultadoResta;
    int resultadoMultiplicacion;
    int resultadoFactorialA;
    int resultadoFactorialB;
    float resultadoDivision;

    do
    {
        system("cls");

        printf("*** Menu de opciones ***\n\n");//Menu de opciones.

        if(flagA == 0)
        {
            printf("1. Ingresar 1er operando (A=x)\n");
        }
        else
        {
            printf("1. Ingresar 1er operando (A=%d)\n",a);//Muestra valor actual de A.
        }

        if(flagB == 0)
        {
            printf("2. Ingresar 2do operando (B=y)\n");
        }
        else
        {
            printf("2. Ingresar 2do operando (B=%d)\n",b);//Muestra valor actual de B.
        }

        printf("3. Calcular todas las operaciones\n");
        printf("4. Informar resultados\n");
        printf("5. Salir\n\n");
        printf("Ingrese opcion:\n");
        scanf("%d",&opcion);//Guarda opcion ingresada.

        switch(opcion)
        {


            case 1://Ingreso valor de A.
                {
                    printf("Ingrese el valor de A (debe ser un numero entero\n"
                           "mayor o igual a 0)\n");
                    scanf("%d",&a);

                    while(a<=-1)//Validar A
                    {
                        printf("El numero ingresado no es valido.\n");
                        printf("Ingrese el valor de A (debe ser un numero entero\n"
                               "mayor o igual a 0)\n");
                        scanf("%d",&a);

                    }
                    flagA = 1;
                    break;
                }
            case 2://Ingreso valor de B.
                {
                    printf("Ingrese el valor de B (debe ser un numero entero\n"
                           "mayor o igual a 0)\n");
                    scanf("%d",&b);

                    while(b<=-1)//Validar B.
                    {
                        printf("El numero ingresado no es valido.\n");
                        printf("Ingrese el valor de B (debe ser un numero entero\n"
                               "mayor o igual a 0)\n");
                        scanf("%d",&b);
                    }
                    flagB = 1;
                    break;
                }
            case 3:
                {
                    if(flagA == 0 || flagB == 0)//Impide calcular si falta ingresar A o B.
                    {
                        printf("Debe ingresar el valor de A y de B para poder relizar "
                               "los calculos.\n");
                        system("pause");
                        break;
                    }
                    else
                    {
                        resultadoSuma = suma(a, b);
                        resultadoResta = resta(a, b);
                        resultadoDivision = division(a, b);
                        resultadoMultiplicacion = multiplicacion(a, b);
                        resultadoFactorialA = factorial(a);
                        resultadoFactorialB = factorial(b);
                        flagCalculos = 1;
                        printf("Los calculos se realizaron con exito.\n");
                        system ("pause");
                        break;
                    }
                }
            case 4:
                {
                    if(flagCalculos==0)//Impide imformar si no se hicieron todos los calculos.
                    {
                        printf("Debe realizar todos los calculos para poder informar "
                               "los resultados\n");
                        system("pause");
                        break;
                    }
                    else
                    {
                        printf("Informes:\n\n");
                        printf("El resultado de A+B es: %d\n",resultadoSuma);
                        printf("El resultado de A-B es: %d\n",resultadoResta);
                        printf("El resultado de A*B es: %d\n",resultadoMultiplicacion);

                        if(b==0)//Mensaje error de division por 0.
                        {
                            printf("No es posible dividir por cero\n");
                        }
                        else
                        {
                            printf("El resultado de A/B es: %.3f\n",resultadoDivision);
                        }

                        if(a>31 && b>31)//Mensaje error de factorial por numero demsiado grande
                        {
                            printf("No es posible calcular el factorial de A y de B porque son numeros mayores a 31\n");
                        }
                        else
                        {
                            if(a>31)//Mensaje error de factorial por numero demsiado grande
                            {
                                printf("No es posible calcular el factorial de A porque es un numero mayor a 31\n");
                                printf("El factorial de B es %d\n",resultadoFactorialB);
                            }
                            else
                            {
                                if(b>31)//Mensaje error de factorial por numero demsiado grande
                                {
                                    printf("No es posible calcular el factorial de B porque es un numero mayor a 31\n");
                                    printf("El factorial de A es %d\n",resultadoFactorialA);
                                }
                                else
                                {
                                    printf("El factorial de A es %d y El factorial de B es %d\n",
                                    resultadoFactorialA,resultadoFactorialB);
                                }
                            }
                        }
                    }

                    system ("pause");
                    break;
                }
            case 5:
                {
                    printf("Salir.\n");//Salida del programa
                    seguir = 'n';
                    break;
                }
            default:
                {
                    printf("Opcion invalida.\n");//Mensaje error por opcion no valida.
                    system ("pause");
                    break;
                }

            system ("pause");
        }//fin switch

    }while(seguir == 's');//fin do while

    return 0;
}

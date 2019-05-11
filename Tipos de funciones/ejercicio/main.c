#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numero;
    int contadorPares = 0;
    int maximo;
    int minimo;
    int acumulador = 0;
    int contador = 0;
    int flag = 0;
    float promedio;
    char seguir;



    do
    {

        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        while( numero < 0 )
        {
            printf("Error. Reingrese  numero: ");
            scanf("%d", &numero);

        }
        printf("Ahora estoy parando el programa");

        system("pause");

        // Me fijo si es par
        if( numero % 2 == 0)
        {
            contadorPares++;
            // contadorPares = contadorPares + 1;
            // contadorPares += 1;
        }

        //acumulador = acumulador + numero;
        acumulador += numero;
        contador++;

        if( numero > maximo || flag ==0)
        {

            maximo = numero;
        }
 printf("Quiere ingresar otro numero: ");


        if( numero < minimo || flag == 0)
            {

                minimo = numero;
                flag = 1;
            }



        printf("Quiere ingresar otro numero: ");
        fflush(stdin);
        //scanf("%c", &seguir);
        seguir = getche();



    }
    while(seguir == 's');

    promedio = (float) acumulador / contador;


    printf("a- Cantidad de Pares: %d\n", contadorPares);
    printf("b- Promedio: %.2f\n", promedio);
    printf("c- Suma de los numeros ingresados: %d\n", acumulador);
    printf("d- Maximo: %d, Minimo: %d\n\n", maximo, minimo);








    return 0;
}

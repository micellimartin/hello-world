#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main()
{
    int legajos[TAM] = {123, 543, 679, 432, 567, 111, 323, 145, 674, 543};
    int edades[TAM] = {23, 24, 21, 23, 22, 22, 44, 36, 29, 38};
    char sexos[TAM] = {'f', 'f', 'm', 'f', 'm', 'm', 'f', 'f', 'm', 'f'};
    int i;
    int input;
    int flag = 0;
    int auxSexo;

    printf("Ingrese un numero de legajo: \n");
    scanf("%d",&input);

    for(i = 0; i < TAM; i++)
    {
        if(input == legajos[i])
        {
            flag = 1;
            auxSexo = i;
            break;
        }
    }
        if(flag==1)
        {
            printf("El numero de legajo existe.");
            printf("El sexo es %c",sexos[auxSexo]);
        }
        else
        {
            printf("El numero de legajo no existe.");
        }

        return 0;
    }

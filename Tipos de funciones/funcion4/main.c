#include <stdio.h>
#include <stdlib.h>



void sumar4(); // prototipo de la funcion

int main()
{

   sumar4();

    return 0;
}

// Desarrollo de la funcion
void sumar4(){

     int numero1;
   int numero2;
   int resultado;


   printf("Ingrese un numero: ");
   scanf("%d", &numero1);

    printf("Ingrese otro numero: ");
   scanf("%d", &numero2);


   resultado = numero1 + numero2;

   printf("La suma es %d\n\n", resultado);



}

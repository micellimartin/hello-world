#include "funciones.h"

/**
 * \brief Recibe 2 numeros enteros y devuelve la suma de ambos.
 * \param x es el primer numero entero.
 * \param y es el segundo numero entero.
 * \return Retorna el resultado de la suma.
 */

int suma (int x, int y)
{
    int resultado;

    resultado = x + y;

    return resultado;
}

/**
 * \brief Recibe 2 numeros enteros y devuelve la resta de ambos.
 * \param x es el primer numero entero.
 * \param y es el segundo numero entero.
 * \return Retorna el resultado de la resta.
 */

int resta (int x, int y)
{
    int resultado;

    resultado = x - y;

    return resultado;
}

/**
 * \brief Recibe 2 numeros enteros y devuelve la multiplicacion de ambos.
 * \param x es el primer numero entero.
 * \param y es el segundo numero entero.
 * \return Retorna el resultado de la multiplicacion.
 */

int multiplicacion (int x, int y)
{
    int resultado;

    resultado = x * y;

    return resultado;
}

/**
 * \brief Recibe 1 numero entero y devuelve su factorial.
 * \param x es el entero.
 * \return Retorna el factorial de x.
 */

int factorial (int x)
{
    int resultado = 1;
    int i;

    for(i = 1; i<=x ; i++)
    {
        resultado *= i;
    }

    return resultado;
}

/**
 * \brief Recibe 2 numeros enteros y devuelve la division de ambos.
 * \param x es el primer numero entero (dividendo).
 * \param y es el segundo numero entero (divisor).
 * \return Retorna el resultado de la division.
 */

float division (int x, int y)
{
    float resultado;

    resultado = (float) x / y;

    return resultado;
}

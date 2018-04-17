#include <stdio.h>
#include <stdlib.h>

int suma (int x, int y)
{
    return x + y;
}

int resta (int x, int y)
{
    return x - y;
}


float division (int x, int y)
{
    if (y == 0)
    {
        printf("debe ingresar un numero distinto a cero en el segundo operando: ");
        scanf("%d", &y);
    } else
    {

    }
    float resultado = x/y;

    return resultado;
}

int multiplicacion (int x, int y)
{
    return x * y;
}

int factorial (int numero)
{
    int resultado = 1;
    int i;
    for (i = 1; i<=numero; i++)
    {
        resultado = resultado * i;
    }
    return resultado;
}

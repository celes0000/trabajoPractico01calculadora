#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int primerNumeroIngresado;
    int segundoNumeroIngresado;
    int resultadoSuma;
    int resultadoResta;
    int resultadoMultiplicacion;
    float resultadoDivision;
    int auxiliarFactorialUno;
    int auxiliarFactorialDos;

    printf("1- Ingresar 1er operando (A=x)\n");
    printf("2- Ingresar 2do operando (B=y)\n");
    printf("3- Calcular la suma (A+B)\n");
    printf("4- Calcular la resta (A-B)\n");
    printf("5- Calcular la division (A/B)\n");
    printf("6- Calcular la multiplicacion (A*B)\n");
    printf("7- Calcular el factorial (A!)\n");
    printf("8- Calcular todas las operaciones\n");
    printf("9- Salir\n");

    while(seguir=='s')
    {


        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("ingrese el primer numero, por favor: ");
                scanf("%d", &primerNumeroIngresado);
                printf("\n seguir?\n");
                fflush(stdin);
                scanf("%c", &seguir);
                printf("elija otra opcion: ");
                break;
            case 2:
                printf("ingrese el segundo numero, por favor: ");
                scanf("%d", &segundoNumeroIngresado);
                printf("\n seguir?\n");
                fflush(stdin);
                scanf("%c", &seguir);
                printf("elija otra opcion: ");
                break;
            case 3:
                resultadoSuma = suma(primerNumeroIngresado, segundoNumeroIngresado);
                printf("la suma de %d y % d es: %d \n", primerNumeroIngresado, segundoNumeroIngresado, resultadoSuma);
                printf("\n seguir?\n");
                fflush(stdin);
                scanf("%c", &seguir);
                printf("elija otra opcion: ");
                break;

            case 4:
                resultadoResta = resta(primerNumeroIngresado, segundoNumeroIngresado);
                printf("la resta de %d y % d es: %d \n", primerNumeroIngresado, segundoNumeroIngresado, resultadoResta);
                printf("\n seguir?\n");
                fflush(stdin);
                scanf("%c", &seguir);
                printf("elija otra opcion: ");
                break;

            case 5:
                resultadoDivision = division(primerNumeroIngresado, segundoNumeroIngresado);
                printf("la divison de %d y % d es: %.2f \n", primerNumeroIngresado, segundoNumeroIngresado, resultadoDivision);
                printf("\n seguir?\n");
                fflush(stdin);
                scanf("%c", &seguir);
                printf("elija otra opcion: ");
                break;
            case 6:
                resultadoMultiplicacion = multiplicacion(primerNumeroIngresado, segundoNumeroIngresado);
                printf("la multiplicacion de %d y % d es: %d \n", primerNumeroIngresado, segundoNumeroIngresado, resultadoMultiplicacion);
                printf("\nseguir?\n");
                fflush(stdin);
                scanf("%c", &seguir);
                printf("elija otra opcion: ");
                break;
            case 7:
                auxiliarFactorialUno = factorial(primerNumeroIngresado);
                auxiliarFactorialDos = factorial(segundoNumeroIngresado);
                printf("el factorial del primer numero ingresado es %d \n y el factorial del segundo numero ingresado es: %d \n", auxiliarFactorialUno, auxiliarFactorialDos);
                printf("\n seguir?\n");
                fflush(stdin);
                scanf("%c", &seguir);
                printf("elija otra opcion: ");
                break;
            case 8:
                printf(" la suma es: %d \n la resta es %d \n la division es: %.2f \n la multiplicacion es %d \n el factorial del primer numero es %d \n y el factorial del segundo numero es: %d", resultadoSuma, resultadoResta, resultadoDivision, resultadoMultiplicacion, auxiliarFactorialUno, auxiliarFactorialDos);
                printf("\n \n seguir?\n");
                fflush(stdin);
                scanf("%c", &seguir);
                printf("elija otra opcion: ");
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }

    return 0;
}

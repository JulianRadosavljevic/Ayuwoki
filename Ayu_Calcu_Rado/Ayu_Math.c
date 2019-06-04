#include <stdio.h>
#include <stdlib.h>
#include "Ayuwoki.h"

int Ayu_Math_Suma()
{
    int numero1;
    int numero2;
    int resultado;

    printf("Ingrese los numeros: \n");
    scanf("%d %d",&numero1,&numero2);

    resultado = numero1 + numero2;

    printf("El resultado es: %d",resultado);

    return 0;
}

int Ayu_Math_Resta()
{
    int numero1;
    int numero2;
    int resultado;

    printf("Ingrese los numeros: \n");
    scanf("%d %d",&numero1,&numero2);

    resultado = numero1 - numero2;

    printf("El resultado es: %d",resultado);

    return 0;
}

int Ayu_Math_Multiplicar()
{
    int numero1;
    int numero2;
    int resultado;

    printf("Ingrese los numeros: \n");
    scanf("%d %d",&numero1,&numero2);

    resultado = numero1 * numero2;

    printf("El resultado es: %d",resultado);

    return 0;
}

int Ayu_Math_Dividir()
{
    int numero1;
    int numero2;
    int resultado;

    printf("Ingrese los numeros: \n");
    scanf("%d %d",&numero1,&numero2);

    if(numero2 == 0)
    {
        printf("Error");
        return 0;
    }

    resultado = numero1 / numero2;

    printf("El resultado es: %d",resultado);

    return 0;
}

int Ayu_Math_Factoreo()
{
    int numero1;
    int resultado;

    printf("Ingrese los numeros: \n");
    scanf("%d",&numero1);

    resultado = !numero1;

    printf("El resultado es: %d",resultado);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int convertCharToInt(char num[])
{
    int salida = 0;
    int i;

    for(i=0;i < strlen(num);i++)
    {
        salida = salida * 10 + (int)num[i] - 48;
    }

    return salida;
}

int validNumber(char num[])
{
    int i;

    for(i=0;i < strlen(num);i++)
    {
        if(!isdigit(num[i]))
        {
            return 0;
            break;
        }
    }

    return 1;

}

int getMaxMin(int* max, int* min, int orden)
{
    int numero = 0;
    char texto[5];

    printf("Ingrese un numero %i: \n", orden + 1);
    scanf("%s", texto);

    if(validNumber(texto))
    {
        numero = convertCharToInt(texto);

        if(orden == 0)
        {
            *max = numero;
            *min = numero;
        }
        if(numero > *max)
        {
            *max = numero;
        }

        if(numero < *min)
        {
            *min = numero;
        }

        return 1;
    }
    else
    {
        return 0;
    }
}

char getChar(char mensaje[])
{
    char auxiliar;

    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);

    return auxiliar;
}

float getFloat(char mensaje[])
{
    float auxiliar;

    printf("%s",mensaje);
    scanf("%f",&auxiliar);

    return auxiliar;
}

int getInt(int *pResultado)
{
    char buffer[64];
    scanf("%s",buffer);

    *pResultado = atoi(buffer);
    return 0;
}

int utn_getNumero(int* pResultado,const char *mensaje,const char *mensajeError,int minimo,int maximo,int reintentos)
{
    int ret;
    int num;

    while (reintentos>0)
    {
        printf("%s",mensaje);
        if (getInt(&num)==0)
        {
            if (num<=maximo && num>=minimo)
            {
                break;
            }
        }
        __fpurge(stdin); //Instruccion en linux
        reintentos--;
        printf("%s\n",mensajeError);
    }
    if(reintentos==0)
    {
        ret=-1;
    }else
        {
            ret=0;
            *pResultado = num;
        }
    return ret;
}

int utn_getFloat(float *pResultado,const char *mensaje,const char *mensajeError,int minimo,int maximo,int reintentos)
{
    int ret;
    float num;

    while (reintentos>0)
    {
        printf("%s",mensaje);
        if (getFloat(&num)==0)
        {
            if (num<=maximo && num>=minimo)
            {
                break;
            }
        }
        __fpurge(stdin); //Instruccion en linux
        reintentos--;
        printf("%s\n",mensajeError);
    }
    if(reintentos==0)
    {
        ret=-1;
    }else
        {
            ret=0;
            *pResultado = num;
        }
    return ret;
}




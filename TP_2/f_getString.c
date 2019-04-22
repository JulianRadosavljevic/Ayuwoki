#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "f_gets.h"
#include "f_validacion.h"

/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargar� el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int utn_getStringLetras(char mensaje[],char input[])
{
    char aux[256];

//    getString(mensaje,aux);

    if(utn_validaLetra(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

/**
 * \brief Solicita un texto num�rico al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargar� el texto ingresado
 * \return 1 si el texto contiene solo n�meros
 */
int utn_getStringNumeros(char mensaje[],char input[])
{
    char aux[256];

//    getString(mensaje,aux);

    if(utn_validaNumero(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

/** INCOMPLETO **/

/**int utn_getString(  char* pResultado, char* mensaje, char* mensajeError,
                int minimo, int maximo, int reintentos)
{

    char bufferStr[4096];

    fgets(bufferStr, sizeof(bufferStr), stdin);
    bufferStr[strlen(bufferStr) - 1] = '\0';

    return 0;
}
**/

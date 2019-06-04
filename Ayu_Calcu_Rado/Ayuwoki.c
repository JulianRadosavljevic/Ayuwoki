#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
int Ayu_GetInt(char mensaje[])
{
    int auxiliar;

    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    //printf("\n%d\n",auxiliar);

    return 0;
}

/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
int Ayu_GetFloat(char mensaje[])
{
    float auxiliar;

    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    printf("\n%.2f\n",auxiliar);

    return 0;
}

/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
int Ayu_GetChar(char mensaje[])
{
    char auxiliar;

    printf("%s",mensaje);
    scanf("%c",&auxiliar);
    printf("\n%c\n",auxiliar);

    return 0;
}

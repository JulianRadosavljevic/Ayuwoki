#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "f_validacion.h"
#include "f_gets.h"
#include "f_getString.h"

#define EMPLEADOS 1000

typedef struct{
    char nombre[50];
    char apellido[50];
    int legajo;
}Persona;

void inicializarArrayPersonas(Persona arrayPersonas[],int cantidadDeElementos,int valor);
int buscarPrimerOcurrencia(Persona arrayPersonas[],int cantidadDeElementos,int valor);

int main()
{
    Persona arrayPersonas[EMPLEADOS];
 //   Persona auxiliarCliente;

    char AuxiliarNombreStr[50];
    char AuxiliarApellidoStr[50];
    char AuxiliarLegajoStr[50];
    int AuxiliarLegajo;

    int indiceLugarLibre;
//    int indiceResultadoBusqueda;
    int opcion = 0;

    //int i,j;

    printf("\t\t<<<<< E M P L E A D O S >>>>>\n\n");

    inicializarArrayPersonas(arrayPersonas,EMPLEADOS,-1);
    while(opcion!=5)
    {
        opcion = utn_getInt("\n\n1 - ALTA \n2 - BAJA \n3 - MODIFICACION\n4 - INFORMAR\n5 - SALIR\n\nElija una opcion: ");
         switch(opcion)
         {
            case 1:
                printf("\nOPCION ALTA\n");

                if (!utn_getStringLetras("Ingrese el nombre: ",AuxiliarNombreStr))
                {
                    printf ("El nombre debe estar compuesto solo por letras\n");
                    break;
                }

                if (!utn_getStringLetras("Ingrese el apellido: ",AuxiliarApellidoStr))
                {
                    printf ("El nombre debe estar compuesto solo por letras\n");
                    break;
                }

                if (!utn_getStringNumeros("Ingrese el legajo: ",AuxiliarLegajoStr))
                {
                    printf ("El legajo debe ser numerico\n");
                    break;
                }
                AuxiliarLegajo = atoi(AuxiliarLegajoStr);

                if(buscarPrimerOcurrencia(arrayPersonas,EMPLEADOS,AuxiliarLegajo) != -1)
                {
                    printf("\n\nEL LEGAJO YA EXISTE!!!\n");
                    break;
                }

                indiceLugarLibre = buscarPrimerOcurrencia(arrayPersonas,EMPLEADOS,-1);
                if(indiceLugarLibre == -1)
                {
                    printf("\n\nNO QUEDAN LUGARES LIBRES!!!\n");
                    break;
                }

                strcpy(arrayPersonas[indiceLugarLibre].nombre,AuxiliarNombreStr);
                strcpy(arrayPersonas[indiceLugarLibre].apellido,AuxiliarApellidoStr);
                arrayPersonas[indiceLugarLibre].legajo = AuxiliarLegajo;

                break;

            case 2:
                {
                    printf("\nOPCION BAJA\n");
                    break;
                }

            case 3:
                {
                    printf("\nOPCION MODIFICACION\n");
                    break;
                }

            case 4:
                {
                    printf("\nOPCION INFORMAR\n");
                    break;
                }
         }
    }

    return 0;
}

/**
 * \brief Inicializa un array de Personas con el valor recibido
 * \param array Es el array a ser inicializado
 * \param cantidadDeElementos Indica la logitud del array
 * \param valor Es el valor que sera cargado en cada posición
 * \return void
 *
 */
void inicializarArrayPersonas(Persona arrayPersonas[],int cantidadDeElementos,int valor)
{
    int i;
    for(i=0;i < cantidadDeElementos; i++)
    {
        arrayPersonas[i].legajo = valor;
    }
}

/**
 * \brief Busca la primer ocurrencia de un valor en un array de Personas
 * \param array Es el array en el cual buscar
 * \param cantidadDeElementos Indica la logitud del array
 * \param valor Es el valor que se busca
 * \return Si no hay ocurrencia (-1) y si la hay, la posición de la misma
 *
 */
int buscarPrimerOcurrencia(Persona arrayPersonas[],int cantidadDeElementos,int valor)
{
    int i;
    for(i=0;i < cantidadDeElementos; i++)
    {
        if(arrayPersonas[i].legajo == valor)
        {
            return i;
        }
    }
    return -1;
}

#include <stdio.h>
#include <stdlib.h>
#include "f_math.h"

int main()
{
    int opcion;
    int a;
    int b;

    printf("\n\t\t--C A L C U L A D O R A-- \n");
    printf("\t\t   Julian Radosavljevic \n\n");
    printf(".Opcion suma --> 1\n");
    printf(".Opcion resta --> 2\n");
    printf(".Opcion multi. --> 3\n");
    printf(".Opcion division -> 4\n");
    printf(".Opcion factoreo --> 5\n");
    printf(".Opcion salida -----> 0\n");

    do
        {
            printf("\n\nElije una opcion: ");
            scanf("%d",&opcion);

            switch(opcion)
            {
            case 1:
                {
                    printf("\n<<Usted eligio la operacion suma>>\n\n");
                    getSuma();
                    break;
                }
            case 2:
                {
                    printf("\n<<Usted eligio la operacion resta>>\n\n");
                    getResta();
                    break;
                }
            case 3:
                {
                    printf("\n<<Usted eligio la operacion multiplicacion>>\n\n");
                    getMultiplicacion();
                    break;
                }
            case 4:
                {
                    printf("\n<<Usted eligio la operacion division>>\n\n");
                    getDivision();
                    break;
                }
            }

        }while(opcion!=6);

    return 0;
}

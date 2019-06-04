#include <stdio.h>
#include <stdlib.h>
#include "Ayuwoki.h"
#include "Ayu_Math.h"


int main()
{

    int opcion;

    printf("\t\t<<<<< C A L C U L A D O R A >>>>>\n\n");
    system("color f0");
    printf("Opcion suma ------> 1\n");
    printf("Opcion resta -----> 2\n");
    printf("Opcion multi. ----> 3\n");
    printf("Opcion division --> 4\n");
    printf("Opcion factoreo --> 5\n");
    printf("Opcion salida ----> 6\n");

     do
        {
            printf("\n\nElija una opcion: ");
            scanf("%i", &opcion);

            switch(opcion)
            {
            case 1:
                {
                    printf("\n<<Usted eligio la operacion suma>>\n\n");
                    Ayu_Math_Suma();
                    break;
                }
            case 2:
                {
                    printf("\n<<Usted eligio la operacion resta>>\n\n");
                    Ayu_Math_Resta();
                    break;
                }
            case 3:
                {
                    printf("\n<<Usted eligio la operacion multiplicacion>>\n\n");
                    Ayu_Math_Multiplicar();
                    break;
                }
            case 4:
                {
                    printf("\n<<Usted eligio la operacion division>>\n\n");
                    Ayu_Math_Dividir();
                    break;
                }
            case 5:
                {
                    printf("\n<<Usted eligio la operacion factorizacion>>\n\n");
                    Ayu_Math_Factoreo();
                    break;
                }
            default:
                {
                    printf("\n<<Cancelar>>\n\n");
                    return 0;
                }
            }

        }while(opcion!=6);


    return 0;
}

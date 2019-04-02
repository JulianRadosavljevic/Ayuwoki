int getSuma()
{
    int a;
    int b;
    int resultado;

    printf("Ingrese el primer numero: ");
    scanf("%d",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&b);

    resultado = a + b;

    printf("El resultado es: << %d >>",resultado);

}

int getResta()
{
    int a;
    int b;
    int resultado;

    printf("Ingrese el primer numero: ");
    scanf("%d",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&b);

    resultado = a - b;

    printf("El resultado es: << %d >>",resultado);

}

int getMultiplicacion()
{
    int a;
    int b;
    int resultado;

    printf("Ingrese el primer numero: ");
    scanf("%d",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&b);

    resultado = a * b;

    printf("El resultado es: << %d >>",resultado);

}

int getDivision()
{
    int a;
    int b;
    int resultado;

    printf("Ingrese el primer numero: ");
    scanf("%d",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&b);

    resultado = a / b;

    if(b != 0)
        {
            printf("El resultado es: << %d >>",resultado);
        }
    else
        {
            printf("ERROR: No se puede dividir por 0");
        }
}

int getFactoreo()
{

}

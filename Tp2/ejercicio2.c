
#include <stdio.h>

int main(int argc, char const *argv[])
{

    int numero;

    printf("Indicar un numero: ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("El numero es positivo");
    }
    else if (numero < 0)
    {
        printf("El numero es negativo");
    }
    else
    {
        printf("El numero es cero");
    }

    return 0;
}

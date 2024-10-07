
#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int contador, n;
    float positivos = 0, negativos = 0, ceros = 0;

    for (contador = 0; contador < 10; contador++) {
        printf("Ingresa un numero: ");
        scanf("%d", &n);
        if (n > 0) positivos++;
        else if (n < 0)negativos++;
        else ceros++;
    }

    printf("Positivos: %f \n", positivos);
    printf("Negativos: %f \n", negativos);
    printf("Ceros: %f \n", ceros);

    return 0;
}


#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int contador, n;
    int suma;
    float promedio;

    for (contador = 0; contador < 25; contador++) {
        printf("Ingresa un numero: ", n);
        scanf("%d", &n);
        suma = suma + n;
    }
    promedio = suma / 25;
    printf("El promedio es: %.2f", promedio);

    return 0;
}

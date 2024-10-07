#include <stdio.h>

int main(int argc, char const *argv[])
{

    int n1,n2,suma;

    printf("Ingresar primer numero: ");
    scanf("%d", &n1);
    printf("Ingresar segundo numero: ");
    scanf("%d", &n2);
    
    suma = n1 +n2;

    printf("La suma de los dos numeros es: %d", suma);

    return 0;
}





#include <stdio.h>

int main(int argc, char const *argv[])
{

    int n1, n2, suma, producto, resta;

    printf("Ingresar primer numero: ");
    scanf("%d", &n1);
    printf("Ingresar segundo numero: ");
    scanf("%d", &n2);

    suma = n1 + n2;
    resta = n1 - n2;
    producto = n1 * n2;

    printf("Suma: %d, resta: %d, producto: %d", suma, resta, producto);

    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int num1, num2;

    printf("Indicar primer numero: ");
    scanf("%d", &num1);
    printf("Indicar segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("El resultado del producto es: %d", (num1 * num2));
    }else if (num1 = num2)
    {
        printf("Los numeros son iguales");
    };

    return 0;
}
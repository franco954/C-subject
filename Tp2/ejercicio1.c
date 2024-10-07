
#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int num1, num2;

    printf("Indicar primer numero: ");
    scanf("%d", &num1);
    printf("Indicar segundo numero: ");
    scanf("%d", &num2);

    (num1 == num2) ? printf("Los numeros son iguales") : printf("Los numeros son distintos");
    
    return 0;
}

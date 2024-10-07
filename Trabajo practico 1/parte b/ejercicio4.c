





#include <stdio.h>

int main(int argc, char const *argv[])
{

    int l1,l2,l3,perimetro;

    printf("Ingresar primer lado: ");
    scanf("%d", &l1);
    printf("Ingresar segundo lado: ");
    scanf("%d", &l2);
    printf("Ingresar tercer lado: ");
    scanf("%d", &l3);
    
    perimetro = l1 + l2 + l3;

    printf("El total es: %d", perimetro);

    return 0;
}
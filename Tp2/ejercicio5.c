

// 3 lados de igual medida, se llaman equiláteros.
//  2 lados de igual medida, se llaman isósceles.
//   3 lados de diferente medida, se llaman escalenos.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int l1, l2, l3;

    printf("Indicar primer lado: ");
    scanf("%d", &l1);
    printf("Indicar segundo lado: ");
    scanf("%d", &l2);
    printf("Indicar tercer lado: ");
    scanf("%d", &l3);

    if (l1 == l2 && l1 == l3)printf("El triangulo es equilatero");
    if (l1 == l2 || l1 == l3 || l2 == l3)printf("El triangulo es isosceles");
    if (l1 != l2 && l1 != l3 && l2 != l3)printf("El triangulo es escaleno");

    return 0;
}

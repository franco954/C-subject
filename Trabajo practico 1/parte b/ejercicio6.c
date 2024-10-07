

#include <stdio.h>;
#include <math.h>;

int main(int argc, char const *argv[])
{

    int lado1,lado2,dprincipal,superficie,perimetro, altura, longitud;

    printf("Rectangulo \n");
    printf("lado alto: ");
    scanf("%d", &lado1);
    printf("lado ancho: ");
    scanf("%d", &lado2);

    altura = (lado1 * 2);
    longitud =  (lado2 * 2);
    perimetro = altura + longitud;
    superficie = altura * longitud;
    dprincipal = sqrt(perimetro);

    printf("perimetro: %d \nsuperficie: %d \ndiagonal principal: %d", perimetro, superficie, dprincipal);

    return 0;
}
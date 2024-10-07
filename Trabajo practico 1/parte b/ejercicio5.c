

#include <stdio.h>;
#include <math.h>;

int main(int argc, char const *argv[])
{
    // formula de la hipotenusa c = √(a² + b²)

    int cateto1,cateto2,hipotenusa,perimetro,superficie;

    printf("Triangulo rectangulo /n");
    printf("Cateto 1: ");
    scanf("%d", &cateto1);
    printf("Cateto 2: ");
    scanf("%d", &cateto2);

    hipotenusa = sqrt((pow(cateto1, 2) + pow(cateto2, 2))),
    perimetro = cateto1 + cateto2 + hipotenusa;
    superficie = (cateto1*cateto2)/2;

    printf("El perimetro es: %d, la hipotenusa es: %d y la superfice: %d", perimetro, hipotenusa, superficie);

    return 0;
}
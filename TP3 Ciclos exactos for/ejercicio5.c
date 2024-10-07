

// Ingresar la patente y monto de la multa de 50 autos, indicar e imprimir cuántos montos 
// superan los $ 40 y del total cobrado que porcentaje representa la suma de los que superan 
// los $40



#include <stdio.h>

int main(int argc, char const *argv[])
{
    char patente;
    int i, multa = 0;
    float cantidad40 = 0, porcentaje40 = 0, total = 0;

    for (i = 0; i <= 50; i++) {
        printf("Ingresa la patente del auto (n*%d): ", i);
        scanf("%d", &patente);
        printf("Monto de la multa: ");
        scanf("%d", &multa);
        if(multa > 40)cantidad40++;
        total = total + multa;
    }

    porcentaje40 = (cantidad40 / 50) * 100;

    printf("La cantidad de montos que superan los 40$ son: %.2f y representan el %.2f del total", cantidad40, porcentaje40);

    return 0;
}
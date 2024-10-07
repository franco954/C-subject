// Ingresar 30 valores.Contar cuantos están entre 1 y 10, cuantos entre 10 y 20, cuantos entre 
// 20 y 30 y cuantos son mas de 30. Luego mostrar el porcentaje de cada grupo en el total


#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int i, n, c15 = 0;
    float ct10, ct20, ct30, ct, p10, p20, p30, ptl;

    for (i = 0; i < 30; i++) {
        printf("Ingresa un numero: ", n);
        scanf("%d", &n);
        if (n <= 10) {
            ct10++;
        } else if (n <= 20) {
            ct20++;
        } else if (n <= 30) {
            ct30++;
        } else {
            ct++;
        }

    }

    p10 = (ct10 / ct) * 100;
    p20 = (ct20 / ct) * 100;
    p30 = (ct30 / ct) * 100;

    printf("El porcentaje de los 1/10: %.2f", p10);
    printf("El porcentaje de los 10/20: %.2f", p20);
    printf("El porcentaje de los 20/30: %.2f", p30);

    return 0;
}
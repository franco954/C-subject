// Ingresar 8 valores por teclado, y a partir de esto sacar el promedio general, sacar el 
// promedio de lo valores pares y el promedio de los valores impares. Luego mostrar por 
// pantalla cuantos números superaron el valor 15.


#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int i, n, c15 = 0;
    float sumaT, sumaP, sumaI, cT, cP, cI, prom, promPar, promImpar;

    for (i = 0; i < 8; i++) {
        printf("Ingresa un numero: ", n);
        scanf("%d", &n);
        if((n % 2) == 0) {
            sumaP = sumaP + n;
            cP++;
        }
        else {
            sumaI = sumaI + n;
            cI++;
        }
        if(n > 15) c15++;
        sumaT = sumaT + n;
        cT++;
    }

    prom = sumaT / cT;
    promPar = sumaP / cP;
    promImpar = sumaI / cI;
    printf("El promedio de los pares es: %.2f", promPar);
    printf("El promedio de los impares es: %.2f", promImpar);
    printf("El promedio total es: %.2f", prom);
    printf("Cantidad de numeros mayores a 15: %d", c15);

    return 0;
}
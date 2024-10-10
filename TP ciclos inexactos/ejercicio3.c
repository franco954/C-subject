// Ingresar N valores, calcular e imprimir el promedio de positivos, de negativos y cantidad de 
// ceros



#include <stdio.h>

int main(int argc, char const *argv[])
{

    int cantidadTotal = 0, sumaTotal = 0, sumaPos = 0, sumaNeg = 0, cantNeg = 0, cantPos = 0, cantCeros = 0, option;
    float pTotal = 0, pNeg = 0, pPos = 0;

    do
    {
        printf("Desea ingresar un numero? (1=si, 0=no): ");
        scanf("%d", &option);
    } while (option != 1 && option != 0);
    

    while (option==1)
    {
        int n = 0;
        printf("Ingrese un numero: ");
        scanf("%d", &n);
        cantidadTotal++;
        sumaTotal += n;

        if(n > 0){
            cantPos++;
            sumaPos += n;
        }else if(n < 0){
            cantNeg++;
            sumaNeg += n;
        }
        else{
            cantCeros++;
        }

        do
        {
            printf("Desea ingresar otro numero? (1=si, 0=no): ");
            scanf("%d", &option);
        } while (option != 1 && option != 0);

    }

    pTotal = (float)sumaTotal / cantidadTotal;
    pPos = (float)sumaPos / cantPos;
    pNeg = (float)sumaNeg / cantNeg;

    printf("Promedio total: %.2f \n", pTotal);
    printf("Promedio positivos: %.2f \n", pPos);
    printf("Promedio negativos: %.2f \n", pNeg);
    printf("Cantidad de ceros ingresados: %d \n", cantCeros);

    
    return 0;
}



// Ingresar temperaturas hasta una temperatura igual a 1000, indicar e imprmir la mayor y 
// menor




#include <stdio.h>


int main(int argc, char const *argv[])
{


    int option, temp = 0, cIngresadas = 0, tempMin = 0, tempMax = 0;

    do
    {
        printf("Desea ingresar una temperatura? (1=si, 0=no): ");
        scanf("%d", &option);
    } while (option != 1 && option != 0);
    

    while (option==1)
    {

        printf("Ingrese una temperatura: ");
        scanf("%d", &temp);
        if(temp == 1000){
            break;
        }

        if (temp < tempMin || tempMin == 0)
        {
                tempMin = temp;
        }
        if (temp > tempMax || tempMax == 0)
        {
                tempMax = temp;
        }
        cIngresadas++;

        do
        {
            printf("Desea ingresar otra temperatura? (1=si, 0=no): ");
            scanf("%d", &option);
        } while (option != 1 && option != 0);

    }

    printf("T. Maxima: %d \n", tempMax);
    printf("T. Minima: %d \n", tempMin);
    printf("Cantidad de temperaturas ingresadas: %d \n", cIngresadas);

    return 0;
}
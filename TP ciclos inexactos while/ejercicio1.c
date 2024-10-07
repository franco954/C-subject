


// Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados



#include <stdio.h>

int main(int argc, char const *argv[])
{

    int cantidadSueldos = 0, sumaTotal = 0, option;
    float promedioTotal = 0;

    do
    {
        printf("Desea ingresar un sueldo? (1=si, 0=no): ");
        scanf("%d", &option);
    } while (option != 1 && option != 0);
    

    while (option==1)
    {
        int n = 0;
        printf("Ingrese un sueldo: ");
        scanf("%d", &n);
        cantidadSueldos++;
        sumaTotal += n;
        do
        {
            printf("Desea ingresar otro sueldo? (1=si, 0=no): ");
            scanf("%d", &option);
        } while (option != 1 && option != 0);
    }
    
    if(cantidadSueldos == 0){
        printf("usted no ha ingresado ningun sueldo.");
    }else{
        promedioTotal = (float)sumaTotal / cantidadSueldos;
        printf("Cantidad de sueldos ingresados: %d \n", cantidadSueldos);
        printf("Suma total: %d \n", sumaTotal);
        printf("Promedio total: %.2f \n", promedioTotal);
        
        };


    return 0;
}
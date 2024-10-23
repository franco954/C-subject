

// Ingresar datos y cargar un vector de 50 elementos, 
// calcular 
// • La suma de todos los elementos.
// • El producto de todos los elementos.
// • Mostrar del vector el elemento 50 al 1.
// • Imprimir las componentes de indice par.
// • Imprimir las componentes de indice impar.



#include <stdio.h>


int main(int argc, char const *argv[])
{
    
    int miArray[50]={};
    int sumaTotal = 0, productoTotal = 1;
    
    for (size_t i = 0; i < 50; i++)
    {
        printf("Ingresar valor posicion nro %d: ", i);
        scanf("%d", &miArray[i]);
        sumaTotal += miArray[i];
        productoTotal *= miArray[i];
    }


    printf("Suma de todos los elementos: %d \n", sumaTotal);
    printf("Producto de todos los elementos: %d \n", productoTotal);
    printf("Valor del elemento nro1: %d \n", miArray[0]);
    printf("Valor del elemento nro50: %d \n", miArray[49]);
    
    
    for (size_t i = 0; i < 50; i++)
    {
        if (miArray[i] % 2 == 0) {
            printf("El elemento en la posición %zu es par: %d \n", i, miArray[i]);
        } else {
            printf("El elemento en la posición %zu es impar: %d \n", i, miArray[i]);
        }
    }

    
    return 0;
}

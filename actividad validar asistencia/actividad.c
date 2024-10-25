

// Una tienda de libros quiere automatizar el cálculo del costo total de una compra de
// varios libros. Cada libro tiene un precio, y si el cliente compra más de 3 libros, se le
// aplica un descuento del 10%. El sistema debe hacer lo siguiente:

// 1. Crear una función calcular_total que reciba como parámetros:
// o El precjo del libro actual.
// o Un purkero al total acumulado.
// o Un puntero a una variable donde se almacenará la cantidad de libros
// comprados.

// 2. La función debe sumar el precio del libro al total acumulado y aumentar la
// cantidad de libros comprados.

// 3. El programa debe permitir al usuario ingresar los precios de varios libros, y el
// ciclo debe terminar cuando el usuario ingrese un precio de O o menor.

// 4. Al final. si el cliente compró más de 3 libros. aplicar un descuento del 10% al
// total.

// 5. Mostrar el total de la compra, el descuento aplicado (si corresponde), el total
// final, y cuántos libros fueron comprados.

// utilizar punteros, no usar vectores






#include <stdio.h>

void calcular_total(int precio, int *total, int *cant) {
    *total += precio;
    (*cant)++; 
}



int main(int argc, char const *argv[]) {
    int precio = 0, totalAcumulado = 0, cantidadLibrosComprados = 0;

    do {
        printf("Ingrese precio del libro (0 para terminar): ");
        scanf("%d", &precio);  
        
        if (precio > 0) {  
            calcular_total(precio, &totalAcumulado, &cantidadLibrosComprados);
        }
        
    } while (precio > 0);

    printf("Total de la compra: %d \n", totalAcumulado);

    if (cantidadLibrosComprados > 3) {
        int descuento = totalAcumulado * 0.10;
        totalAcumulado -= descuento;  
        printf("Descuento: %d \n", descuento);
        printf("Total compra con descuento: %d \n", totalAcumulado);
    }

    printf("Cantidad de libros comprados: %d \n", cantidadLibrosComprados);

    return 0;
}

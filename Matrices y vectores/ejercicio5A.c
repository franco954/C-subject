

// Ingrese 10 valores en un vector de enteros. Sume todos los valores muestre el resultado 
// en pantalla. Responda:
// a. ¿Cuántas líneas de código necesito para desarrollar el programa sin utilizar ciclos 
// de repetición?
// b. Implemente la misma solución con ciclos de repetición, y responda ¿Cuántas 
// líneas de código necesito en esta segunda versión?


#include <stdio.h>

int sumaArray(int array[], int n) {
    if (n <= 0) {
        return 0; 
    }
    return array[n - 1] + sumaArray(array, n - 1); 
}

int main(int argc, char const *argv[]) {
    int miArray[10];

    for (size_t i = 0; i < 10; i++) {
        printf("Ingresar valor de la posicion nro %zu del array: ", i);
        scanf("%d", &miArray[i]);
    }

    int suma = sumaArray(miArray, 10); 
    printf("La suma de los elementos del array es: %d\n", suma);

    return 0;
}

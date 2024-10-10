


// Ingrese 10 valores en un vector de enteros. Sume todos los valores muestre el resultado 
// en pantalla. Responda:
// a. ¿Cuántas líneas de código necesito para desarrollar el programa sin utilizar ciclos 
// de repetición?
// b. Implemente la misma solución con ciclos de repetición, y responda ¿Cuántas 
// líneas de código necesito en esta segunda versión?


#include <stdio.h>

int main(int argc, char const *argv[]) {

    int miArray[10];
    int sumaArray = 0;

    for (size_t i = 0; i < 10; i++) {
        printf("Ingresar valor de la posicion nro %zu del array: ", i);
        scanf("%d", &miArray[i]);
        sumaArray += miArray[i];
    }
    
    printf("Suma total de los valores: %d", sumaArray);

    return 0;
}

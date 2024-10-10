

// Desarrolle un programa que pida al usuario los datos de dos matrices de 2x2, y calcule y 
// muestre su producto. Investigue como obtener el producto de dos matrices

#include <stdio.h>

int main(int argc, char const *argv[]) {


    int primerMatrix[2][2], segundaMatrix[2][2];
    int resultado[2][2] = {0};


 
    for (size_t i = 0; i < 2; i++) {
        for (size_t j = 0; j < 2; j++) {
            printf("Ingresar valor para la fila %zu, columna %zu: (1ra matriz)\n", i + 1, j + 1);
            scanf("%d", &primerMatrix[i][j]);
            printf("Ingresar valor para la fila %zu, columna %zu: (2da matriz)\n", i + 1, j + 1);
            scanf("%d", &segundaMatrix[i][j]);
        }
    }


    for (size_t i = 0; i < 2; i++) {
        for (size_t j = 0; j < 2; j++) {
            for (size_t k = 0; k < 2; k++) {
                resultado[i][j] += primerMatrix[i][k] * segundaMatrix[k][j];
            }
        }
    }


    printf("El resultado de la multiplicación de las matrices es:\n");
    for (size_t i = 0; i < 2; i++) {
        for (size_t j = 0; j < 2; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}

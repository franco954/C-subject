// Ingrese 20 valores en un vector e imprimalo ordenado utilizando el algoritmo bubblesort u
// ordenamiento por burbujeo.


#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[]) {
    int miVector[20];
    int n;


    n = sizeof(miVector) / sizeof(miVector[0]);

    for (size_t i = 0; i < n; i++) {
        printf("Ingresar valor posicion nro %zu: ", i);
        scanf("%d", &miVector[i]);
    }

    printf("Arreglo antes de ordenar: \n");
    printArray(miVector, n);

    bubbleSort(miVector, n);

    printf("Arreglo después de ordenar: \n");
    printArray(miVector, n);

    return 0;
}

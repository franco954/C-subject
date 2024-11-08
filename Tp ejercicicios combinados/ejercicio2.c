// https://ifts29.com.ar/inscripciones-2025/

// Cree un programa para ingresar 10 números en un vector y luego que permita introducir un
// número para realizar una búsqueda. Permita que el operador del programa elija que tipo
// de algoritmo quiere utilizar por medio de un menú (debe ser búsqueda binaria o secuencial).




#include <stdio.h>

int busqueda_secuencial(int arr[], int n, int objetivo) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == objetivo) {
            return i; 
        }
    }
    return -1; 
}

int busqueda_binaria(int arr[], int n, int objetivo) {
    int izquierda = 0;
    int derecha = n - 1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (arr[medio] == objetivo) {
            return medio; 
        }
        if (arr[medio] < objetivo) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }
    return -1;
}

void ordenar_vector(int arr[], int n) {
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int miVector[10];


    for (size_t i = 0; i < 10; i++) {
        printf("Ingresar valor en la posición nro %zu: ", i);
        scanf("%d", &miVector[i]);
    }

    int opcion;
    printf("\nSeleccione el tipo de búsqueda:\n");
    printf("1. Búsqueda Secuencial\n");
    printf("2. Búsqueda Binaria\n");
    printf("Ingrese su opción: ");
    scanf("%d", &opcion);

    int objetivo;
    printf("Ingrese el número a buscar: ");
    scanf("%d", &objetivo);

    if (opcion == 2) {
       
        ordenar_vector(miVector, 10);
    }

    int resultado;
    if (opcion == 1) {
        resultado = busqueda_secuencial(miVector, 10, objetivo);
    } else if (opcion == 2) {
        resultado = busqueda_binaria(miVector, 10, objetivo);
    } else {
        printf("Opción no válida.\n");
        return 1;
    }

    if (resultado != -1) {
        printf("Elemento encontrado en el índice: %d\n", resultado);
    } else {
        printf("Elemento no encontrado.\n");
    }

    return 0;
}

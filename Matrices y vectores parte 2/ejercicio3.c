#include <stdio.h>
#include <string.h>

int main() {
    int categorias[3] = {1500, 2000, 2500};
    char empSueldoMaximo[50];
    int empCat1 = 0, empCat2 = 0, empCat3 = 0;
    int sueldosCat1 = 0, sueldosCat2 = 0, sueldosCat3 = 0;
    int sueldoMaximo = 0, totalSueldos = 0;
    float sueldoPromedio = 0;

    for (int i = 0; i < 50; i++) {
        char nombre[50];
        int categoria = 0, antiguedad = 0, sueldo = 0;

        printf("Ingresar nombre del empleado nro %d: ", i + 1);
        scanf("%s", nombre);
        printf("Ingresar su categoria (1, 2 o 3): ");
        scanf("%d", &categoria);
        printf("Ingresar su antiguedad: ");
        scanf("%d", &antiguedad);

        switch (categoria) {
            case 1:
                empCat1++;
                sueldo = categorias[0] + (antiguedad * 100);
                if (sueldo > sueldoMaximo) {
                    sueldoMaximo = sueldo;
                    strcpy(empSueldoMaximo, nombre);
                }
                sueldosCat1 += sueldo;
                break;
            case 2:
                empCat2++;
                sueldo = categorias[1] + (antiguedad * 100);
                if (sueldo > sueldoMaximo) {
                    sueldoMaximo = sueldo;
                    strcpy(empSueldoMaximo, nombre);
                }
                sueldosCat2 += sueldo;
                break;
            case 3:
                empCat3++;
                sueldo = categorias[2] + (antiguedad * 100);
                if (sueldo > sueldoMaximo) {
                    sueldoMaximo = sueldo;
                    strcpy(empSueldoMaximo, nombre);
                }
                sueldosCat3 += sueldo;
                break;
            default:
                printf("Categoría no válida. Por favor, ingrese 1, 2 o 3.\n");
                i--;
                continue;
        }
    }

    totalSueldos = sueldosCat1 + sueldosCat2 + sueldosCat3;
    sueldoPromedio = (float)totalSueldos / 50;

    printf("Cant. empleados cat 1: %d\n", empCat1);
    printf("Cant. empleados cat 2: %d\n", empCat2);
    printf("Cant. empleados cat 3: %d\n", empCat3);
    printf("Total sueldos cat 1: %d\n", sueldosCat1);
    printf("Total sueldos cat 2: %d\n", sueldosCat2);
    printf("Total sueldos cat 3: %d\n", sueldosCat3);
    printf("Total sueldos: %d\n", totalSueldos);
    printf("Sueldo promedio general: %.2f\n", sueldoPromedio);
    printf("El empleado %s tiene el sueldo máximo con un total de: %d\n", empSueldoMaximo, sueldoMaximo);

    return 0;
}

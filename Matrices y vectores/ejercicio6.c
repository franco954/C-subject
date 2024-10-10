

// Desarrolle un programa que almacene en un vector el número de días que tiene cada mes
// (supondremos que es un año no bisiesto), pida al usuario que le indique un mes (1=enero,
// 12=diciembre) y muestre en pantalla el número de días que tiene ese mes.

#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    int option = 0;
    int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const char *meses[12] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};

    printf("Ingrese un mes (1-ene 2-feb 3-mar 4-abr 5-may 6-jun 7-jul 8-ago 9-sep 10-oct 11-nov 12-dic): ");
    scanf("%d", &option);

    if (option >= 1 && option <= 12) {
        int val = option - 1;
        printf("El mes de %s tiene %d días\n", meses[val], dias[val]);
    } else {
        printf("Opción inválida. Por favor ingrese un número entre 1 y 12.\n");
    }

    return 0;
}

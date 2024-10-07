





#include <stdio.h>

int main(int argc, char const *argv[])
{

    int vh, tiempo, sueldo;

    printf("Ingresar horas trabajadas: ");
    scanf("%d", &tiempo);
    printf("Ingresar valor x hora: ");
    scanf("%d", &vh);

    sueldo = tiempo * vh;

    printf("Sueldo del empleado: %d", sueldo);

    return 0;
}
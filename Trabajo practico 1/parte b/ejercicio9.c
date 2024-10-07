







#include <stdio.h>

int main(int argc, char const *argv[])
{

    int vh = 10, tiempo, sueldo;

    printf("Valor por hora establecido: 10$ \n");
    printf("Ingresar horas trabajadas del empleado: ");
    scanf("%d", &tiempo);

    sueldo = tiempo * vh;

    printf("Sueldo del empleado: %d", sueldo);

    return 0;
}


#include <stdio.h>

int main(int argc, char const *argv[])
{

    int sueldo_base = 500, vehiculo_vendido = 50, cantidad_vendida, precio_vehiculo, plusSobrePrecio, comisionPorVenta, sueldoT;

    printf("Valor del vehiculo: ");
    scanf("%d", &precio_vehiculo);

    printf("Cantidad de vehiculos vendidos: ");
    scanf("%d", &cantidad_vendida);

    plusSobrePrecio = cantidad_vendida * (precio_vehiculo * 0.10);
    comisionPorVenta = cantidad_vendida * vehiculo_vendido;

    sueldoT = sueldo_base + plusSobrePrecio + comisionPorVenta;
    printf("El sueldo total del empleado es %d$", sueldoT);


    return 0;
}
// Ingresar 10 sueldos y edades de una empresa y calcular
// • Sueldo promedio
// • Sueldo promedio de los empleados que tienen entre 23 y 40 años
// • Edad promedio
// • Cantidad de empleados mayores a 30 años y sueldo menor a $ 1000.
// • Cantidad de empleados con edades menor a la edad promedio




#include <stdio.h>


int main(int argc, char const *argv[])
{
    
    int sumaSueldoTotal = 0, cantSueldosTotal = 0, sumaEdadTotal = 0, cantEdadTotal = 0, sumaSueldo2340 = 0, cantEmpleados2340 = 0, cantEmpleadosMayor30 = 0, cantEmpleadosMenorPromedio = 0;
    float sueldoPromedioGeneral = 0, sueldoPromedioEdad2340 = 0, edadPromedio = 0;
    int edades[10];

    for (size_t i = 0; i < 10; i++){

        int sueldo = 0, edad = 0;

        printf("Ingresar sueldo empleado nro %d", i + 1);
        scanf("%d", &sueldo);
        printf("Ingresar edad empleado nro %d", i + 1);
        scanf("%d", &edad);

        sumaSueldoTotal += sueldo;
        cantSueldosTotal++;
        sumaEdadTotal += edad;
        cantEdadTotal++;

        if(edad > 23 && edad < 40){
            cantEmpleados2340++;
            sumaSueldo2340 += sueldo;
        }

        if(edad > 30 && sueldo < 1000)cantEmpleadosMayor30++;

    }

    sueldoPromedioGeneral = (sumaSueldoTotal / cantSueldosTotal);
    edadPromedio = (sumaEdadTotal / cantEdadTotal);
    sueldoPromedioEdad2340 = (sumaSueldo2340 / cantEmpleados2340);

    for (size_t i = 0; i < 10; i++)
    {
        if(edades[i] < edadPromedio)cantEmpleadosMenorPromedio++;
    }
    

    printf("Sueldo promedio general: %d", sueldoPromedioGeneral);
    printf("Edad promedio general: %d", edadPromedio);
    printf("Sueldo promedio de los empleados que estan entre los 23 y 40 años: %d", sueldoPromedioEdad2340);
    printf("Cantidad de empleados con edad menor a la promedio: %d", cantEmpleadosMenorPromedio);
    printf("Cantidad de empleados mayores de 30 años con sueldo menos a 1000: %d", cantEmpleadosMayor30);
    
    
    return 0;
}

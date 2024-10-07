/*
Dado el valor de la hora y la cantidad de horas trabajadas por un empleado, calcular su sueldo

DATOS DE ENTRADA: 

Valor de la hora (vh)
Cantidad de horas trabajadas (ch)
Número de empleado (emp)
PROCESO: 

sdo = ch* vh
SALIDA: 

•Sueldo (sdo)
*/  


#include <stdio.h>

int main(int argc, char const *argv[])
{

    int vh, ch, emp;

    printf("Introduce el valor de hora del empleado: ");
    scanf("%d", &vh);
    printf("Introduce las cantidad de horas trabajadas: ");
    scanf("%d", &ch);
    printf("Introduce el numero del empleado: ");
    scanf("%d", &emp);
    int saldo = ch * vh;

    printf("El empleado numero %d obtuvo una ganancia %d pesos", emp, saldo);

    return 0;
} 

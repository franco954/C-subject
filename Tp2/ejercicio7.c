// Ingresar el valor de la hora y el tiempo trabajado por un empleado, calcular su sueldo
// conociendo que recibe un premio de $ 100 si trabajo más de 50 hs y si trabajo más de 150
// hs le dan otros $ 100 adicionales. Imprimir el sueldo


#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int premio50 = 100;
    const int premio150 = 200;
    int vh, tiempo, sueldoBase;

    printf("Indicar valor por hora: ");
    scanf("%d", &vh);
    printf("Indicar tiempo trabajado: ");
    scanf("%d", &tiempo);

    sueldoBase = (vh*tiempo);

    if(tiempo > 50){
        printf("Sueldo del empleado: %d", sueldoBase + premio50);
    }else if(tiempo > 150){
        printf("Sueldo del empleado: %d", sueldoBase + premio150);
    }
    else{
        printf("Sueldo del empleado: %d", sueldoBase);
    }

    return 0;
}

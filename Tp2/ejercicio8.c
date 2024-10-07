// Ingresar tres valores correspondientes al día, mes y año de una fecha, indicar si es válida,
// considerar los años bisiestos 


// Nota 1: Para que una fecha sea válida, se tiene que cumplir que:
// El mes debe ser mayor o igual que 1 y menor o igual que 12.
// El día debe ser mayor o igual que 1 y menor o igual que un número, 
// el cual dependerá del mes y año introducidos por el usuario.

// Nota 2:
// Tienen 31 días: enero, marzo, mayo, julio, agosto, octubre y diciembre.
// Tienen 30 días: abril, junio, septiembre y noviembre.
// Tiene 29 días: febrero (si el año es bisiesto).
// Tiene 28 días: febrero (si el año no es bisiesto).

// Nota 3: Son bisiestos todos los años múltiplos de 4, excepto aquellos que son múltiplos de 100 pero no de 400.

#include <stdio.h>

int main(int argc, char const *argv[])
{


    int dia, mes, anio;

    printf("Indicar valor por hora: ");
    scanf("%d", &dia);
    printf("Indicar tiempo trabajado: ");
    scanf("%d", &mes);
    printf("Indicar tiempo trabajado: ");
    scanf("%d", &anio);


    if(mes >= 1 && mes <= 12)


    return 0;
}

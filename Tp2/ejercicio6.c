
// Ingresar la edad y la altura de dos personas, indicar e imprimir la estatura del de mayor
// edad. Indicar si son iguales.



#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int edad1, edad2, altura1, altura2;

    printf("Indicar edad y altura de la primera persona : \n");
    scanf("%d", &edad1);
    scanf("%d", &altura1);

    printf("Indicar edad y altura de la segunda persona : \n");
    scanf("%d", &edad2);
    scanf("%d", &altura2);


    if(edad1 == edad2){
        printf("Las personas tienen la misma edad");
        exit(-1);
    }
    else{
        (edad1 > edad2) ? printf("La altura del de mayor edad es: %d ", altura1) : printf("La altura del de mayor edad es: %d ", altura2);
    }

    return 0;
}

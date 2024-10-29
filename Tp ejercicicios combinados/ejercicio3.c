
// Una consultora tiene 10 analistas y 15 proyectos en los que trabajan indistintamente, a fin
// de mes cada analista eleva una planilla con los siguientes datos
// a. Número de analista
// b. Número de proyecto
// c. Cantidad de hs trabajadas

// En memoria se debera cargar previamente el nombre de los analistas y el valor hora. Se
// desea saber:
// a. Cantidad de hs. trabajadas en total por cada analista.
// b. Total de horas trabajadas por cada analista en cada proyecto.
// c. Total de hs trabajadas sobre cada proyecto.
// d. Qué analista trabajó menos en el proyecto 1.
// e. Sueldo de cada analista.
// f. Nombre del analista que cobró más.
// g. Cantidad de analistas que hayan trabajado menos de 5 hs en alguno de los
// proyectos.
// h. Imprimir ordenado en forma descendente por sueldo de los analista:nombre valor
// de la hora y sueldo


#include <stdio.h>


int main(int argc, char const *argv[])
{
    
    int analistas[10] = {1,2,3,4,5,6,7,8,9,10};
    int hsProyectos[15] = {};
    int vh = 100;

    for (size_t i = 0; i < 10; i++)
    {
        printf("Planilla mes del analista n%d", analistas[i]);
        printf("Proyecto trabajado: ");
    }
    






    return 0;
}

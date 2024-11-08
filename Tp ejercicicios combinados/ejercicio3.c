
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

#define NUM_ANALISTAS 10
#define NUM_PROYECTOS 15

int main()
{

    char *analistas[NUM_ANALISTAS] = {"Juan", "Maria", "Carlos", "Ana", "Luis",
                                      "Pedro", "Sofia", "Miguel", "Laura", "David"};

    int valorHora = 100;
    int horasTrabajadas[NUM_ANALISTAS][NUM_PROYECTOS] = {{0}};
    int totalHorasAnalista[NUM_ANALISTAS] = {0};
    int totalHorasProyecto[NUM_PROYECTOS] = {0};
    int sueldos[NUM_ANALISTAS] = {0};

    for (int i = 0; i < NUM_ANALISTAS; i++)
    {
        printf("\nPlanilla del analista %s:\n", analistas[i]);
        for (int j = 0; j < NUM_PROYECTOS; j++)
        {
            printf("Horas trabajadas en el Proyecto %d: ", j + 1);
            scanf("%d", &horasTrabajadas[i][j]);

            totalHorasAnalista[i] += horasTrabajadas[i][j];

            totalHorasProyecto[j] += horasTrabajadas[i][j];
        }
    }

    for (int i = 0; i < NUM_ANALISTAS; i++)
    {
        sueldos[i] = totalHorasAnalista[i] * valorHora;
    }

    printf("\nTotal de horas trabajadas por cada analista:\n");
    for (int i = 0; i < NUM_ANALISTAS; i++)
    {
        printf("%s: %d horas\n", analistas[i], totalHorasAnalista[i]);
    }

    printf("\nTotal de horas trabajadas por cada analista en cada proyecto:\n");
    for (int i = 0; i < NUM_ANALISTAS; i++)
    {
        printf("%s:\n", analistas[i]);
        for (int j = 0; j < NUM_PROYECTOS; j++)
        {
            printf("  Proyecto %d: %d horas\n", j + 1, horasTrabajadas[i][j]);
        }
    }

    printf("\nTotal de horas trabajadas en cada proyecto:\n");
    for (int j = 0; j < NUM_PROYECTOS; j++)
    {
        printf("Proyecto %d: %d horas\n", j + 1, totalHorasProyecto[j]);
    }

    int minHoras = horasTrabajadas[0][0];
    int analistaMenosHoras = 0;
    for (int i = 1; i < NUM_ANALISTAS; i++)
    {
        if (horasTrabajadas[i][0] < minHoras)
        {
            minHoras = horasTrabajadas[i][0];
            analistaMenosHoras = i;
        }
    }
    printf("\nEl analista que trabajó menos en el Proyecto 1 es %s con %d horas.\n",
           analistas[analistaMenosHoras], minHoras);

    printf("\nSueldo de cada analista:\n");
    for (int i = 0; i < NUM_ANALISTAS; i++)
    {
        printf("%s: $%d\n", analistas[i], sueldos[i]);
    }

    int maxSueldo = sueldos[0];
    int analistaMasCobra = 0;
    for (int i = 1; i < NUM_ANALISTAS; i++)
    {
        if (sueldos[i] > maxSueldo)
        {
            maxSueldo = sueldos[i];
            analistaMasCobra = i;
        }
    }
    printf("\nEl analista que cobró más es %s con $%d.\n", analistas[analistaMasCobra], maxSueldo);

    int analistasMenos5Horas = 0;
    for (int i = 0; i < NUM_ANALISTAS; i++)
    {
        for (int j = 0; j < NUM_PROYECTOS; j++)
        {
            if (horasTrabajadas[i][j] < 5)
            {
                analistasMenos5Horas++;
                break;
            }
        }
    }
    printf("\nCantidad de analistas que trabajaron menos de 5 horas en algún proyecto: %d\n", analistasMenos5Horas);

    printf("\nAnalistas ordenados por sueldo (de mayor a menor):\n");
    for (int i = 0; i < NUM_ANALISTAS - 1; i++)
    {
        for (int j = i + 1; j < NUM_ANALISTAS; j++)
        {
            if (sueldos[i] < sueldos[j])
            {

                int tempSueldo = sueldos[i];
                sueldos[i] = sueldos[j];
                sueldos[j] = tempSueldo;

                char *tempAnalista = analistas[i];
                analistas[i] = analistas[j];
                analistas[j] = tempAnalista;
            }
        }
    }

    for (int i = 0; i < NUM_ANALISTAS; i++)
    {
        printf("%s, Valor hora: $%d, Sueldo: $%d\n", analistas[i], valorHora, sueldos[i]);
    }

    return 0;
}

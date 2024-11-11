
// Problema: Control de Condiciones Climáticas en el Campo

// Se desea desarrollar un programa en lenguaje C que permita gestionar y analizar los
// registros de lluvias y temperaturas diarias en un campo agrícola. El sistema debe permitir
// registrar precipitaciones y temperaturas de cada día, además de consultar, modificar y
// calcular promedios en cualquier momento.

// Funcionalidades del Programa
// 1. Menú de Opciones: El programa debe presentar un menú que permita al usuario
// seleccionar entre las opciones disponibles. El menú debe seguir mostrándose hasta
// que el usuario elija salir del programa.
// 2. Registro de Datos: Permitir al usuario ingresar la cantidad de lluvias (en mm) y la
// temperatura promedio (en °C) de un día específico. El usuario debe indicar el
// número de día (1-30) para el cual quiere registrar los datos. Los datos se almacenan
// con un máximo de 30 días fijo. Contemplar que la carga de la información es en el
// día que indique el usuario no necesariamente carga todo al comienzo ni en orden de
// diario.
// 3. Consulta de Datos de un Día Específico: El usuario debe poder consultar la
// información de lluvias y temperatura de un día específico ingresando su número (1-
// 30). Si el día tiene datos registrados, se mostrarán ambos valores; si no, se
// informará que el día no tiene datos.
// 4. Modificación de Datos: Permitir al usuario modificar los datos de lluvias o
// temperatura de un día específico, ingresando el número de día y el nuevo valor
// deseado. Antes de la modificación, debe verificarse que el día tenga datos
// registrados.
// 5. Promedio de Lluvias y Temperaturas Registradas: Calcular y mostrar los
// promedios de lluvias y temperaturas de todos los días que tienen datos ingresados.
// Si no se han ingresado datos, el programa debe informarlo.
// 6. Días con Temperatura Inferior a un Valor: Mostrar todos los días cuya
// temperatura promedio sea inferior a un valor ingresado por el usuario.
// 7. Días con Lluvias Superiores a un Valor: Listar todos los días en los que las
// lluvias superaron una cantidad en milímetros ingresada por el usuario.

// Requisitos Técnicos
// • Modularización: Cada funcionalidad debe implementarse en funciones separadas. El
// programa debe utilizar funciones con paso de parámetros por referencia para modificar y
// consultar la información almacenada.
// • Restricciones: No se permite el uso de variables globales.



#include <stdio.h>



void ingresarRegistro(int *tDias, int *lDias) {
    int dia;

    do {
        printf("Dia del mes a ingresar (1-30): ");
        scanf("%d", &dia);
        if (dia < 1 || dia > 30) {
            printf("Número de día ingresado incorrecto. Debe estar entre 1 y 30.\n");
        }
    } while (dia < 1 || dia > 30);

    printf("Cantidad de lluvias en mm: ");
    scanf("%d", &lDias[dia - 1]);
    printf("Temperatura promedio °C: ");
    scanf("%d", &tDias[dia - 1]);

    printf("Registro ingresado correctamente para el día %d.\n", dia);
}




void consultarRegistro(int *tDias, int *lDias) {
    int dia;

    do {
        printf("Dia del mes a buscar (1-30): \n");
        scanf("%d", &dia);
        if (dia < 1 || dia > 30) {
            printf("Número de día ingresado incorrecto. Debe estar entre 1 y 30.\n");
        }
    } while (dia < 1 || dia > 30);

    if (lDias[dia - 1] == 0 && tDias[dia - 1] == 0) {
        printf("Día %d sin datos registrados.\n", dia);
    } else {
        printf("Registro del día nro %d:\n", dia);
        printf("Lluvias en mm: %d\n", lDias[dia - 1]);
        printf("Temperatura promedio: %d°C\n", tDias[dia - 1]);
    }
}




void modificarRegistro(int *tDias, int *lDias) {
    int dia, lDia, tDia;

    do {
        printf("Dia del mes a modificar (1-30): \n");
        scanf("%d", &dia);
        if (dia < 1 || dia > 30) {
            printf("Número de día ingresado incorrecto. Debe estar entre 1 y 30.\n");
        }
    } while (dia < 1 || dia > 30);

    if (lDias[dia - 1] == 0 && tDias[dia - 1] == 0) {
        printf("No se puede modificar un día sin datos registrados.\n");
    } else {
        printf("Nueva cantidad de lluvias en mm: ");
        scanf("%d", &lDia);
        printf("Nueva temperatura promedio °C: ");
        scanf("%d", &tDia);

        lDias[dia - 1] = lDia;
        tDias[dia - 1] = tDia;

        printf("Registro modificado correctamente para el día %d.\n", dia);
    }
}



void mostrarPromediosTyL(int *tDias, int *lDias) {
    int lluviasD = 0, TemperaturasD = 0, cDias = 0;
    float pLluvias = 0, pTemperatura = 0;

    for (int i = 0; i < 30; i++) {
        if (tDias[i] != 0 || lDias[i] != 0) { 
            lluviasD += lDias[i];
            TemperaturasD += tDias[i];
            cDias++;
        }
    }

    if (cDias > 0) {

        pLluvias = (float)lluviasD / cDias;
        pTemperatura = (float)TemperaturasD / cDias;
        printf("Promedio de lluvias en mm: %.2f\n", pLluvias);
        printf("Promedio de temperatura en C°: %.2f\n", pTemperatura);
    } 
    else {

        printf("No hay datos ingresados.\n");
    }
}



void diasTempInfValor(int *tDias, int *lDias) {
    int valor;

    printf("Días con temperatura inferior a: ");
    scanf("%d", &valor);

    int cDias = 0; 

    for (int i = 0; i < 30; i++) {
        if (tDias[i] < valor) {
            if(tDias[i] != 0){
                printf("Día %d\n", i + 1);
                cDias = 1;
            }
        }
    }

    if (cDias == 0) {
        printf("No hay días con temperatura inferior a %d°C.\n", valor);
    }
}


void diasLluviasSupValor(int *tDias, int *lDias) {
    int valor;

    printf("Días con lluvias superiores a: ");
    scanf("%d", &valor);

    int cDias = 0; 
    for (int i = 0; i < 30; i++) {
        if (lDias[i] > valor) {
            if(lDias != 0){
                printf("Día %d\n", i + 1);
                cDias = 1;
            }
        }
    }

    if (cDias == 0) {
        printf("No hay días con lluvias superiores a %d mm.\n", valor);
    }
}


void menuPrincipal(int *opcion) {
    printf("\nMENU DE OPCIONES\n");
    printf("1 - Ingresar registro\n");
    printf("2 - Consultar datos de día específico\n");
    printf("3 - Modificar datos\n");
    printf("4 - Promedio de lluvias y temperaturas registradas\n");
    printf("5 - Buscar días con temperatura inferior a un valor x\n");
    printf("6 - Buscar días con lluvias superiores a un valor x\n");
    printf("7 - Salir del programa\n");

    do {
        printf("Indique una operación: ");
        scanf("%d", opcion);
        if (*opcion < 1 || *opcion > 7) {
            printf("¡Opción incorrecta! Debe estar entre 1 y 7.\n");
        }
    } while (*opcion < 1 || *opcion > 7);
}

int main() {
    int opcion = 0;
    int tDias[30] = {0};  
    int lDias[30] = {0};  
    printf("REGISTRO DE CONDICIONES CLIMATICAS\n");

    do {
        menuPrincipal(&opcion);

        switch (opcion) {
            case 1:
                ingresarRegistro(tDias, lDias);
                break;
            case 2:
                consultarRegistro(tDias, lDias);
                break;
            case 3:
                modificarRegistro(tDias, lDias);
                break;
            case 4:
                mostrarPromediosTyL(tDias, lDias);
                break;
            case 5:
                diasTempInfValor(tDias, lDias);
                break;
            case 6:
                diasLluviasSupValor(tDias, lDias);
                break;
            case 7:
                printf("Fin del programa.\n");
                break;
            default:
                break;
        }

    } while (opcion != 7);

    return 0;
}

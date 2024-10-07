

#include <stdio.h>
#include <stdlib.h>

int option, sesion, optionRepetir = 0, cIntentos = 0, totalMinutos = 0, cSesiones = 0, cSesiones60 = 0, sesionMin = 0, sesionMax = 0, opActual = 0;
float promedioSesiones = 0;

void menuPrincipal()
{

        printf("Sistema de Registro de Actividad Física \n\n MENU DE OPCIONES \n 1 - Registrar una nueva sesión de actividad física \n 2 - Calcular y mostrar el total de minutos de ejercicio acumulados \n 3 - Mostrar el promedio de minutos por sesión \n 4 - Mostrar la sesión más larga y la más corta (en minutos) \n 5 - Mostrar cuántas sesiones superaron los 60 minutos \n 6 - Salir del programa \n\n");
        do
        {
                printf("Indique una operacion: ");
                scanf("%d", &option);
                if (option != 1 && option != 2 && option != 3 && option != 4 && option != 5 && option != 6)printf("¡Opcion elegida incorrecta! \n");
        } while (option != 1 && option != 2 && option != 3 && option != 4 && option != 5 && option != 6);
}

void ingresarSesion()
{

        do
        {
                printf("Ingrese duracion del entrenamiento: ");
                scanf("%d", &sesion);
                if (cIntentos == 3)
                {
                        printf("Demasiados intentos fallidos \n");
                        break;
                }
                if (sesion < 0)
                {
                        printf("¡La duracion de la sesion no puede ser menor a cero! \n");
                        cIntentos++;
                };
        } while (sesion < 0);

        if (sesion > 60)cSesiones60++;

        totalMinutos += sesion;
        cSesiones++;

        if (sesion < sesionMin || sesionMin == 0)
        {
                sesionMin = sesion;
        }
        if (sesion > sesionMax || sesionMax == 0)
        {
                sesionMax = sesion;
        }

        sesion = 0;
        cIntentos = 0;
};

void mostrarTotal()
{
        if (totalMinutos == 0)
        {
                printf("Aun no hay minutos cargados. \n");
        }
        else
        {
                printf("Minutos de ejercicio acumulados: %d \n", totalMinutos);
        }
}

void mostrarPromedio()
{
        if (totalMinutos == 0)
        {
                printf("Aun no hay minutos cargados. \n");
        }
        else
        {
                promedioSesiones = (totalMinutos / cSesiones);
                printf("El promedio de minutos x sesion: %2.f \n", promedioSesiones);
        }
}

void mostrarTotal60()
{
        if (cSesiones60 == 0)
        {
                printf("No hay sesiones que superen los 60 minutos. \n");
        }
        else
        {
                printf("Cantidad de sesiones que superan los 60 minutos: %d \n", cSesiones60);
        }
}

void mostrarSesionMinMax()
{
        if (totalMinutos == 0)
        {
                printf("Aun no hay minutos cargados. \n");
        }
        else
        {
                printf("Sesion maxima: %d \n", sesionMax);
                printf("Sesion minima: %d \n", sesionMin);
        }
}

int main(int argc, char const *argv[])
{

        do
        {
                menuPrincipal();

                switch (option)
                {
                case 1:
                        ingresarSesion();
                        break;
                case 2:
                        mostrarTotal();
                        break;
                case 3:
                        mostrarPromedio();
                        break;
                case 4:
                        mostrarSesionMinMax();
                        break;
                case 5:
                        mostrarTotal60();
                        break;
                default:
                        printf("Fin del programa.");
                        exit(-1);
                        break;
                }

                do
                {
                        printf("Volver al menu principal o salir de aplicacion (1-2): ");
                        scanf("%d", &optionRepetir);

                } while (optionRepetir != 1 && optionRepetir != 2);

        } while (optionRepetir == 1);

        printf("Fin del programa.");

        return 0;
}

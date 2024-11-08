

// Ejercicio: Gestión de Inventario de Productos
// Se desea crear un programa en lenguaje C que permita gestionar un inventario de
// productos. El sistema debe permitir cargar un vector de códigos, un vector de precios y
// un vector de stock. Los vectores deberán estar relacionados entre sí de tal manera que
// cada posición represente un artículo específico, con su código, precio y stock
// correspondiente.

// Funcionalidades del Programa:
// 1. Carga de Información: Permitir al usuario ingresar los datos de los artículos en
// los vectores de códigos, precios y stock. La cantidad de artículos con los que
// opera el sistema es de 100 códigos diferentes y único.
// 2. Búsqueda de Precio: El usuario debe poder buscar el precio de un artículo
// ingresando su código. Si el código existe, se muestra el precio del artículo; si no,
// se informa que el código no fue encontrado.
// 3. Modificación de Stock: Permitir que el usuario modifique el stock de un
// artículo ingresando su código y el nuevo valor de stock. Debe realizarse una
// verificación para asegurarse de que el código ingresado existe.
// 4. Listado de Artículos con Bajo Stock: Mostrar todos los artículos cuyo stock
// sea inferior a un valor ingresado por el usuario. Este valor será solicitado al
// momento de realizar la consulta.
// 5. Listado de Artículos sin Stock: Listar todos los artículos que tengan un stock
// igual a cero.
// 6. Menú de Opciones: El programa debe presentar un menú que permita al usuario
// seleccionar entre las opciones anteriores. El menú debe seguir mostrándose hasta
// que el usuario elija salir del programa. Todas las opciones menos la de carga
// inicial de información.

// Requisitos Técnicos:
// • Modularización: Cada funcionalidad debe implementarse en funciones
// separadas. El programa debe utilizar funciones con paso de parámetros por
// referencia para modificar los vectores de códigos, precios y stock.
// • Restricciones: No se permite el uso de variables globales. 


#include <stdio.h>

#define MAX_ARTICULOS 100

int verificarUnico(int *vCodigos, int codigo, int i) {
    for (int j = 0; j < i; j++) {
        if (vCodigos[j] == codigo) {
            return 0; // No es único
        }
    }
    return 1; // Es único
}

void cargaArticulo(int *codigo, int *precio, int *stock, int i, int *vCodigos) {
    int codigoNuevo = 0;

    do {
        printf("Ingresar codigo articulo nro%d: ", i + 1);
        scanf("%d", &codigoNuevo);
    } while (!verificarUnico(vCodigos, codigoNuevo, i));

    vCodigos[i] = codigoNuevo;
    *codigo = codigoNuevo;

    printf("Ingresar precio articulo nro%d: ", i + 1);
    scanf("%d", precio);
    printf("Ingresar stock articulo nro%d: ", i + 1);
    scanf("%d", stock);
}

void busquedaPrecio(int *vCodigos, int *vPrecios, int cantidad) {
    int codigo;
    printf("Ingrese el codigo del articulo a buscar: ");
    scanf("%d", &codigo);

    for (int i = 0; i < cantidad; i++) {
        if (vCodigos[i] == codigo) {
            printf("El precio del articulo %d es: %d\n", codigo, vPrecios[i]);
            return;
        }
    }
    printf("Codigo no encontrado.\n");
}

void modificacionStock(int *vCodigos, int *vStock, int cantidad) {
    int codigo, nuevoStock;
    printf("Ingrese el codigo del articulo a modificar: ");
    scanf("%d", &codigo);

    for (int i = 0; i < cantidad; i++) {
        if (vCodigos[i] == codigo) {
            printf("Ingrese el nuevo stock para el articulo %d: ", codigo);
            scanf("%d", &nuevoStock);
            vStock[i] = nuevoStock;
            printf("Stock actualizado para el articulo %d.\n", codigo);
            return;
        }
    }
    printf("Codigo no encontrado.\n");
}

void articulosBajoStock(int *vCodigos, int *vStock, int cantidad) {
    int limite;
    printf("Ingrese el limite de stock: ");
    scanf("%d", &limite);

    printf("Articulos con stock inferior a %d:\n", limite);
    for (int i = 0; i < cantidad; i++) {
        if (vStock[i] < limite) {
            printf("Codigo: %d, Stock: %d\n", vCodigos[i], vStock[i]);
        }
    }
}

void articulosSinStock(int *vCodigos, int *vStock, int cantidad) {
    printf("Articulos sin stock:\n");
    for (int i = 0; i < cantidad; i++) {
        if (vStock[i] == 0) {
            printf("Codigo: %d\n", vCodigos[i]);
        }
    }
}

void menuPrincipal() {

    printf("Menu de Opciones:\n");
    printf("1. Buscar precio de un articulo\n");
    printf("2. Modificar stock de un articulo\n");
    printf("3. Listar articulos con bajo stock\n");
    printf("4. Listar articulos sin stock\n");
    printf("5. Salir\n");
    
}


int main() {


    int vCodigos[MAX_ARTICULOS], vPrecios[MAX_ARTICULOS], vStock[MAX_ARTICULOS];
    int cantidadArticulos = 0;
    int option;

    for (cantidadArticulos = 0; cantidadArticulos < MAX_ARTICULOS; cantidadArticulos++) {
        
        cargaArticulo(&vCodigos[cantidadArticulos], &vPrecios[cantidadArticulos], &vStock[cantidadArticulos], cantidadArticulos, vCodigos);
    }

    do {
        menuPrincipal();
        printf("Seleccione una opcion: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                busquedaPrecio(vCodigos, vPrecios, cantidadArticulos);
                break;
            case 2:
                modificacionStock(vCodigos, vStock, cantidadArticulos);
                break;
            case 3:
                articulosBajoStock(vCodigos, vStock, cantidadArticulos);
                break;
            case 4:
                articulosSinStock(vCodigos, vStock, cantidadArticulos);
                break;
            case 5:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
                break;
        }
    } while (option != 5);

    return 0;
}

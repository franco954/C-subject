

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


int verificarUnico(int *vCodigos, int codigo, int i){

    for (size_t j = 0; j < i; j++)
    {
        if(vCodigos[j] == codigo){
            return 0;
        }
    }

    return 1;
    

}


void cargaArticulo(int *codigo, int *precio, int *stock, int i, int *vCodigos){

    int codigoNuevo = 0;

    do
    {
        printf("Ingresar codigo articulo nro%d: ", i + 1);
        scanf("%d", &codigoNuevo);
    } while (!verificarUnico(vCodigos, codigoNuevo, i));
    
    *codigo = codigoNuevo;


    printf("Ingresar precio articulo nro%d: ", i + 1);
    scanf("%d", &*precio);
    printf("Ingresar stock articulo nro%d: ", i + 1);
    scanf("%d", &*stock);

}


void menuPrincipal(int *option){

    // do
    // {
   
    // } while ();
    


    // switch (*option)
    // {
    // case 
       
    //     break;
    
    // default:
    //     break;
    // }



}



int main(int argc, char const *argv[])
{
    int vCodigos[100];
    int vPrecios[100];
    int vStock[100];
    int option;
    
    for (size_t i = 0; i < 100; i++)
    {
        cargaArticulo(&vCodigos[0], &vPrecios[0], &vStock[0], i, vCodigos);
    }

    menuPrincipal(&option);
    


    return 0;


}

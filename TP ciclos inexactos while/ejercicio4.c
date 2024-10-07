


// Ingresar los datos de facturación de una empresa. Se conoce Número de factura, Número 
// de artículo, Cantidad vendida y Precio unitario Los datos finalizan con numero de factura = 
// 0, cada factura sólo tiene un número de artículo, y existen sólo tres artículos.




#include <stdio.h>


int main(int argc, char const *argv[])
{


    int option, nFactura, nArticulo, vArticulo, pUnitario, ventasTotal = 0, cVentasTotal = 0, cLapicera = 0, cCuaderno = 0, cPlasticola = 0;

    do
    {
        printf("Desea ingresar una factura? (1=si, 0=no): ");
        scanf("%d", &option);
    } while (option != 1 && option != 0);
    

    while (option==1)
    {

        printf("Ingrese un numero de factura: ");
        scanf("%d", &nFactura);
         if (nFactura == 0) {
            printf("No puede haber una factura numero 0 \n");
            break;
        }
        
        do
        {
            printf("Ingrese un numero de articulo (1-lapicera 2-cuaderno 3-plasticola): ");
            scanf("%d", &nArticulo);
        } while (nArticulo != 1 && nArticulo != 2 && nArticulo != 3);


        printf("Cantidad vendida del articulo: ");
        scanf("%d", &vArticulo);

        if(nArticulo == 1){
            cLapicera += vArticulo;
        }else if(nArticulo == 2){
            cCuaderno += vArticulo;
        }else{
            cPlasticola += vArticulo;
        }


        printf("Precio x unidad del articulo: ");
        scanf("%d", &pUnitario);

        ventasTotal += (vArticulo * pUnitario);



        nArticulo = 0;
        pUnitario = 0;
        vArticulo = 0;


        do
        {
            printf("Desea ingresar otra factura? (1=si, 0=no): ");
            scanf("%d", &option);
        } while (option != 1 && option != 0);

    }


    cVentasTotal = (cLapicera + cCuaderno + cPlasticola);
    printf("Cantidad de ventas totales: %d \n", cVentasTotal);
    printf("Ingresos totales: %d \n", ventasTotal);
    printf("Lapiceras vendidas: %d \n", cLapicera);
    printf("Cuaderos vendidos: %d \n", cCuaderno);
    printf("Plasticolas vendidas: %d \n", cPlasticola);

    return 0;
}
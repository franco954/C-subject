// Un restaurant tiene 6 mozos y 12 mesas, cada vez que cobran una mesa se anotan los
// siguientes datos, que terminan con número de factura = 0
// • Número de factura
// • Número de mozo
// • Número de mesa
// • Cantidad de personas que comieron
// • Monto de la cuenta

//  Se desea saber lo siguiente
// 1) Cantidad de personas atendidas por cada mozo x
// 2) Cantidad de facturas realizadas x
// 4) Monto facturado por cada mesa en total x
// 5) Porcentual facturado por cada mozo sobre el total
// 6) Si a cada mozo se le da el 5% de su venta cuánto le corresponde a cada uno
// 7) Cuál mozo atendió más personas en total
// 8) Cuántas facturas superaron $ 45 
// 9) Mesa a la que se facturó más veces, o sea que más recambio de clientes tuvo


#include <stdio.h>
#include <string.h>

int main()
{

    int mesas[12] = {0};
    int mozos[6] = {0};

    int option = 0;

    int cantFacturas = 0, facturacionTotal = 0;
    int cantMozos[6] = {0};
    int cantFacturacionMozos[6] = {0};
    float porcentualFacturacionMozos[6] = {0};
    int montoMesas[12] = {0};
    int cantMayor45 = 0;
    int cantPersonasPorMozo[6] = {0};
    int maxPersonas = 0, mozoMaxPersonas = 0;
    int cantFacturasMesa[12] = {0};

    while (1)
    {
        int nFactura, nMozo = 0, nMesa = 0, cantPersonasComieron = 0, montoCuenta = 0;

        printf("Cobro de mesa\n");
        printf("Ingresar nro de factura: \n");
        scanf("%d", &nFactura);
        if (nFactura == 0) break;
        printf("Ingresar nro mozo (1 to 6): \n");
        scanf("%d", &nMozo);
        printf("Ingresar nro mesa (1 to 12): \n");
        scanf("%d", &nMesa);
        printf("Cantidad de personas que comieron: \n");
        scanf("%d", &cantPersonasComieron);
        printf("Monto de la cuenta: \n");
        scanf("%d", &montoCuenta);

        cantFacturas++;
        cantMozos[nMozo - 1]++;
        cantFacturacionMozos[nMozo - 1] += montoCuenta;
        montoMesas[nMesa - 1] += montoCuenta;
        facturacionTotal += montoCuenta;
        cantPersonasPorMozo[nMozo - 1] += cantPersonasComieron;
        cantFacturasMesa[nMesa - 1]++;
        
        if (montoCuenta > 45) cantMayor45++;


        if (cantPersonasPorMozo[nMozo - 1] > maxPersonas) {
            maxPersonas = cantPersonasPorMozo[nMozo - 1];
            mozoMaxPersonas = nMozo;
        }
        
        do {
            printf("Desea ingresar otro cobro de mesa? (0-si 1-no): \n");
            scanf("%d", &option);
        } while (option != 0 && option != 1);
        
        if (option == 1) break; 
    }

    printf("*Resultados* \n");

    printf("Facturas realizadas: %d\n", cantFacturas);
    
    for (int i = 0; i < 6; i++)
    {
        printf("Cantidad de personas atendidas mozo nro %d: %d \n", i + 1, cantPersonasPorMozo[i]);
    }

    for (int i = 0; i < 12; i++)
    {
        printf("Monto facturado por la mesa nro %d: %d \n", i + 1, montoMesas[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        porcentualFacturacionMozos[i] = (facturacionTotal > 0) ? (cantFacturacionMozos[i] * 100.0 / facturacionTotal) : 0;
        printf("Porcentaje de facturacion del mozo nro %d: %.2f%%\n", i + 1, porcentualFacturacionMozos[i]);
    }

    printf("Monto correspondiente a cada mozo (5%% de sus ventas): \n");
    for (int i = 0; i < 6; i++)
    {
        float comision = cantFacturacionMozos[i] * 0.05;
        printf("Mozo nro %d: %.2f\n", i + 1, comision);
    }

    printf("Mozo que atendió más personas: Mozo nro %d con %d personas\n", mozoMaxPersonas, maxPersonas);
    printf("Cantidad de facturas que superaron $45: %d\n", cantMayor45);


    int mesaMasFacturada = 0, maxFacturasMesa = 0;
    for (int i = 0; i < 12; i++)
    {
        if (cantFacturasMesa[i] > maxFacturasMesa)
        {
            maxFacturasMesa = cantFacturasMesa[i];
            mesaMasFacturada = i + 1; 
        }
    } 
    printf("Mesa que fue facturada más veces: Mesa nro %d\n", mesaMasFacturada);

    printf("Fin programa.\n");

    return 0;
}

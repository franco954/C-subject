
// Ingresar facturas hasta nro de factura = 0, sumar sus importes y cúales y cuantas superan 
// los $1000.imprimir los resultados

// a. Sobre el ejercicio anterior indicar cuántas superan los $ 10000.-imprimir el 
// resultado
// b. Sobre el ejercicio anterior indicar cuántas estan entre $ 400 y $ 700 
// inclusive.imprimir el resultado



#include <stdio.h>
#define MAX_FACTURAS 100



int main(int argc, char const *argv[])
{

    int numerosFacturas[MAX_FACTURAS], cantFact1000 = 0, cantFact10000 = 0, cantFact400700 = 0, sumaTotal = 0,  option, i = 0;
    float promedioTotal = 0;

    do
    {
        printf("Desea ingresar una factura? (1=si, 0=no): ");
        scanf("%d", &option);
    } while (option != 1 && option != 0);
    
    while (option == 1)
    {
        int numFact = 0, importeFact = 0;
        printf("Ingrese numero de factura: ");
        scanf("%d", &numFact);
        numerosFacturas[i] = numFact;
        printf("Ingrese importe de la factura n%d: ", numFact);
        scanf("%d", &importeFact);
        sumaTotal += importeFact;
        if (importeFact > 1000){cantFact1000++;}
        if (importeFact > 10000){ cantFact10000++;}
        if (importeFact >= 400 && importeFact <= 700){cantFact400700++;}
        i++;
        
        do
        {
            printf("Desea ingresar otra factura? (1=si, 0=no): ");
            scanf("%d", &option);
        } while (option != 1 && option != 0);
    }





    printf("Facturas ingresadas: \n");
    for (int j = 0; j < i; j++) {
        printf("Factura n%d: %d\n", j + 1, numerosFacturas[j]);
    }
    printf("Suma total de las facturas: %d \n", sumaTotal);
    printf("Cantidad de facturas que superan los 1000$: %d \n", cantFact1000);
    printf("Cantidad de facturas que superan los 10000$: %d \n", cantFact10000);
    printf("Cantidad de facturas que oscilan entre 400$ y 700$$: %d \n", cantFact400700);
    


    return 0;
}
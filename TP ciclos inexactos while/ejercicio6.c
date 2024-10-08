

//  En una carrera de autos se ingresan el número de auto y su tiempo, indicar e imprimir cuál 
// ganó y cúal fue el último 






#include <stdio.h>

int option = 1, cAutos = 0, pAuto = 0, uAuto = 0;
float pTiempo = 0.0, uTiempo = 0.0;


struct dataAuto
{
    int n_Auto;
    float t_Auto;
};



struct dataAuto ingresoAuto(void){

    struct dataAuto dataAutoFuncion;

    printf("Ingresar numero del auto: ");
    scanf("%d", &dataAutoFuncion.n_Auto);
    printf("Ingresar su tiempo: ");
    scanf("%f", &dataAutoFuncion.t_Auto);

    return dataAutoFuncion;

}


int main(int argc, char const *argv[])
{

    while (option==1){

    struct dataAuto data;

    data = ingresoAuto();
    
    if (data.t_Auto > uTiempo || cAutos == 0)
        {
                uTiempo = data.t_Auto;
                uAuto = data.n_Auto;
        }
    if (data.t_Auto < pTiempo || cAutos == 0)
        {
                pTiempo = data.t_Auto;
                pAuto = data.n_Auto;
        }
    cAutos++;

    do
        {
            printf("Desea ingresar otro auto? (1=si, 0=no): ");
            scanf("%d", &option);
        } while (option != 1 && option != 0);
    }


    printf("El auto ganador es el nro %d con un tiempo de %.2f minutos \n", pAuto, pTiempo);
    printf("El auto perdedor es rl nro %d con un tiempo de %.2f minutos \n", uAuto, uTiempo);
    printf("Cantidad de autos ingresados: %d \n", cAutos);


    return 0;
}
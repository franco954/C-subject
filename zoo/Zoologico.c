

#include <stdio.h>
#include <stdlib.h>


char animal, op;
int nivel_energia, alimento_consumido, agua_consumida;


void validarNum(int num){
    if(num < 0){
        printf("No se puede ingresar valores negativos");
        exit(-1);
    };
}

void ingresoAnimal() {

        printf("Ingrese especie del animal: ");
        scanf("%s", &animal);

        printf("Nivel de energia del %s: ", &animal);
        scanf(" %d", &nivel_energia);

        while(nivel_energia < 0 || nivel_energia > 100){
            printf("Valor de energia incorrecto vuelva a intentarlo ");
            printf("Nivel de energia del %s: ", &animal);
            fflush( stdin );
            scanf("%d", &nivel_energia);
        };

        printf("Alimento consumido: ");
        scanf("%d", &alimento_consumido);
        validarNum(alimento_consumido);

        printf("Agua consumida: ");
        scanf("%d", &agua_consumida);
        validarNum(agua_consumida);

        if (nivel_energia >= 70 && alimento_consumido >= 500 && agua_consumida >= 2000)
        {
            printf("El animal está en perfecto estado de salud");
        }
        else if (nivel_energia < 70 && alimento_consumido >= 500 && agua_consumida >= 2000)
        {
            printf("El animal necesita descansar más");
        }
        else if (nivel_energia >= 70 && alimento_consumido < 500 && agua_consumida < 2000)
        {
            printf("El animal necesita comer y beber más");
        }
        else if (nivel_energia < 50 || alimento_consumido < 250 || agua_consumida < 1000)
        {
            printf("El animal está en estado crítico ");
        }
        if (nivel_energia == 100)
        {
            printf("El animal está lleno de energía");
        }
    }


int main(int argc, char const *argv[])
{

    printf("Desea ingresar un animal? (S/N) ");
    scanf(" %c", &op);

    while (op == 'S' || op == 's')
    {
        ingresoAnimal();
        printf("Desea ingresar otro animal? ");
        scanf(" %c", &op);
    }

    printf("Programa finalizado");
    return 0;
}

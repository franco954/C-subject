




#include <stdio.h>


int main(int argc, char const *argv[])
{
    
    int miArray[10];

    for (size_t i = 0; i < 10; i++)
    {
        int val;
        printf("Ingresar valor de la posicion nro %d del array: ", i);
        scanf("%d", &val);
        miArray[i] = val;
    };

    for (size_t j = 9; j < 10; j--)
    {

        printf("Posicion nro %d del array con un valor de: %d \n", j, miArray[j]);
    };
    
    
    return 0;
}

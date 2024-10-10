






#include <stdio.h>


int main(int argc, char const *argv[])
{
    //filas/columnas
    int miMatrix[3][3] = {
        {100,74,99},
        {11,36,68},
        {23,9,81}
    };

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("Valor de la fila %d, columna %d: %d \n", i + 1, j + 1, miMatrix[i][j]);
        }
        
    }
    

    
    
    
    return 0;
}






#include <stdio.h>


int main(int argc, char const *argv[])
{

    char miArray[11] = {'B','I','E','N','V','E','N','I','D','O','S'};

    
    for (size_t i = 0; i < 11; i++)
    {
        printf("%c", miArray[i]);
    }
    printf("\n");
    printf("Tamaño del array: %d posiciones", sizeof(miArray));
    
    
    
    return 0;
}

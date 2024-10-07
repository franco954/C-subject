



#include <stdio.h>

int main(int argc, char const *argv[])
{

    int n1,n2,n3,total;

    printf("Ingresar primer numero: ");
    scanf("%d", &n1);
    printf("Ingresar segundo numero: ");
    scanf("%d", &n2);
    printf("Ingresar tercer numero: ");
    scanf("%d", &n3);
    
    total = n1 + n2 + n3;

    printf("El total es: %d", total);

    return 0;
}
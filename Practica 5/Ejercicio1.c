#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array[]={22, 456, 58, 87, 64};
    int i;
    for ( i = 0; i <= 4; i++)
    {
        printf("Indice: %d \t Valor: %d\n", i, array[i]);
    }
    printf("Al reves\n");
    for ( i = 4; i >= 0; i--)
    {
        printf("Indice: %d \t Valor: %d\n", i, array[i]);
    }
}
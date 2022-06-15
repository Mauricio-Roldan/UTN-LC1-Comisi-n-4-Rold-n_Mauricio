#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array[]={22, 456, 58, 87, 64};
    int i;
    float promedio, suma=0;
    for ( i = 0; i <= 4; i++)
    {
        printf("Indice: %d \t Valor: %d\n", i, array[i]);
        suma = suma+array[i];
    }
    promedio = suma/i;
    printf("La suma es: %.0f\n", suma);
    printf("el promedio es: %.2f\n", promedio);
}
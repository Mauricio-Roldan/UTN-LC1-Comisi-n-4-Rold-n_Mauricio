#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float fact[6];
    float factMin=0, factMax=0, totalFact=0, promedio=0;
    for (int i = 0; i < 6; i++)
    {
        printf("Ingrese la facturacion de mes %d: ", i+1);
        scanf("%f", &fact[i]);
        if (i==0)
        {
            factMax=fact[i];
        }
        else
        {
            if (fact[i]>factMax)
            {
                factMax=fact[i];
            }
            
        }
        if (i==0)
        {
            factMin=fact[i];
        }
        else
        {
            if (fact[i]<factMin)
            {
                factMin=fact[i];
            }
            
        }
        totalFact=totalFact+fact[i];
    }
    promedio=totalFact/6;
    system("cls");
    printf("Facturacion total: %.2f\n", totalFact);
    printf("Promedio de facturacion: %.2f\n", promedio);
    printf("Facturacion maxima: %.2f\n", factMax);
    printf("Facturacion minima: %.2f\n", factMin);
    system("pause");
    return 0;
}
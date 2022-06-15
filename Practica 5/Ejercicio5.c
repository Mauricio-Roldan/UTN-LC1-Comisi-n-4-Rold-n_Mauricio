#include <stdio.h>
#include <stdlib.h>
int main()
{
    float inflacion[12] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    float infAnual=0, infMax, infMin;
    int mesMax, mesMin; 
    for ( int i = 0; i < 12; i++)
    {
        if (i==0)
        {
            infMax = inflacion[i];
            mesMax = i;
        }
        else
        {
            if (inflacion[i]>infMax)
            {
                infMax = inflacion[i];
                mesMax = i;
            }
            
        }
        if (i==0)
        {
            infMin = inflacion[i];
            mesMin = i;
        }
        else
        {
            if (inflacion[i]<infMin)
            {
                infMin = inflacion[i];
                mesMin = i;
            }
            
        }
        infAnual=infAnual+inflacion[i];
    }
    printf("***** INFLACION ANUAL *****\n");
    printf("La inflacion anual es de: %.2f\n", infAnual);
    printf("***** INFLACION MAXIMA *****\n");
    printf("Mes: %d\t Inflacion: %.1f\n", mesMax+1, infMax);
    printf("***** INFLACION MINIMA *****\n");
    printf("Mes: %d\t Inflacion: %.1f\n", mesMin+1, infMin);
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vector[6]={10, 20, 5, 15, 30, 20};
    int j, major, total=0, repeat=0;
    for ( int i = 0; i < 6; i++) //En este for se recorre todo el vector y se informa su contenido
    {
        printf("Indice: %d\t Valor: %d\n", i, vector[i]);
        total = total + vector[i];
        if (vector[i]==20)
        {
            repeat++;
        }
        if (i==0)
        {
            major=vector[i];
        }
        else
        {
            if (vector[i]>major)
            {
                major=vector[i];
            }
        }
    }
    printf("\n***** INDICES IMPARES *****\n\n");
    for (int i = 0; i < 6; i++)  //En este for se recorren todo el vector pero solo se informa el contenido de los indices impares
    {
        if (i%2 != 0)
        {
            printf("Indice %d:\t Valor: %d\n", i, vector[i]);
        }
        
    }
    printf("\n***** VALORES IMPARES *****\n\n");
    for (int i = 0; i < 6; i++) //En este for se recorren todo el vector pero solo se informan los indices con contenido impar
    {
        if (vector[i]%2==1)
        {
            printf("Indice %d:\t Valor: %d\n", i, vector[i]);
        }
    }
    for (int i = 0; i < 6; i++)
    {
        if (i==0)
        {
            major=vector[i];
        }
        else
        {
            if (vector[i]> major)
            {
                major=vector[i];
            }
            
        }
        
    }
    printf("El mayor es el numero %d\n", major);
    printf("El total de los valores es de: %d\n", total);
    printf("El numero 20 se repite %d veces\n", repeat);
    system("pause");
    return 0;
}
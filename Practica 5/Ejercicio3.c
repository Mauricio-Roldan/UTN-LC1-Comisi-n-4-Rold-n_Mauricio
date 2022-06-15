#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int array[5];
    int i, repeat=0;
    for ( i = 0; i < 5; i++)
    {
        printf("Ingrese un numero para la posicion %d: ", i+1);
        scanf("%d", &array[i]);
        if (array[i]==5)
        {
            repeat++;
        }
    }
    printf("El numero 5 se repite un total de %d veces\n", repeat);
    system("pause");
    return 0;
}    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nombre1[10];
    char nombre2[10];

    printf("ingrese un nombre: \n");
    scanf("%s", nombre1);

    printf("ingrese un nombre: \n");
    scanf("%s", nombre2);

    if (strcmp(nombre1,nombre2)==0)
    {
        printf("Los dos nombres son iguales\n");
    }
    else
    {
        if (strcmp(nombre1,nombre2)>0)
        {
            printf("%s precede a %s\n",nombre2, nombre1);
        }
        else
        {
            printf("%s precede a %s\n",nombre1, nombre2);
        }

    }
    system("pause");
    return 0;
}
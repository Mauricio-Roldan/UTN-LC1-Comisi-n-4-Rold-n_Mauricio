#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nombre[10][50];
    char apellido[10][50];
    for (int i = 0; i < 10; i++)
    {
        printf("ingrese el nombre: ");
        scanf("%s", &nombre[i]);
        printf("ingrese el apellido: ");
        scanf("%s", &apellido[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        strcat(nombre[i], (" "));
        printf("Nombre y Apellido: %s\n", strcat(nombre[i], apellido[i]));
    }
    
    system("Pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char cadena1[50], cadena2[50], cadena3[50];
    printf("Ingrese la cadena 1: ");
    scanf("%s", &cadena1);
    printf("Ingrese la cadena 2: ");
    scanf("%s", &cadena2);
    printf("Ingrese la cadena 3: ");
    scanf("%s", &cadena3);
    printf("Longitud de la cadena 1: %d\n", strlen(cadena1));
    printf("Longitud de la cadena 1: %d\n", strlen(cadena2));
    printf("Longitud de la cadena 1: %d\n", strlen(cadena3));
    system("pause");
    return 0;
}
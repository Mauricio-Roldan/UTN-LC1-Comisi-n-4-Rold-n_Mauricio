#include <stdio.h>
#include <stdlib.h>
int Alumno[2][10];
int main()
{
    int alumnosCargados=0, opc=0;
    int seguir=0;
    do
    {
        do
        {
            printf("1. Cargar Alumnos\n");
            printf("2. Buscar un alumno\n");
            printf("3. Modificar la nota de un alumno\n");
            printf("4. Mostrar un listado de los 10 alumnos\n");
            printf("5. Salir\n");
            scanf("%d", &opc);
            if (opc<1 || opc>5)
            {
                printf("Ingrese una opcion valida\n");
            }
        } while (opc<1 || opc>5);
        switch (opc)
        {
        case 1:
            cargarAlumno();
            alumnosCargados++;
            break;
        case 2:
            buscarAlumno();
            break;
        case 3:
            modificarNota();
            break;
        case 4:
            if (alumnosCargados==0)
            {
                printf("No hay alumnos cargados\n");
            }
            else
            {
                mostrarLista();
            }
            break;
        case 5:
            exit(EXIT_SUCCESS);
            break;
        }
        do
        {
            printf("Desea realizar otra accion? '1=si 2=no'\n");
            scanf("%d", &seguir);
            if (seguir!=1 && seguir!=0)
            {
                printf("Ingrese una opcion valida\n");
            }
        } while (seguir!=1 && seguir!=0);
    } while (seguir==1);
    
}


void cargarAlumno()
{
    for (int i = 0; i < 10; i++)
    {
        do
        {
            printf("Ingrese el DNI del Alumno %d: ", i+1);
            scanf("%d", &Alumno[0][i]);
        } while (Alumno[0][i]<10000000 || Alumno[0][i]>99999999);
        do
        {
            printf("Ingrese la nota del Alumno %d: ", i+1);
            scanf("%d", &Alumno[1][i]);
        } while (Alumno[1][i]<0 || Alumno[1][i]>10);
    }
}    


void buscarAlumno()
{
    int DNI, alumnoEncontrado=0;
    do
    {
        printf("Ingrese el DNI a buscar: ");
        scanf("%d", &DNI);
    } while (DNI<10000000 || DNI>99999999);
    for (int i = 0; i < 10; i++)
    {
        if (DNI==Alumno[0][i])
        {
            printf("DNI: %d\t NOTA: %d\n", Alumno[0][i], Alumno[1][i]);
            alumnoEncontrado=1;
        }
    }
    if (alumnoEncontrado==0)
    {
        printf("DNI inexistente\n");
    }
}


void modificarNota()
{
    int DNI, alumnoEncontrado=0;
    do
    {
        printf("Ingrese el DNI a buscar: ");
        scanf("%d", &DNI);
    } while (DNI<10000000 || DNI>99999999);
    for (int i = 0; i < 10; i++)
    {
        if (DNI==Alumno[0][i])
        {
            do
            {
                printf("Ingrese la nueva nota: ");
                scanf("%d", &Alumno[1][i]);
            } while (Alumno[1][i]<0 || Alumno[1][i]>10);
            alumnoEncontrado=1;
        }
    }
    if (alumnoEncontrado==0)
    {
        printf("DNI inexistente\n");
    }
}


void mostrarLista()
{
    for (int i = 0; i < 10; i++)
    {
        printf("Alumno: %d\t DNI: %d\n", i+1, Alumno[0][i]);
    }
}
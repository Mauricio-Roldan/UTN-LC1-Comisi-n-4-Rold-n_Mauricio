int cargarAlumno(int Alumno[2][10])
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
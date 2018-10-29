#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char id [50];
    char nombre [50];
    char apellido [50];
    char sueldo [50];
    int estado [50];
}sEmpleado;

int main()
{
    FILE* pArchivo;
    sEmpleado listadoEmpleados[10];
    int i=0;

    pArchivo = fopen("mock_data.csv", "r");
    while(!feof(pArchivo))
    {
        fscanf(pArchivo, "%[^,], %[^,], %[^,], %[^,], %[^\n]\n",
                listadoEmpleados[i].id, listadoEmpleados[i].nombre,
                listadoEmpleados[i].apellido, listadoEmpleados[i].sueldo,
                listadoEmpleados[i].estado);
        i++;
    }
    for(i=0; i<10; i++)
    {
        printf("%s - %s, %s - %s   _Estado: %s",listadoEmpleados[i].id, listadoEmpleados[i].nombre,
                listadoEmpleados[i].apellido, listadoEmpleados[i].sueldo,
                listadoEmpleados[i].estado);
    }
    return 0;
}

//EJERCICIO TERMINADO, FUNCIONA CORRECTAMENTE

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define almn 3

using namespace std;

struct alumno
{
    char nombre[30];
    int edad;
    int grado;
    float promedio;
};alumno estudiante[almn];

int main()
{
    int mayor,x;
    cout<<"\t\tREGISTRO ESTUDIANTES\n\n";
    for(int i=0;i<almn;i++)
    {
        cout<<"\n***************************\n";
        cout<<"\nDigite Nombre: ";
            cin.getline(estudiante[i].nombre,30);
            cin.ignore(256,'\n');

        cout<<"\nDigite Edad: ";
            cin>>estudiante[i].edad;

        cout<<"\nDigite Grado: ";
            cin>>estudiante[i].grado;

        cout<<"\nDigite Promedio de Notas: ";
            cin>>estudiante[i].promedio;
    }

    mayor=estudiante[0].promedio;

    for (int i=0; i<almn; i++){
        if (estudiante[i].promedio> mayor){
            mayor=estudiante[i].promedio;x=i;
        }
    }
    cout<<"\n\n\t\tMEJOR PROMEDIO\n\n";
    cout<<"\nLos datos del estudiande con mayor promedio son: \n";
    cout<<"\nNombre: "<<estudiante[x].nombre;
    cout<<"\nEdad: "<<estudiante[x].edad;
    cout<<"\nGrado: "<<estudiante[x].grado;
    cout<<"\nPromedio: "<<estudiante[x].promedio;
    cout<<"\n\n";
    system("pause");
    return 0;
}

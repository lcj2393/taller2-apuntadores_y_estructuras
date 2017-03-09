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
};alumno estudiante[almn],*pestudiante=estudiante;
int main()
{
    int x,mayor;

    cout<<"\t\tREGISTRO ESTUDIANTES\n\n";
    for(int i=0;i<almn;i++){
        cout<<"\n***************************\n";
        cout<<"\nDigite Nombre: ";
            cin>>(*(pestudiante+i)).nombre;
            cin.ignore(256,'\n');
        cout<<"\nDigite Edad: ";
            cin>>(*(pestudiante+i)).edad;
        cout<<"\nDigite Grado: ";
            cin>>(*(pestudiante+i)).grado;
        cout<<"\nDigite Promedio de Notas: ";
            cin>>(*(pestudiante+i)).promedio;
    }
    mayor=(*(pestudiante+0)).promedio;

    for (int i=0; i<almn; i++){
        if ((*(pestudiante+i)).promedio> mayor){
            mayor=(*(pestudiante+i)).promedio;x=i;
        }
    }

    cout<<"\n\n\t\tMEJOR PROMEDIO\n\n";
    cout<<"\nLos datos del estudiande con mayor promedio son: \n";
    cout<<"\nNombre: "<<(*(pestudiante+x)).nombre;
    cout<<"\nEdad: "<<(*(pestudiante+x)).edad;
    cout<<"\nGrado: "<<(*(pestudiante+x)).grado;
    cout<<"\nPromedio: "<<(*(pestudiante+x)).promedio;

    cout<<"\n\n";
    system("pause");
    return 0;
}

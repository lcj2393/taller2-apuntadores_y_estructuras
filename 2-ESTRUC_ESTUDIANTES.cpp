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
    int promedio;
};alumno estudiante[almn];

//float fmayor(float);

int main()
{
    int x;
    float n[almn];
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

    for(int i=0;i<almn;i++)
    {   n[i]=estudiante[i].promedio; }
    //mayor=(fmayor(n[almn]));
    if(n[0]>n[1] && n[0]>n[2])
      { x=0;}else
                {   if(n[1]>n[0] && n[1]>n[2])
                        { x=1;}else
                                {  if(n[2]>n[1] && n[2]>n[0])
                                        { x=2;
                        }
                }
        }

    cout<<"\n\n\t\tMEJOR PROMEDIO\n\n";
    cout<<"\nLos datos del estudiande con mayor promedio son: \n";
    cout<<"\nNombre: "<<estudiante[x].nombre;
    cout<<"\nEdad: "<<estudiante[x].edad;
    cout<<"\nGrado: "<<estudiante[x].grado;
    cout<<"\nPromedio: "<<estudiante[x].promedio;

    return 0;
    system("pause");
}

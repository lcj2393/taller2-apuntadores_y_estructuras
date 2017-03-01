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

int mayor(int);

int main()
{
    cout<<"\t\tREGISTRO ESTUDIANTES\n\n";
    for(int i=0;i<almn;i++)
    {
        system("cls");
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



    return 0;
}

int mayor(int n[almn])
{
    int x;
    for(int i=0;i<almn;i++)
    {
        if(n[i]>n[i+1])
          {
              x=n[i];
          }
    }
}

//EJERCICIO TERMINADO, FUNCIONA CORRECTAMENTE

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define almn 3

using namespace std;

struct calificaciones{
    float nota1;
    float nota2;
    float nota3;
    float promedio;
};

struct alumno{
    char nombre[30];
    char sexo;
    int edad;
    calificaciones notas[almn];
};alumno estudiante[almn];

int main()
{
    for(int i=0;i<almn;i++)
    {
    cout<<"\n\t\tREGISTRO ESTUDIANTE "<<i+1<<"\n";
    cout<<"\n***********************************************\n";
    cout<<"\nDigite Nombre: ";
        cin.getline(estudiante[i].nombre,30);
        cin.ignore(256,'\n');

    cout<<"\nDigite Sexo: ";
        cin>>estudiante[i].sexo;
        cin.ignore(256,'\n');

    cout<<"\nDigite Edad: ";
        cin>>estudiante[i].edad;
        cin.ignore(256,'\n');

    cout<<"\n\t\tREGISTRO DE NOTAS\n\n";
    cout<<"\nNota 1: ";
        cin>>estudiante[i].notas[i].nota1;
        cin.ignore(256,'\n');
    cout<<"\nNota 2: ";
        cin>>estudiante[i].notas[i].nota2;
        cin.ignore(256,'\n');
    cout<<"\nNota 3: ";
        cin>>estudiante[i].notas[i].nota3;
        cin.ignore(256,'\n');
    cout<<"\n***********************************************\n";

        estudiante[i].notas[i].promedio=(((estudiante[i].notas[i].nota1)+(estudiante[i].notas[i].nota2)+(estudiante[i].notas[i].nota3))/3);
    }
    system("cls");

    cout<<"\nEl registro de estudiantes es:\n\n";
    for(int i=0;i<almn;i++)
    {
        cout<<"\n\t\tESTUDIANTE "<<i+1<<"\n";
        cout<<"\n***********************************************\n";
        cout<<"\nNombre: "<<estudiante[i].nombre;
        cout<<"\nSexo: "<<estudiante[i].sexo;
        cout<<"\nEdad: "<<estudiante[i].edad;
        cout<<"\nNota 1: "<<estudiante[i].notas[i].nota1;
        cout<<"\nNota 2: "<<estudiante[i].notas[i].nota2;
        cout<<"\nNota 3: "<<estudiante[i].notas[i].nota3;
        cout<<"\nPromedio de Notas: "<<estudiante[i].notas[i].promedio;
        cout<<"\n***********************************************\n";
    }
    cout<<"\n\n";
    system("pause");
    return 0;
}

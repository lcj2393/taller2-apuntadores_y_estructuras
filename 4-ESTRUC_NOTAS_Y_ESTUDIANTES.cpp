//EJERCICIO TERMINADO, FUNCIONA CORRECTAMENTE

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define almn 3

using namespace std;

struct alumno
{
    char nombre[30];
    char sexo;
    int edad;
    float promedio;
};alumno estudiante[almn];

struct calificaciones
{
    float nota1;
    float nota2;
    float nota3;
};calificaciones notas[almn];

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

    cout<<"\n\t\tREGISTRO DE NOTAS\n\n";
    cout<<"\nNota 1: ";
        cin>>notas[i].nota1;
    cout<<"\nNota 2: ";
        cin>>notas[i].nota2;
    cout<<"\nNota 3: ";
        cin>>notas[i].nota3;
    cout<<"\n***********************************************\n";

        estudiante[i].promedio=((notas[i].nota1+notas[i].nota2+notas[i].nota3)/3);
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
        cout<<"\nPromedio de Notas: "<<estudiante[i].promedio;
        cout<<"\n***********************************************\n";
    }
    return 0;
    system("pause");
}

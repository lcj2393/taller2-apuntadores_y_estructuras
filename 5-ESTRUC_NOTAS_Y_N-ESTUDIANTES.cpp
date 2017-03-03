#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define almn 100

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
    int n;
    int c_almn=0;
    while(n!=0)
    {
        cout<<"\n\t\tREGISTRO ESTUDIANTE "<<c_almn+1<<"\n";
        cout<<"\n***********************************************\n";
        cout<<"\nDigite Nombre: ";
            cin.getline(estudiante[c_almn].nombre,30);
            cin.ignore(256,'\n');

        cout<<"\nDigite Sexo: ";
            cin>>estudiante[c_almn].sexo;
            cin.ignore(256,'\n');

        cout<<"\nDigite Edad: ";
            cin>>estudiante[c_almn].edad;

        cout<<"\n\t\tREGISTRO DE NOTAS\n\n";
        cout<<"\nNota 1: ";
            cin>>notas[c_almn].nota1;
        cout<<"\nNota 2: ";
            cin>>notas[c_almn].nota2;
        cout<<"\nNota 3: ";
            cin>>notas[c_almn].nota3;
        cout<<"\n***********************************************\n";
            estudiante[c_almn].promedio=((notas[c_almn].nota1+notas[c_almn].nota2+notas[c_almn].nota3)/3);

        cout<<"\nDesea seguir registrando estudiantes? (1<SI> o 0<NO>): ";
            cin>>n;
            if(n==1)
            {   c_almn++;}
    }

    cout<<"\nEl registro de estudiantes es:\n\n";
    for(int i=0;i<=c_almn;i++)
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

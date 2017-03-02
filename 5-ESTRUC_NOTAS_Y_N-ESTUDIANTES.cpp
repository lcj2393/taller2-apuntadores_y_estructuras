#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int almn=0;

struct alumno
{
    char nombre[30];
    char sexo;
    int edad;
    float promedio;
};alumno estudiante[0];

struct calificaciones
{
    float nota1;
    float nota2;
    float nota3;
};calificaciones notas[0];

int main()
{
    int n;
    while(n!=0)
    {
        cout<<"\n\t\tREGISTRO ESTUDIANTE "<<almn+1<<"\n";
        cout<<"\n***********************************************\n";
        cout<<"\nDigite Nombre: ";
            cin.getline(estudiante[almn].nombre,30);
            cin.ignore(256,'\n');

        cout<<"\nDigite Sexo: ";
            cin>>estudiante[almn].sexo;
            cin.ignore(256,'\n');

        cout<<"\nDigite Edad: ";
            cin>>estudiante[almn].edad;

        cout<<"\n\t\tREGISTRO DE NOTAS\n\n";
        cout<<"\nNota 1: ";
            cin>>notas[almn].nota1;
        cout<<"\nNota 2: ";
            cin>>notas[almn].nota2;
        cout<<"\nNota 3: ";
            cin>>notas[almn].nota3;
        cout<<"\n***********************************************\n";
            estudiante[almn].promedio=((notas[almn].nota1+notas[almn].nota2+notas[almn].nota3)/3);

        cout<<"\nDesea seguir registrando estudiantes? (1<SI> o 0<NO>): ";
            cin>>n;
            if(n==1)
            {   almn++;}
    }

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

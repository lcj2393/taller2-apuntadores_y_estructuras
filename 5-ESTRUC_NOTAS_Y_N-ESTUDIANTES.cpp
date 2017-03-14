//EJERCICIO TERMINADO, FUNCIONA CORRECTAMENTE

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define almn 100

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
    int n,x,y,mayor,menor;
    int c_almn=0;
    while(n!=0){
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
            cin.ignore(256,'\n');

        cout<<"\n\t\tREGISTRO DE NOTAS\n\n";
        cout<<"\nNota 1: ";
            cin>>estudiante[c_almn].notas[c_almn].nota1;
            cin.ignore(256,'\n');
        cout<<"\nNota 2: ";
            cin>>estudiante[c_almn].notas[c_almn].nota2;
            cin.ignore(256,'\n');
        cout<<"\nNota 3: ";
            cin>>estudiante[c_almn].notas[c_almn].nota3;
            cin.ignore(256,'\n');
        cout<<"\n***********************************************\n";
        estudiante[c_almn].notas[c_almn].promedio=(((estudiante[c_almn].notas[c_almn].nota1)+(estudiante[c_almn].notas[c_almn].nota2)+(estudiante[c_almn].notas[c_almn].nota3))/3);

        cout<<"\nDesea seguir registrando estudiantes? (1<SI> o 0<NO>): ";
            cin>>n;
            cin.ignore(256,'\n');
            if(n==1){
                c_almn++;   }else{
                                    c_almn++;n=0;   }
    }

    cout<<"\nEl registro de estudiantes es:\n\n";
    for(int i=0;i<=c_almn;i++){
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

    mayor=estudiante[0].notas[0].promedio;
    menor=estudiante[0].notas[0].promedio;

    for (int i=0; i<c_almn; i++){
        if (estudiante[i].notas[i].promedio > mayor){
            x=i;
        }
    }

    for (int i=0; i<c_almn; i++){
        if (estudiante[i].notas[i].promedio < menor){
            y=i;
        }
    }

    cout<<"\n\tMAYOR PROMEDIO\n";
    cout<<"\n***********************************************\n";
    cout<<"\nNombre: "<<estudiante[x].nombre;
    cout<<"\nSexo: "<<estudiante[x].sexo;
    cout<<"\nEdad: "<<estudiante[x].edad;
    cout<<"\nPromedio de Notas: "<<estudiante[x].notas[x].promedio;
    cout<<"\n***********************************************\n";

    cout<<"\n\t\tMENOR PROMEDIO\n";
    cout<<"\n***********************************************\n";
    cout<<"\nNombre: "<<estudiante[y].nombre;
    cout<<"\nSexo: "<<estudiante[y].sexo;
    cout<<"\nEdad: "<<estudiante[y].edad;
    cout<<"\nPromedio de Notas: "<<estudiante[y].notas[y].promedio;
    cout<<"\n***********************************************\n";

    cout<<"\n\n";
    system("pause");
    return 0;
}

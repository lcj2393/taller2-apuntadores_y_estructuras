#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define ct 100

using namespace std;

struct trabajador
{
    char nombre[30];
    int edad;
    int salario;
};trabajador nomina[ct];

int main()
{
    int mayor,menor,x,y,dato;
    int nt=0;//NUMERO DE TRABAJADORES
    while (dato !=0)
    {
        cout<<"\t\tREGISTRO TRABAJADORES\n\n";
        cout<<"\n***************************\n";
        cout<<"\nDigite Nombre del Trabajador: ";
            cin.getline(nomina[nt].nombre,30,'\n');
            cin.ignore(256,'\n');

        cout<<"\nDigite Edad: ";
            cin>>nomina[nt].edad;

        cout<<"\nDigite Salario: ";
            cin>>nomina[nt].salario;

        cout<<"\nDesea seguir Registrando Trabajadores? 1-(SI) o 0-(NO)";
            cin>>dato;
        if(dato==1)
        {   nt++;    }else{  dato==0;    }
    }

    mayor=nomina[0].salario;
    menor=nomina[0].salario;

    for (int i=0; i<nt; i++){
        if (nomina[i].salario> mayor){
            mayor=nomina[i].salario;x=i;
        }else{
            if (nomina[i].salario<menor){
                menor=nomina[i].salario;y=i;
            }
        }
    }

    cout<<"\n\n\t\tSALARIOS MAYOR Y MENOR\n\n";
    cout<<"\nLos datos del trabajador con Mayor salario es: \n";
    cout<<"\nNombre: "<<nomina[x].nombre;
    cout<<"\nEdad: "<<nomina[x].edad;
    cout<<"\nSalario: "<<nomina[x].salario;

    cout<<"\nLos datos del trabajador con Menor salario es: \n";
    cout<<"\nNombre: "<<nomina[y].nombre;
    cout<<"\nEdad: "<<nomina[y].edad;
    cout<<"\nSalario: "<<nomina[y].salario;
    return 0;
    system("pause");
}

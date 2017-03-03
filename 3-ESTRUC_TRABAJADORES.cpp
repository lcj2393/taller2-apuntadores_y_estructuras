#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int ct=0;//CANTIDAD DE TRABAJADORES
struct trabajador
{
    char nombre[30];
    int edad;
    int salario;
};

int main()
{
    trabajador nomina[ct];
    int x,y,dato;
    int n[ct];
    while (dato !=0)
    {
        cout<<"\t\tREGISTRO TRABAJADORES\n\n";
        cout<<"\n***************************\n";
        cout<<"\nDigite Nombre del Trabajador: ";
            cin.getline(nomina[ct].nombre,30);
            cin.ignore(256,'\n');

        cout<<"\nDigite Edad: ";
            cin>>nomina[ct].edad;

        cout<<"\nDigite Salario: ";
            cin>>nomina[ct].salario;

        cout<<"\nDesea seguir Registrando Trabajadores? 1-(SI) o 0-(NO)";
            cin>>dato;
        if(dato==1)
        {   ct++;    }else{  dato==0;    }
    }

    for(int i=0;i<ct;i++)
    {   n[i]=nomina[i].salario; }

    if(n[0]>n[1] && n[0]>n[2])
      { if(n[1]>n[2])
        {   x=0;y=1;    }
            else{   x=0;y=2;    }
      }else
        {   if(n[1]>n[0] && n[1]>n[2])
            { if(n[0]>n[2])
                {   x=1;y=2;   }
                    else{   x=1;y=0;    }
            }else
                {  if(n[2]>n[1] && n[2]>n[0])
                    {   if(n[0]>n[1])
                        {   x=2;y=1;}
                            else{   x=2;y=0;}
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

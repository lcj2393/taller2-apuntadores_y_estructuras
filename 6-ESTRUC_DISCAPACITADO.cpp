#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define cper 4//CANTIDAD DE PERSONAS

using namespace std;

struct listado_gral//LISTADO GENERAL CON PERSONAS CON Y SIN DISCAPACIDAD
{
    char nombre[30];
    bool dis;
};listado_gral persona[cper] ;

struct listado_1//PERSONAS CON DISCAPACIDAD
{
    char nombre[30];
    bool dis;
};listado_1 pdisc[cper];

struct listado_2//PERSONAS SIN DISCAPACIDAD
{
    char nombre[30];
    bool dis;
};listado_2 psdisc[cper];

int main()
{
    char tipo;
    int n;

    cout<<"\n\t\tREGISTRO PERSONAS\n";
    cout<<"\n***********************************************\n";
    for(int i=0;i<cper;i++)
    {
    cout<<"\nDigite Nombre: ";
        cin.getline(persona[i].nombre,30);
        cin.ignore(256,'\n');
    do
    {
        cout<<"\nEs Discapacitado(Si<S> o No<N>: ";
            cin>>tipo;

            switch(tipo)
            {
            case 'S':
                persona[i].dis=true;
                n=1;
                break;
            case 'N':
                persona[i].dis=false;
                n=1;
                break;
            default:cout<<"\nValor ingresado no valido.";
            n=0;
            }
    }while(n!=1);
        cout<<"\n***********************************************\n";
    }

    for(int i=0;i<cper;i++)
    {
        if(persona[i].dis== true)
        {
            strcpy(pdisc[i].nombre,persona[i].nombre);
        }else
            {
                strcpy(psdisc[i].nombre,persona[i].nombre);
            }
    }
   cout<<"\n***********************************************\n";
   cout<<"\t\tPERSONAS CON DISCAPACIDAD\n";
   cout<<"***********************************************\n";
   for(int i=0;i<cper;i++)
   {
       cout<<"\nNombre: "<<pdisc[i].nombre;
   }

   cout<<"\n***********************************************\n";
   cout<<"\t\tPERSONAS SIN DISCAPACIDAD\n";
   cout<<"***********************************************\n";
   for(int i=0;i<cper;i++)
   {
       cout<<"\nNombre: "<<psdisc[i].nombre;
   }
    return 0;
    system("pause");
}

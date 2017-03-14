//FALTA TERMINAR DE VALIDAR PORQUE NO IMPRIME LOS NOMBRES INGRESADOS

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define cper 100//CANTIDAD DE PERSONAS

using namespace std;

struct listado_gral//LISTADO GENERAL CON PERSONAS CON Y SIN DISCAPACIDAD
{
    char nombre[30];
    bool dis;
};listado_gral persona[cper] ;

int main()
{
    char tipo;
    int n,npersona;
    int cpdisc=0,cpsdisc=0;

    cout<<"Digite la cantidad de personas a registrar: ";cin>>npersona;

    system("cls");

    cout<<"\n\t\tREGISTRO PERSONAS\n";
    cout<<"\n***********************************************\n";
    for(int i=0;i<npersona;i++){
        cout<<"\nDigite Nombre: ";
        cin.getline(persona[i].nombre,30);
        cin.ignore(256,'\n');
    do{
        cout<<"\nEs Discapacitado(Si<S> o No<N>: ";
            cin>>tipo;
            cin.ignore(256,'\n');

            switch(tipo){
            case 'S':
                persona[i].dis=true;
                n=1;cpdisc++;
                break;
            case 'N':
                persona[i].dis=false;
                n=1;cpsdisc++;
                break;
            default:cout<<"\nValor ingresado no valido.";
            n=0;
            }
        }while(n!=1);
            cout<<"\n***********************************************\n";
    }
    char pdisc[cpdisc][30];
    char psdisc[cpsdisc][30];

    for(int i=0;i<npersona;i++){
        if(persona[i].dis== true){

            strcpy(pdisc[i],persona[i].nombre);

        }else{
                if(persona[i].dis== false){
            strcpy(psdisc[i],persona[i].nombre);
                }
            }
    }
   cout<<"\n***********************************************\n";
   cout<<"\t\tPERSONAS CON DISCAPACIDAD\n";
   cout<<"***********************************************\n";
   for(int i=0;i<cpdisc;i++){
       cout<<"\nNombre: "<<pdisc[i];
   }
   cout<<"\n***********************************************\n";
   cout<<"\t\tPERSONAS SIN DISCAPACIDAD\n";
   cout<<"***********************************************\n";
   for(int i=0;i<cpsdisc;i++){
       cout<<"\nNombre: "<<psdisc[i];
   }
    system("pause");
    return 0;
}

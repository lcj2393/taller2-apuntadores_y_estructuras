//EJERCICIO TERMINADO, FUNCIONA CORRECTAMENTE

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct competidor
{
    char nombre[30];
    int edad;
    char sexo;
    char club[10];
};

competidor concursante;

int main()
{
    cout<<"\tCOMPETIDORES\n";
    cout<<"\nDigite Nombre: ";
        cin.getline(concursante.nombre,30);
        cin.ignore(256,'\n');

    cout<<"\nDigite Sexo (M=Masculino F=Femenino): ";
        cin>>concursante.sexo;
        cin.ignore(256,'\n');

    cout<<"\nDigite Club: ";
        cin.getline(concursante.club,10);
        cin.ignore(256,'\n');

    cout<<"\nDigite Edad: ";
        cin>>concursante.edad;

    system("cls");
    cout<<"\tDATOS DEL PARTICIPANTE\n";
    cout<<"\nLos datos del participante son:\n";

    cout<<"Nombre: "<<concursante.nombre<<"\n";
    cout<<"Edad: "<<concursante.edad<<"\n";
    cout<<"Sexo: "<<concursante.sexo<<"\n";
    cout<<"Club: "<<concursante.club<<"\n";

    if(concursante.edad <=15){
        cout<<"Categoria de Competicion: Infantil\n";
    }else
        {   if (concursante.edad >15 && concursante.edad <=30){
               cout<<"Categoria de Competicion: Joven\n";
                }else
                    {   if (concursante.edad >30){
                        cout<<"Categoria de Competicion: Adulto\n";
                }
            }
        }
    system("pause");
    return 0;
}

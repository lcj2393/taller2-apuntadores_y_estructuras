#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

void pedir_nombre(char *);
void c_vocales(char *);

using namespace std;

int main()
{
    char nombre,*pnombre=&nombre;

    pedir_nombre(pnombre);
    c_vocales(pnombre);
    return 0;
}

void pedir_nombre(char *pnombre){

    cout<<"\nDigite Nombre: ";
    cin>>*pnombre;
    cout<<"\n\n";
}

void c_vocales(char *p){

    int l_nombre;
    int n_v=0;
    char c_v;
    int nn;

    l_nombre=strlen(p);

    for(int i=0;i<l_nombre;i++){

        strcpy(c_v,*(p+i));
        //nn=strcmp("a",c_v);

        /*if(()//||(strcmp(c_v,'e')==1)||(strcmp(c_v,'i')==1)||(strcmp(c_v,'o')==1)||(strcmp(c_v,'u')==1) )
        {
            n_v++;
        }*/
    }

    cout<<"\nEl nombre ingresado tiene *"<<c_v<<"* vocales.\n";
}


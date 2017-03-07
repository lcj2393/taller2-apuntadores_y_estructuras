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
    char nombre[10],*pnombre=nombre;

    pedir_nombre(pnombre);
    c_vocales(pnombre);
    return 0;
}

void pedir_nombre(char *pnombre){

    cout<<"\nDigite Nombre: ";
    cin>>*pnombre;
    cout<<"\n";
}

void c_vocales(char *p){

    int l_nombre;
    int n_v=0;
    char c_v[2];

    l_nombre=strlen(p);

    for(int i=0;i<(l_nombre);i++){

        c_v[0]=*(p+i);

        switch(c_v[0]){
    case 'a':
        n_v++;
        break;
    case 'e':
        n_v++;
        break;
    case 'i':
        n_v++;
        break;
    case 'o':
        n_v++;
        break;
    case 'u':
        n_v++;
        break;
        }

    }
    cout<<"\nEl nombre tiene "<<l_nombre+1<<" letras.\n";
    cout<<"\nEl nombre ingresado tiene "<<n_v<<" vocales.\n";
}

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
    char nombre[30],*pnombre=nombre;

    pedir_nombre(pnombre);
    c_vocales(pnombre);
    return 0;
}

void pedir_nombre(char *pnombre){

    cout<<"\nDigite Nombre: ";
    cin.getline(pnombre,30);
    cin.ignore(256,'\n');
    cout<<"\n";
}

void c_vocales(char *p){

    int l_nombre;
    int n_a=0,n_e=0,n_i=0,n_o=0,n_u=0,n_v;
    char c_v[2];

    l_nombre=strlen(p);

    for(int i=0;i<(l_nombre+1);i++){

        c_v[0]=*(p+1);

        switch(c_v[0]){
    case 'a':
        n_a++;n_v;
        break;
    case 'e':
        n_e++;n_v;
        break;
    case 'i':
        n_i++;n_v;
        break;
    case 'o':
        n_o++;n_v;
        break;
    case 'u':
        n_u++;n_v;
        break;
        }

    }
    cout<<"\nEl nombre ingresado tiene "<<n_v<<" vocales.\n";
    cout<<"\na= "<<n_a;
    cout<<"\ne= "<<n_e;
    cout<<"\ni= "<<n_i;
    cout<<"\no= "<<n_o;
    cout<<"\nu= "<<n_u;
}

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void llenar_arreglo(int *,int);
void busqueda(int *, int);

using namespace std;
int main()
{
    int nnum;
    printf("\nDigite tamaño del vector: ");
    cin>>nnum;

    int arreglo[nnum],*parreglo=arreglo;

    llenar_arreglo(parreglo,nnum);
    busqueda(parreglo,nnum);
    return 0;
}

void llenar_arreglo(int *p,int nnum){

    for(int i=0;i<nnum;i++)
    {
        printf("Ingrese valor %d: ",i+1);
        scanf("%d",&(*(p+i)));
    }
}

void busqueda(int *p, int nnum){
    int dato;
    printf("\nDigite Valor a Colsultar: ");
    cin>>dato;

    for(int i=0;i<nnum;i++){
        if(*(p+i)==dato){
            printf("\nEl Valor buscado %d esta en la pocision %p\n",*(p+i),(p+i));
        }
    }
}

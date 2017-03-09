//EJERCICIO TERMINADO, FUNCIONA CORRECTAMENTE

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
    printf("\n\n");
    system("pause");
    return 0;
}

void llenar_arreglo(int *p,int nnum){

    for(int i=0;i<nnum;i++){
        printf("Ingrese valor %d: ",i+1);
        scanf("%d",&(*(p+i)));
    }
}

void busqueda(int *p, int nnum){
    int nbusq;
    int n=0;
    do{
    printf("\nDigite Valor a Colsultar: ");
    cin>>nbusq;

    for(int i=0;i<nnum;i++){
        if(*(p+i)==nbusq){
            printf("\nEl Valor buscado %d esta en la pocision %p\n",*(p+i),(p+i));n++;
        }
    }
    if(n==0){
        printf("\nEl valor ingresado no esta en el Vector\n");
    }else{
        n=1;
        }
    }while(n!=1);
}

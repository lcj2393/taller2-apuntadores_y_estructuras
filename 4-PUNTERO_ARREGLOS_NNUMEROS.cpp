//EJERCICIO TERMINADO, FUNCIONA CORRECTAMENTE

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void llenar_arreglo(int *,int);
void imprimir_arreglo(int *, int);
void v_menor(int *, int);

using namespace std;
int main()
{
    int nnum;
    printf("\nDigite tamaño del vector: ");
    cin>>nnum;

    int arreglo[nnum],*parreglo=arreglo;

    llenar_arreglo(parreglo,nnum);
    imprimir_arreglo(parreglo,nnum);
    v_menor(parreglo,nnum);
    printf("\n\n");
    system("pause");
    return 0;
}

void llenar_arreglo(int *p,int nnum){

    for(int i=0;i<nnum;i++)
    {
        printf("Ingrese valor %d: ",i+1);
        scanf("%d",&(*(p+i)));
    }
}

void imprimir_arreglo(int *p, int nnum){

printf("\nLos valores del Vector y la Direccion de cada uno es: \n");
    int aux=0,*direccion;
    for (int i=0;i<nnum;i++)
    {
        printf("\nValor (%i): %d en Pocision %p\n",i+1,*(p+i),(p+i));
        if(*(p+i)>aux){
            aux=*(p+i);
            direccion=(p+i);
        }
    }
}

void v_menor (int *p,int nnum){
    int menor=*(p+0),*dir;

    for (int i=0; i<nnum; i++){
        if (*(p+i)< menor){
        menor=*(p+i);dir=(p+i);
        }
    }
    printf("\nEl Valor menor es %d y esta en la pocision %p.",menor,dir);
}

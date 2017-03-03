#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define t_arreglo 10
void llenar_arreglo(int *);
void imprimir_arreglo(int *);

using namespace std;
int main()
{
    int arreglo[t_arreglo],*parreglo=arreglo;

    llenar_arreglo(parreglo);
    imprimir_arreglo(parreglo);
    return 0;
}

void llenar_arreglo(int*p){

    for(int i=0;i<t_arreglo;i++)
    {
        printf("Ingrese valor %d: ",i+1);
        scanf("%d",&(*(p+i)));
    }
}

void imprimir_arreglo(int *p){

printf("\nLos valores que son Pares del Vector y la direccion de cada uno es: \n");

for (int i=0;i<t_arreglo;i++){
        if (*(p+i)%2==0){
            printf("%d Es PAR y con pocision de memoria %p\n",*(p+i),(p+i));*(p+i);
        }
    }

}

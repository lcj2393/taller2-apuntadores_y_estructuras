//EJERCICIO TERMINADO, FUNCIONA CORRECTAMENTE

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void llenar_arreglo(int *,int);
void men_a_may(int *, int);

using namespace std;
int main()
{
    int nnum;
    printf("\nDigite tamaño del vector: ");
    cin>>nnum;

    int arreglo[nnum],*parreglo=arreglo;

    llenar_arreglo(parreglo,nnum);
    men_a_may(parreglo,nnum);
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

void men_a_may(int *p, int nnum){
    int aux;
    for(int i=0;i<nnum;i++){
        for(int j=i+1;j<nnum;j++){
            if(*(p+j)<(*(p+i))){
                aux=*(p+j);
                *(p+j)=*(p+i);
                *(p+i)=*(p+j);
                *(p+i)=aux;
            }
        }
    }for (int i=0;i<nnum;i++){
        printf("\nValor (%i): %d\n",i+1,*(p+i));
    }
}

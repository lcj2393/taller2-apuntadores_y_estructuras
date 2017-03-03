#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void parimpar(int *);
void pedirnumero(int *);

int main()
{	int n, *pn=&n;
    pedirnumero(pn);
    parimpar(pn);
    return 0;
}

void pedirnumero (int *numerito)
{
    printf("\nDigine numero a calcular: \n");
    scanf("%d",&(*numerito));

    printf("Valor %d almacenado en la pocision de Memoria %p\n",*numerito,numerito);
}

void parimpar (int *pn)//FUNCION PARA CALCULO PAR E IMPAR
{
    if (*pn%2!=0){
        printf("\nEl valor ingresado es Impar.");
    }else{
        printf("\nEl valor ingresado es Par.");
        }
}

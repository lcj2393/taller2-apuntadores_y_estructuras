#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void fprimos(int *);
void pedirnumero(int *);

int main()
{	int n, *pn=&n;
    pedirnumero(pn);
    fprimos(pn);
    return 0;
}

void pedirnumero (int *numerito)
{
    printf("\nDigite numero a calcular: ");
    scanf("%d",&(*numerito));

    printf("\nValor ingresado <%d>, esta almacenado en la pocision de Memoria %p y ",*numerito,numerito);
}

void fprimos(int *pn)//Fincion para calculo de numeros primos
	{	int a=0,i;
 		for(i=1;i<(*(pn+1));i++)
		 {	if(*pn%i==0){a++;	} }
 		if(a!=2){	cout<<"No es Primo\n";	}else{	cout<<"Si es Primo\n";	}
	}
